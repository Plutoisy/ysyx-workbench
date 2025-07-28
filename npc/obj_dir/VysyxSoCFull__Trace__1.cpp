// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_1(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7599);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_12;
    VlWide<8>/*255:0*/ __Vtemp_18;
    VlWide<8>/*255:0*/ __Vtemp_24;
    VlWide<8>/*255:0*/ __Vtemp_30;
    VlWide<8>/*255:0*/ __Vtemp_36;
    VlWide<8>/*255:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<8>/*255:0*/ __Vtemp_50;
    VlWide<8>/*255:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_58;
    VlWide<8>/*255:0*/ __Vtemp_64;
    VlWide<8>/*255:0*/ __Vtemp_70;
    VlWide<4>/*127:0*/ __Vtemp_71;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__unnamedblk1__DOT__rx_z_1),21);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__unnamedblk1__DOT__rx_z_2),21);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__unnamedblk1__DOT__rx_z_3),21);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__unnamedblk1__DOT__rx_z_4),21);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats),5);
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                    >> 5U))));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__f_valid));
        bufp->chgIData(oldp+7,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_a),20);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_b),20);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_c),20);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_d),20);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_e),20);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__tx_a),20);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__tx_b),20);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__tx_c),20);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__tx_d),20);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__tx_e),20);
        bufp->chgBit(oldp+17,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_first));
        bufp->chgIData(oldp+18,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_delta),21);
        bufp->chgBit(oldp+19,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_allow));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q_io_deq_ready));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_first_1));
        bufp->chgIData(oldp+22,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_delta_1),21);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_allow_1));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q_io_deq_ready));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_first_2));
        bufp->chgIData(oldp+26,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_delta_2),21);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_allow_2));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q_io_deq_ready));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_first_3));
        bufp->chgIData(oldp+30,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_delta_3),21);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_allow_3));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qd_q_io_deq_ready));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_first_4));
        bufp->chgIData(oldp+34,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_delta_4),21);
        bufp->chgBit(oldp+35,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_allow_4));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q_io_deq_ready));
        bufp->chgIData(oldp+37,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__mask),19);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__msbOH),20);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__mask_1),19);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__msbOH_1),20);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__mask_2),19);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__msbOH_2),20);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__mask_3),19);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__msbOH_3),20);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__mask_4),19);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__msbOH_4),20);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__requests),6);
        bufp->chgCData(oldp+48,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__xmit),2);
        bufp->chgBit(oldp+49,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__allowReturn));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__first));
        bufp->chgCData(oldp+51,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__state),6);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__readys_mask),6);
        bufp->chgSData(oldp+53,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__readys_unready),12);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__winner),6);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__grant),6);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__allowed),6);
        bufp->chgBit(oldp+57,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__send));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_send_REG));
        bufp->chgCData(oldp+59,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG),6);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_0),32);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_1),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_2),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_3),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_4),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_5),32);
        bufp->chgBit(oldp+66,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__valid_1)))));
        bufp->chgBit(oldp+67,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__valid_0) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_allow))));
        bufp->chgIData(oldp+68,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_0_last));
        bufp->chgCData(oldp+70,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+71,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__allowed))));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__valid_0));
        bufp->chgIData(oldp+73,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_0_data),32);
        bufp->chgBit(oldp+74,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_0_last));
        bufp->chgCData(oldp+75,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__valid_1));
        bufp->chgIData(oldp+77,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_1_data),32);
        bufp->chgBit(oldp+78,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_1_last));
        bufp->chgCData(oldp+79,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+80,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__valid_1)))));
        bufp->chgBit(oldp+81,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_0) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_allow_1))));
        bufp->chgIData(oldp+82,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+83,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_0_last));
        bufp->chgCData(oldp+84,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+85,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                     >> 1U))));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__valid_0));
        bufp->chgIData(oldp+87,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_0_data),32);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_0_last));
        bufp->chgCData(oldp+89,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+90,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__valid_1));
        bufp->chgIData(oldp+91,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_1_data),32);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_1_last));
        bufp->chgCData(oldp+93,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+94,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__valid_1)))));
        bufp->chgBit(oldp+95,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_0) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_allow_2))));
        bufp->chgIData(oldp+96,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_0_last));
        bufp->chgCData(oldp+98,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+99,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                     >> 2U))));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__valid_0));
        bufp->chgIData(oldp+101,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_0_data),32);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_0_last));
        bufp->chgCData(oldp+103,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+104,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__valid_1));
        bufp->chgIData(oldp+105,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_1_data),32);
        bufp->chgBit(oldp+106,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_1_last));
        bufp->chgCData(oldp+107,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+108,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__valid_1)))));
        bufp->chgBit(oldp+109,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__valid_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_allow_3))));
        bufp->chgIData(oldp+110,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+111,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_0_last));
        bufp->chgCData(oldp+112,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+113,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                      >> 3U))));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__valid_0));
        bufp->chgIData(oldp+115,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_0_data),32);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_0_last));
        bufp->chgCData(oldp+117,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+118,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__valid_1));
        bufp->chgIData(oldp+119,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_1_data),32);
        bufp->chgBit(oldp+120,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_1_last));
        bufp->chgCData(oldp+121,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+122,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__valid_1)))));
        bufp->chgBit(oldp+123,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_allow_4))));
        bufp->chgIData(oldp+124,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+125,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_0_last));
        bufp->chgCData(oldp+126,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+127,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                      >> 4U))));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__valid_0));
        bufp->chgIData(oldp+129,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_0_data),32);
        bufp->chgBit(oldp+130,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_0_last));
        bufp->chgCData(oldp+131,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+132,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__valid_1));
        bufp->chgIData(oldp+133,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_1_data),32);
        bufp->chgBit(oldp+134,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_1_last));
        bufp->chgCData(oldp+135,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+136,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__valid_0));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__valid_1));
        bufp->chgIData(oldp+138,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+139,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_1_last));
        bufp->chgCData(oldp+140,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+141,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_1)))));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_0));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_1));
        bufp->chgIData(oldp+144,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+145,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_1_last));
        bufp->chgCData(oldp+146,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+147,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_1)))));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_0));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_1));
        bufp->chgIData(oldp+150,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+151,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_1_last));
        bufp->chgCData(oldp+152,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+153,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__valid_0));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__valid_1));
        bufp->chgIData(oldp+155,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+156,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_1_last));
        bufp->chgCData(oldp+157,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+158,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_1)))));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_0));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_1));
        bufp->chgIData(oldp+161,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+162,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_1_last));
        bufp->chgCData(oldp+163,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_1_beats),7);
        bufp->chgIData(oldp+164,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 0x10U)))),20);
        bufp->chgIData(oldp+165,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               << 4U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                 >> 0x1cU)))),20);
        bufp->chgIData(oldp+166,((0xfffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 8U))),20);
        bufp->chgIData(oldp+167,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                 >> 0x14U)))),20);
        bufp->chgIData(oldp+168,((0xfffffU & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])),20);
        __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_c)) 
                                  << 0x28U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_d)) 
                                                << 0x14U) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_e)))));
        __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b)))) 
                          << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_c)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_d)) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_e)))) 
                                               >> 0x20U)));
        __Vtemp_1[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b)))) 
                          >> 4U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                               << 0x14U) 
                                              | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b))) 
                                             >> 0x20U)) 
                                    << 0x1cU));
        __Vtemp_1[3U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b))) 
                                  >> 0x20U)) >> 4U);
        bufp->chgWData(oldp+169,(__Vtemp_1),100);
        bufp->chgWData(oldp+173,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),100);
        bufp->chgBit(oldp+177,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__valid_1)))));
        bufp->chgIData(oldp+178,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__Vcellinp__rxQ__io_enq_bits_data),32);
        bufp->chgBit(oldp+179,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__Vcellinp__rxQ__io_deq_ready));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__valid_0));
        bufp->chgIData(oldp+181,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_0_data),32);
        bufp->chgBit(oldp+182,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_0_last));
        bufp->chgCData(oldp+183,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+184,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__valid_1));
        bufp->chgIData(oldp+185,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_1_data),32);
        bufp->chgBit(oldp+186,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_1_last));
        bufp->chgCData(oldp+187,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_1_beats),7);
        bufp->chgIData(oldp+188,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 0x10U)))),20);
        bufp->chgIData(oldp+189,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               << 4U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                 >> 0x1cU)))),20);
        bufp->chgIData(oldp+190,((0xfffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 8U))),20);
        bufp->chgIData(oldp+191,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                 >> 0x14U)))),20);
        bufp->chgIData(oldp+192,((0xfffffU & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])),20);
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_c)) 
                                  << 0x28U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_d)) 
                                                << 0x14U) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_e)))));
        __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b)))) 
                          << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_c)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_d)) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_e)))) 
                                               >> 0x20U)));
        __Vtemp_2[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b)))) 
                          >> 4U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                               << 0x14U) 
                                              | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b))) 
                                             >> 0x20U)) 
                                    << 0x1cU));
        __Vtemp_2[3U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b))) 
                                  >> 0x20U)) >> 4U);
        bufp->chgWData(oldp+193,(__Vtemp_2),100);
        bufp->chgWData(oldp+197,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),100);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z),21);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_1),21);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_2),21);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_3),21);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_4),21);
        bufp->chgBit(oldp+206,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                      >> 5U))));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__f_valid));
        bufp->chgIData(oldp+208,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_a),20);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_b),20);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_c),20);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_d),20);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_e),20);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__tx_a),20);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__tx_b),20);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__tx_c),20);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__tx_d),20);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__tx_e),20);
        bufp->chgBit(oldp+218,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_first));
        bufp->chgIData(oldp+219,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_delta),21);
        bufp->chgBit(oldp+220,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q_io_deq_ready));
        bufp->chgBit(oldp+222,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_first_1));
        bufp->chgIData(oldp+223,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_delta_1),21);
        bufp->chgBit(oldp+224,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_1));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q_io_deq_ready));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_first_2));
        bufp->chgIData(oldp+227,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_delta_2),21);
        bufp->chgBit(oldp+228,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_2));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q_io_deq_ready));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_first_3));
        bufp->chgIData(oldp+231,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_delta_3),21);
        bufp->chgBit(oldp+232,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_3));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q_io_deq_ready));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_first_4));
        bufp->chgIData(oldp+235,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_delta_4),21);
        bufp->chgBit(oldp+236,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_4));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q_io_deq_ready));
        bufp->chgIData(oldp+238,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__mask),19);
        bufp->chgIData(oldp+239,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__msbOH),20);
        bufp->chgIData(oldp+240,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__mask_1),19);
        bufp->chgIData(oldp+241,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__msbOH_1),20);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__mask_2),19);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__msbOH_2),20);
        bufp->chgIData(oldp+244,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__mask_3),19);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__msbOH_3),20);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__mask_4),19);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__msbOH_4),20);
        bufp->chgCData(oldp+248,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__requests),6);
        bufp->chgCData(oldp+249,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__xmit),2);
        bufp->chgBit(oldp+250,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowReturn));
        bufp->chgBit(oldp+251,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__first));
        bufp->chgCData(oldp+252,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__state),6);
        bufp->chgCData(oldp+253,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__readys_mask),6);
        bufp->chgSData(oldp+254,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__readys_unready),12);
        bufp->chgCData(oldp+255,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__winner),6);
        bufp->chgCData(oldp+256,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__grant),6);
        bufp->chgCData(oldp+257,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed),6);
        bufp->chgBit(oldp+258,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__send));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_send_REG));
        bufp->chgCData(oldp+260,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG),6);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_0),32);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_1),32);
        bufp->chgIData(oldp+263,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_2),32);
        bufp->chgIData(oldp+264,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_3),32);
        bufp->chgIData(oldp+265,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_4),32);
        bufp->chgIData(oldp+266,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_5),32);
        bufp->chgBit(oldp+267,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__valid_1)))));
        bufp->chgBit(oldp+268,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__valid_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow))));
        bufp->chgIData(oldp+269,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+270,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_0_last));
        bufp->chgCData(oldp+271,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+272,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed))));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__valid_0));
        bufp->chgIData(oldp+274,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_0_data),32);
        bufp->chgBit(oldp+275,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_0_last));
        bufp->chgCData(oldp+276,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+277,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__valid_1));
        bufp->chgIData(oldp+278,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_1_data),32);
        bufp->chgBit(oldp+279,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_1_last));
        bufp->chgCData(oldp+280,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+281,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__valid_1)))));
        bufp->chgBit(oldp+282,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_1))));
        bufp->chgIData(oldp+283,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+284,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_0_last));
        bufp->chgCData(oldp+285,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+286,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                      >> 1U))));
        bufp->chgBit(oldp+287,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__valid_0));
        bufp->chgIData(oldp+288,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_0_data),32);
        bufp->chgBit(oldp+289,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_0_last));
        bufp->chgCData(oldp+290,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+291,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__valid_1));
        bufp->chgIData(oldp+292,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_1_data),32);
        bufp->chgBit(oldp+293,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_1_last));
        bufp->chgCData(oldp+294,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+295,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__valid_1)))));
        bufp->chgBit(oldp+296,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_2))));
        bufp->chgIData(oldp+297,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+298,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_0_last));
        bufp->chgCData(oldp+299,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                      >> 2U))));
        bufp->chgBit(oldp+301,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__valid_0));
        bufp->chgIData(oldp+302,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_0_data),32);
        bufp->chgBit(oldp+303,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_0_last));
        bufp->chgCData(oldp+304,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+305,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__valid_1));
        bufp->chgIData(oldp+306,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_1_data),32);
        bufp->chgBit(oldp+307,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_1_last));
        bufp->chgCData(oldp+308,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+309,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__valid_1)))));
        bufp->chgBit(oldp+310,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__valid_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_3))));
        bufp->chgIData(oldp+311,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+312,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_0_last));
        bufp->chgCData(oldp+313,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+314,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                      >> 3U))));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__valid_0));
        bufp->chgIData(oldp+316,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_0_data),32);
        bufp->chgBit(oldp+317,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_0_last));
        bufp->chgCData(oldp+318,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+319,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__valid_1));
        bufp->chgIData(oldp+320,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_1_data),32);
        bufp->chgBit(oldp+321,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_1_last));
        bufp->chgCData(oldp+322,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+323,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__valid_1)))));
        bufp->chgBit(oldp+324,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_4))));
        bufp->chgIData(oldp+325,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+326,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_0_last));
        bufp->chgCData(oldp+327,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+328,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                      >> 4U))));
        bufp->chgBit(oldp+329,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__valid_0));
        bufp->chgIData(oldp+330,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_0_data),32);
        bufp->chgBit(oldp+331,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_0_last));
        bufp->chgCData(oldp+332,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+333,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__valid_1));
        bufp->chgIData(oldp+334,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_1_data),32);
        bufp->chgBit(oldp+335,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_1_last));
        bufp->chgCData(oldp+336,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+337,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__valid_0));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__valid_1));
        bufp->chgIData(oldp+339,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+340,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_1_last));
        bufp->chgCData(oldp+341,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+342,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_1)))));
        bufp->chgBit(oldp+343,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_0));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_1));
        bufp->chgIData(oldp+345,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+346,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_1_last));
        bufp->chgCData(oldp+347,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+348,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_1)))));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_0));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_1));
        bufp->chgIData(oldp+351,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+352,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_1_last));
        bufp->chgCData(oldp+353,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+354,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__valid_0));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__valid_1));
        bufp->chgIData(oldp+356,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+357,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_1_last));
        bufp->chgCData(oldp+358,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+359,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_1)))));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_0));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_1));
        bufp->chgIData(oldp+362,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+363,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_1_last));
        bufp->chgCData(oldp+364,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_1_beats),7);
        bufp->chgIData(oldp+365,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 0x10U)))),20);
        bufp->chgIData(oldp+366,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               << 4U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                 >> 0x1cU)))),20);
        bufp->chgIData(oldp+367,((0xfffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 8U))),20);
        bufp->chgIData(oldp+368,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                 >> 0x14U)))),20);
        bufp->chgIData(oldp+369,((0xfffffU & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])),20);
        __Vtemp_3[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_c)) 
                                  << 0x28U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_d)) 
                                                << 0x14U) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_e)))));
        __Vtemp_3[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b)))) 
                          << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_c)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_d)) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_e)))) 
                                               >> 0x20U)));
        __Vtemp_3[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b)))) 
                          >> 4U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                               << 0x14U) 
                                              | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b))) 
                                             >> 0x20U)) 
                                    << 0x1cU));
        __Vtemp_3[3U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b))) 
                                  >> 0x20U)) >> 4U);
        bufp->chgWData(oldp+370,(__Vtemp_3),100);
        bufp->chgWData(oldp+374,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),100);
        bufp->chgBit(oldp+378,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__valid_1)))));
        bufp->chgIData(oldp+379,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__Vcellinp__rxQ__io_enq_bits_data),32);
        bufp->chgBit(oldp+380,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__Vcellinp__rxQ__io_deq_ready));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__valid_0));
        bufp->chgIData(oldp+382,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_0_data),32);
        bufp->chgBit(oldp+383,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_0_last));
        bufp->chgCData(oldp+384,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+385,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__valid_1));
        bufp->chgIData(oldp+386,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_1_data),32);
        bufp->chgBit(oldp+387,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_1_last));
        bufp->chgCData(oldp+388,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_1_beats),7);
        bufp->chgIData(oldp+389,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 0x10U)))),20);
        bufp->chgIData(oldp+390,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               << 4U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                 >> 0x1cU)))),20);
        bufp->chgIData(oldp+391,((0xfffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 8U))),20);
        bufp->chgIData(oldp+392,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                 >> 0x14U)))),20);
        bufp->chgIData(oldp+393,((0xfffffU & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])),20);
        __Vtemp_4[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_c)) 
                                  << 0x28U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_d)) 
                                                << 0x14U) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_e)))));
        __Vtemp_4[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b)))) 
                          << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_c)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_d)) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_e)))) 
                                               >> 0x20U)));
        __Vtemp_4[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b)))) 
                          >> 4U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                               << 0x14U) 
                                              | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b))) 
                                             >> 0x20U)) 
                                    << 0x1cU));
        __Vtemp_4[3U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b))) 
                                  >> 0x20U)) >> 4U);
        bufp->chgWData(oldp+394,(__Vtemp_4),100);
        bufp->chgWData(oldp+398,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),100);
        bufp->chgIData(oldp+402,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z),21);
        bufp->chgIData(oldp+403,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_1),21);
        bufp->chgIData(oldp+404,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_2),21);
        bufp->chgIData(oldp+405,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_3),21);
        bufp->chgIData(oldp+406,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_4),21);
        bufp->chgCData(oldp+407,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+408,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+409,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+410,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+411,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+412,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+413,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+414,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+415,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+416,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk1__DOT__index),3);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+417,((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state)) 
                                 | (9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready))));
        bufp->chgIData(oldp+418,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata
                                   : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                                       ? (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                 << 8U))) 
                                          | ((0xff00U 
                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                 >> 8U)) 
                                             | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                >> 0x18U)))
                                       : 0U))),32);
        bufp->chgBit(oldp+419,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit))));
        bufp->chgBit(oldp+420,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_c_ready) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid)))))));
        bufp->chgSData(oldp+421,(((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                   [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                   << 3U) | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
        bufp->chgCData(oldp+422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
        bufp->chgBit(oldp+423,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__xmit))));
        bufp->chgBit(oldp+424,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_c_ready) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid)))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgBit(oldp+425,((IData)(((0x20000000U 
                                         == (0x30000000U 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                        & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
        bufp->chgBit(oldp+426,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+427,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+428,((IData)(((0U == (0x30000000U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                        & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
        bufp->chgCData(oldp+429,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                        | (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                << 0x1eU) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                  << 0x1cU)) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                  << 0x1aU) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                    << 0x18U))) 
                                             | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                  << 0x16U) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                    << 0x14U)) 
                                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                    << 0x12U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                      << 0x10U)))) 
                                            | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                  << 0xeU) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                    << 0xcU)) 
                                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                    << 0xaU) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                      << 8U))) 
                                               | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                    << 6U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                           >> (0x1fU 
                                               & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U)))))),2);
        bufp->chgIData(oldp+430,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                    ? ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata
                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                    : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                               : 0U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                      >> 0x18U)
                                                      : 0U)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                   << 0x18U) 
                                                  | (0xff0000U 
                                                     & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                           >> 0x10U)
                                                           : 0U)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                        << 0x10U))) 
                                                 | ((0xff00U 
                                                     & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                           >> 8U)
                                                           : 0U)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                            : 0U)
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))
                                                 : 0U)))),32);
        bufp->chgCData(oldp+431,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
                                    : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                              ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                              : 0U))),2);
        bufp->chgBit(oldp+432,(((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                      << 0xfU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                        << 9U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                        << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                          << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))));
        bufp->chgBit(oldp+433,((1U & (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                           << 0xfU) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU)) 
                                         | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                             << 0xdU) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                               << 0xcU))) 
                                        | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                             << 0xbU) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                               << 9U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                 << 8U)))) 
                                       | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                               << 6U)) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                 << 4U))) 
                                          | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                      >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)))));
        bufp->chgBit(oldp+434,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast)))));
        bufp->chgIData(oldp+435,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                   ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                              >> 5U))
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata)),32);
        bufp->chgBit(oldp+436,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast)))));
        bufp->chgBit(oldp+437,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value]))));
        bufp->chgBit(oldp+438,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value]))));
        bufp->chgBit(oldp+439,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_real_last)
                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value]))));
        bufp->chgBit(oldp+440,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_real_last)
                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value]))));
        __Vtemp_6[0U] = ((((0x2fU >= (0x3fU & ((IData)(3U) 
                                               * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source))))
                            ? (7U & (IData)((0xfac688fac688ULL 
                                             >> (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source))))))
                            : 0U) << 0x10U) | ((0x6000U 
                                                & ((0xaaaa5555U 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source), 1U))) 
                                                   << 0xdU)) 
                                               | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size) 
                                                    << 9U) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                                                        ? 
                                                       (7U 
                                                        & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                                                           >> 0xcU))
                                                        : 0U) 
                                                      << 6U)) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode) 
                                                     << 3U))));
        __Vtemp_6[1U] = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                          ? ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                              << 0x1bU) | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                           >> 5U)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address);
        __Vtemp_6[2U] = (IData)(((QData)((IData)(((1U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data))) 
                                 << 0x20U));
        __Vtemp_6[3U] = (IData)((((QData)((IData)((
                                                   (1U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data))) 
                                  << 0x20U) >> 0x20U));
        bufp->chgIData(oldp+441,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U)))
                                    ? 0U : (__Vtemp_6[
                                            (((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))))) 
                                  | (__Vtemp_6[(3U 
                                                & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U) 
                                                   >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))))),32);
        bufp->chgIData(oldp+442,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                                   ? ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                                       << 0x1bU) | 
                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                       >> 5U)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address)),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [2U] | vlSelfRef.__Vm_traceActivity
                       [9U]) | vlSelfRef.__Vm_traceActivity
                      [0x20U])))) {
        bufp->chgCData(oldp+443,((3U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)
                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0))
                                          ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                             | (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                     << 0x1eU) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                       << 0x1cU)) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                       << 0x1aU) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                         << 0x18U))) 
                                                  | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                       << 0x16U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                         << 0x12U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                           << 0x10U)))) 
                                                 | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                       << 0xeU) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                         << 0xcU)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                         << 0xaU) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                           << 8U))) 
                                                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                         << 6U) 
                                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                           << 2U) 
                                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U))))
                                          : 0U) | (
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__b_stage_resp) 
                                                     >> 4U)
                                                     : 0U) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                       : 0U))))),2);
        bufp->chgIData(oldp+444,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                    ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                         ? ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__reg_prdata
                                             : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                         : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                    : 0U) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                      ? 
                                                     (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                           >> 0x18U)
                                                           : 0U)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                        << 0x18U) 
                                                       | (0xff0000U 
                                                          & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                ? 
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                >> 0x10U)
                                                                : 0U)
                                                               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                             << 0x10U))) 
                                                      | ((0xff00U 
                                                          & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                ? 
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                                >> 8U)
                                                                : 0U)
                                                               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                ? 
                                                               ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                 ? 
                                                                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                                 : 0U)
                                                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))
                                                      : 0U)))
                                    : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_stage_data[2U]
                                               : 0U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                  ? (IData)(
                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                             >> 3U))
                                                  : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_data)
                                                 : 0U)))),32);
        bufp->chgCData(oldp+445,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                          ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
                                               : 0U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U))
                                          : 0U) | (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_stage_resp) 
                                                     >> 4U)
                                                     : 0U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                        ? (IData)(
                                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                                   >> 1U))
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                       : 0U))))),2);
        bufp->chgBit(oldp+446,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)
                                  ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                      : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                     [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value])
                                  : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                      : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                     [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value])) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_rlast))));
        bufp->chgBit(oldp+447,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+448,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                           : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                          [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value])
                                       : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                           : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                          [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value])))));
        bufp->chgCData(oldp+449,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                   ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? 0U : (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 0U
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                    ? 
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
                                                      : 0U) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                        ? 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                         ? 0U
                                                         : 3U)
                                                        : 0U))
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_stage_resp) 
                                                       >> 4U)
                                                       : 0U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                         ? 
                                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                          ? (IData)(
                                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                                     >> 1U))
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                         : 0U)))
                                                  : 0U))))
                                   : 0U)),2);
        bufp->chgCData(oldp+450,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                   ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? 0U : (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 0U
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 
                                                 ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                    | (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                            << 0x1eU) 
                                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                              << 0x1cU)) 
                                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                              << 0x1aU) 
                                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                << 0x18U))) 
                                                         | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                              << 0x16U) 
                                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                << 0x14U)) 
                                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                << 0x12U) 
                                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                  << 0x10U)))) 
                                                        | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                              << 0xeU) 
                                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                << 0xcU)) 
                                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                << 0xaU) 
                                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                  << 8U))) 
                                                           | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                << 6U) 
                                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                  << 4U)) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                  << 2U) 
                                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U))))
                                                    : 0U) 
                                                  | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1))
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__b_stage_resp) 
                                                       >> 4U)
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))
                                                         ? 
                                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                         : 0U)))
                                                  : 0U))))
                                   : 0U)),2);
        bufp->chgCData(oldp+451,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                   ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? 0U : (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 0U
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                    ? 
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
                                                      : 0U) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                        ? 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                         ? 0U
                                                         : 3U)
                                                        : 0U))
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_stage_resp) 
                                                       >> 4U)
                                                       : 0U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                         ? 
                                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                          ? (IData)(
                                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                                     >> 1U))
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                         : 0U)))
                                                  : 0U))))
                                   : 0U)),2);
        bufp->chgCData(oldp+452,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                   ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? 0U : (3U & 
                                               ((2U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 0U
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 
                                                 ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                    | (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                            << 0x1eU) 
                                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                              << 0x1cU)) 
                                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                              << 0x1aU) 
                                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                << 0x18U))) 
                                                         | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                              << 0x16U) 
                                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                << 0x14U)) 
                                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                << 0x12U) 
                                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                  << 0x10U)))) 
                                                        | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                              << 0xeU) 
                                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                << 0xcU)) 
                                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                << 0xaU) 
                                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                  << 8U))) 
                                                           | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                << 6U) 
                                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                  << 4U)) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                  << 2U) 
                                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U))))
                                                    : 0U) 
                                                  | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1))
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__b_stage_resp) 
                                                       >> 4U)
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))
                                                         ? 
                                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                         : 0U)))
                                                  : 0U))))
                                   : 0U)),2);
        bufp->chgCData(oldp+453,(((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : (3U & ((2U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? 
                                                  (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                     ? 
                                                    (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
                                                       : 0U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                         ? 
                                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                          ? 0U
                                                          : 3U)
                                                         : 0U))
                                                     : 0U) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                        ? 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_stage_resp) 
                                                        >> 4U)
                                                        : 0U) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                          ? 
                                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                           ? (IData)(
                                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                                      >> 1U))
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                          : 0U)))
                                                   : 0U))))),2);
        bufp->chgCData(oldp+454,(((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? 0U : (3U & ((2U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                     | (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                             << 0x1eU) 
                                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                               << 0x1cU)) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                               << 0x1aU) 
                                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                 << 0x18U))) 
                                                          | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                               << 0x16U) 
                                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                 << 0x14U)) 
                                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                 << 0x12U) 
                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                   << 0x10U)))) 
                                                         | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                               << 0xeU) 
                                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                 << 0xcU)) 
                                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                 << 0xaU) 
                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                   << 8U))) 
                                                            | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                 << 6U) 
                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                   << 4U)) 
                                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                   << 2U) 
                                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))) 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U))))
                                                     : 0U) 
                                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)
                                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1))
                                                        ? 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__b_stage_resp) 
                                                        >> 4U)
                                                        : 0U) 
                                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))
                                                          ? 
                                                         ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                          : 0U)))
                                                   : 0U))))),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xaU])))) {
        bufp->chgSData(oldp+455,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_bits)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgSData(oldp+456,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_bits)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        __Vtemp_12[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_0;
        __Vtemp_12[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_1;
        __Vtemp_12[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_2;
        __Vtemp_12[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_3;
        __Vtemp_12[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_4;
        __Vtemp_12[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_5;
        __Vtemp_12[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))));
        __Vtemp_12[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+457,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_12[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                   << 2U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                     << 2U)), 5U))))) 
                                  | (__Vtemp_12[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                    << 2U)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                 << 2U)), 5U))))),32);
        __Vtemp_18[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_0;
        __Vtemp_18[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_1;
        __Vtemp_18[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_2;
        __Vtemp_18[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_3;
        __Vtemp_18[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_4;
        __Vtemp_18[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_5;
        __Vtemp_18[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))));
        __Vtemp_18[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+458,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_18[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                   << 2U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                     << 2U)), 5U))))) 
                                  | (__Vtemp_18[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                    << 2U)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                 << 2U)), 5U))))),32);
        __Vtemp_24[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_0;
        __Vtemp_24[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_1;
        __Vtemp_24[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_2;
        __Vtemp_24[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_3;
        __Vtemp_24[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_4;
        __Vtemp_24[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_5;
        __Vtemp_24[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))));
        __Vtemp_24[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+459,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_24[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                   << 2U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                     << 2U)), 5U))))) 
                                  | (__Vtemp_24[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                    << 2U)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                 << 2U)), 5U))))),32);
        __Vtemp_30[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_0;
        __Vtemp_30[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_1;
        __Vtemp_30[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_2;
        __Vtemp_30[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_3;
        __Vtemp_30[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_4;
        __Vtemp_30[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_5;
        __Vtemp_30[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))));
        __Vtemp_30[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+460,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_30[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                   << 2U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                     << 2U)), 5U))))) 
                                  | (__Vtemp_30[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                    << 2U)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                 << 2U)), 5U))))),32);
        __Vtemp_36[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_0;
        __Vtemp_36[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_1;
        __Vtemp_36[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_2;
        __Vtemp_36[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_3;
        __Vtemp_36[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_4;
        __Vtemp_36[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_5;
        __Vtemp_36[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))));
        __Vtemp_36[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+461,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_36[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                   << 2U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                     << 2U)), 5U))))) 
                                  | (__Vtemp_36[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                    << 2U)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                 << 2U)), 5U))))),32);
        __Vtemp_42[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_0;
        __Vtemp_42[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_1;
        __Vtemp_42[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_2;
        __Vtemp_42[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_3;
        __Vtemp_42[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_4;
        __Vtemp_42[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_5;
        __Vtemp_42[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))));
        __Vtemp_42[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+462,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_42[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                   << 2U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                     << 2U)), 5U))))) 
                                  | (__Vtemp_42[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                    << 2U)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                 << 2U)), 5U))))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x1aU])))) {
        bufp->chgCData(oldp+463,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+464,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+465,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+466,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+467,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__deq_ptr)))),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x20U])))) {
        bufp->chgBit(oldp+468,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
        bufp->chgBit(oldp+469,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1)))));
        bufp->chgBit(oldp+470,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0)))));
        bufp->chgBit(oldp+471,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                       >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2)))));
        bufp->chgCData(oldp+472,(((0xeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                             ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_extra_id)
                                                 : 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value] 
                                                 >> 1U))
                                             : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_extra_id)
                                                 : 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value] 
                                                 >> 1U))) 
                                           << 1U)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id))),4);
        bufp->chgCData(oldp+473,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))),2);
        bufp->chgCData(oldp+474,(((0xeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)
                                             ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_extra_id)
                                                 : 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value] 
                                                 >> 1U))
                                             : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_extra_id)
                                                 : 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value] 
                                                 >> 1U))) 
                                           << 1U)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid))),4);
        bufp->chgIData(oldp+475,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                   ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                              >> 3U))
                                   : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_data)),32);
        bufp->chgCData(oldp+476,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                         ? (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                    >> 1U))
                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp)))),2);
        bufp->chgBit(oldp+477,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0))));
        bufp->chgBit(oldp+478,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1))));
        bufp->chgBit(oldp+479,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))));
        bufp->chgBit(oldp+480,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+481,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+482,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xaU))));
        bufp->chgBit(oldp+483,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xbU))));
        bufp->chgBit(oldp+484,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xcU))));
        bufp->chgBit(oldp+485,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xdU))));
        bufp->chgBit(oldp+486,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xeU))));
        bufp->chgBit(oldp+487,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xfU))));
        bufp->chgBit(oldp+488,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+489,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+490,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+491,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+492,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+493,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+494,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+495,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+496,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+497,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+498,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+499,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xaU))));
        bufp->chgBit(oldp+500,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xbU))));
        bufp->chgBit(oldp+501,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xcU))));
        bufp->chgBit(oldp+502,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xdU))));
        bufp->chgBit(oldp+503,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+504,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xeU))));
        bufp->chgBit(oldp+505,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xfU))));
        bufp->chgBit(oldp+506,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+507,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+508,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+509,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+510,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+511,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+512,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0)) 
                                & ((((((0x8000U & (
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_17__DOT__full)) 
                                                   << 0xfU)) 
                                       | (0x4000U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_16__DOT__full)) 
                                           << 0xeU))) 
                                      | ((0x2000U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_15__DOT__full)) 
                                           << 0xdU)) 
                                         | (0x1000U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_14__DOT__full)) 
                                               << 0xcU)))) 
                                     | (((0x800U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_13__DOT__full)) 
                                           << 0xbU)) 
                                         | (0x400U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_12__DOT__full)) 
                                               << 0xaU))) 
                                        | ((0x200U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_11__DOT__full)) 
                                               << 9U)) 
                                           | (0x100U 
                                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_10__DOT__full)) 
                                                 << 8U))))) 
                                    | ((((0x80U & (
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_9__DOT__full)) 
                                                   << 7U)) 
                                         | (0x40U & 
                                            ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_13__DOT__full)) 
                                             << 6U))) 
                                        | ((0x20U & 
                                            ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_12__DOT__full)) 
                                             << 5U)) 
                                           | (0x10U 
                                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_11__DOT__full)) 
                                                 << 4U)))) 
                                       | (((8U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_10__DOT__full)) 
                                                  << 3U)) 
                                           | (4U & 
                                              ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_9__DOT__full)) 
                                               << 2U))) 
                                          | ((2U & 
                                              ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_8__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_7__DOT__full))))))) 
                                   >> (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgIData(oldp+513,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                   ? (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram 
                                              >> 0x19U))
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address)),32);
        bufp->chgCData(oldp+514,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                            ? (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram 
                                                       >> 0x11U))
                                            : (~ (0xffU 
                                                  & (((IData)(0x3ffU) 
                                                      << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size)) 
                                                     >> 2U)))))),8);
        bufp->chgCData(oldp+515,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                         ? (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram 
                                                    >> 0xeU))
                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_size)))),3);
        bufp->chgBit(oldp+516,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full) 
                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__nodeOut_wdeq_q__io_enq_valid))));
        bufp->chgIData(oldp+517,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full)
                                   ? (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__ram 
                                              >> 5U))
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_data)),32);
        bufp->chgCData(oldp+518,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full)
                                           ? (IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__ram 
                                                      >> 1U))
                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_mask)))),4);
        bufp->chgBit(oldp+519,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__ram)
                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__a_last)))));
        bufp->chgBit(oldp+520,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0)) 
                                & ((((((0x8000U & (
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_8__DOT__full)) 
                                                   << 0xfU)) 
                                       | (0x4000U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_7__DOT__full)) 
                                           << 0xeU))) 
                                      | ((0x2000U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_6__DOT__full)) 
                                           << 0xdU)) 
                                         | (0x1000U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_5__DOT__full)) 
                                               << 0xcU)))) 
                                     | (((0x800U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_4__DOT__full)) 
                                           << 0xbU)) 
                                         | (0x400U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_3__DOT__full)) 
                                               << 0xaU))) 
                                        | ((0x200U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_2__DOT__full)) 
                                               << 9U)) 
                                           | (0x100U 
                                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_1__DOT__full)) 
                                                 << 8U))))) 
                                    | ((((0x80U & (
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap__DOT__full)) 
                                                   << 7U)) 
                                         | (0x40U & 
                                            ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_6__DOT__full)) 
                                             << 6U))) 
                                        | ((0x20U & 
                                            ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_5__DOT__full)) 
                                             << 5U)) 
                                           | (0x10U 
                                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_4__DOT__full)) 
                                                 << 4U)))) 
                                       | (((8U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_3__DOT__full)) 
                                                  << 3U)) 
                                           | (4U & 
                                              ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_2__DOT__full)) 
                                               << 2U))) 
                                          | ((2U & 
                                              ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_1__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap__DOT__full))))))) 
                                   >> (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgCData(oldp+521,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                         ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_extra_id)
                                             : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value] 
                                                >> 1U))
                                         : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_extra_id)
                                             : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value] 
                                                >> 1U))))),3);
        bufp->chgCData(oldp+522,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)
                                         ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_extra_id)
                                             : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value] 
                                                >> 1U))
                                         : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_extra_id)
                                             : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value] 
                                                >> 1U))))),3);
        bufp->chgBit(oldp+523,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_slave_awready) 
                                & ((((((0x8000U & (
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_17__DOT__full)) 
                                                   << 0xfU)) 
                                       | (0x4000U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_16__DOT__full)) 
                                           << 0xeU))) 
                                      | ((0x2000U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_15__DOT__full)) 
                                           << 0xdU)) 
                                         | (0x1000U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_14__DOT__full)) 
                                               << 0xcU)))) 
                                     | (((0x800U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_13__DOT__full)) 
                                           << 0xbU)) 
                                         | (0x400U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_12__DOT__full)) 
                                               << 0xaU))) 
                                        | ((0x200U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_11__DOT__full)) 
                                               << 9U)) 
                                           | (0x100U 
                                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_10__DOT__full)) 
                                                 << 8U))))) 
                                    | ((((0x80U & (
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_9__DOT__full)) 
                                                   << 7U)) 
                                         | (0x40U & 
                                            ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_13__DOT__full)) 
                                             << 6U))) 
                                        | ((0x20U & 
                                            ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_12__DOT__full)) 
                                             << 5U)) 
                                           | (0x10U 
                                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_11__DOT__full)) 
                                                 << 4U)))) 
                                       | (((8U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_10__DOT__full)) 
                                                  << 3U)) 
                                           | (4U & 
                                              ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_9__DOT__full)) 
                                               << 2U))) 
                                          | ((2U & 
                                              ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_8__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_7__DOT__full))))))) 
                                   >> (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+524,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_slave_arready) 
                                & ((((((0x8000U & (
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_8__DOT__full)) 
                                                   << 0xfU)) 
                                       | (0x4000U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_7__DOT__full)) 
                                           << 0xeU))) 
                                      | ((0x2000U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_6__DOT__full)) 
                                           << 0xdU)) 
                                         | (0x1000U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_5__DOT__full)) 
                                               << 0xcU)))) 
                                     | (((0x800U & 
                                          ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_4__DOT__full)) 
                                           << 0xbU)) 
                                         | (0x400U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_3__DOT__full)) 
                                               << 0xaU))) 
                                        | ((0x200U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_2__DOT__full)) 
                                               << 9U)) 
                                           | (0x100U 
                                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_1__DOT__full)) 
                                                 << 8U))))) 
                                    | ((((0x80U & (
                                                   (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap__DOT__full)) 
                                                   << 7U)) 
                                         | (0x40U & 
                                            ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_6__DOT__full)) 
                                             << 6U))) 
                                        | ((0x20U & 
                                            ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_5__DOT__full)) 
                                             << 5U)) 
                                           | (0x10U 
                                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_4__DOT__full)) 
                                                 << 4U)))) 
                                       | (((8U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_3__DOT__full)) 
                                                  << 3U)) 
                                           | (4U & 
                                              ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_2__DOT__full)) 
                                               << 2U))) 
                                          | ((2U & 
                                              ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_1__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap__DOT__full))))))) 
                                   >> (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+525,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid)))));
        bufp->chgBit(oldp+526,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid)))));
        bufp->chgBit(oldp+527,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid)))));
        bufp->chgBit(oldp+528,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid)))));
        bufp->chgIData(oldp+529,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                   ? 0U : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),32);
        __Vtemp_44[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header;
        __Vtemp_44[1U] = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                          & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                     >> 0x22U)));
        __Vtemp_44[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                 ? (IData)(
                                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                            >> 1U))
                                                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))));
        __Vtemp_44[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                  ? (IData)(
                                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                             >> 1U))
                                                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+530,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U)))
                                    ? 0U : (__Vtemp_44[
                                            (((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))) 
                                  | (__Vtemp_44[(3U 
                                                 & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))),32);
        bufp->chgSData(oldp+531,((0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                    >> 3U)), 4U)))
                                               ? 0U
                                               : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,7,32, 
                                                                     (7U 
                                                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                         >> 3U)), 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, 
                                                                    (7U 
                                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                        >> 3U)), 4U))))) 
                                             | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                                                (3U 
                                                 & (VL_SHIFTL_III(7,7,32, 
                                                                  (7U 
                                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                      >> 3U)), 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, 
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                     >> 3U)), 4U)))))),16);
        bufp->chgIData(oldp+532,((4U | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                          & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                         [0U]) << 0x10U))),32);
        bufp->chgSData(oldp+533,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                   & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                  [0U])),16);
        bufp->chgBit(oldp+534,((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11))));
        bufp->chgSData(oldp+535,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+536,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 1U))));
        bufp->chgSData(oldp+537,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+538,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 2U))));
        bufp->chgSData(oldp+539,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+540,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 3U))));
        bufp->chgSData(oldp+541,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+542,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 4U))));
        bufp->chgSData(oldp+543,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+544,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 5U))));
        bufp->chgSData(oldp+545,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+546,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 6U))));
        bufp->chgSData(oldp+547,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+548,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 7U))));
        bufp->chgSData(oldp+549,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgIData(oldp+550,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                   : 0U)),32);
        bufp->chgBit(oldp+551,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                & ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                             >> 2U))) 
                                   && ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                        ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                        : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                           && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast)))))));
        bufp->chgCData(oldp+552,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                   ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? 0U : ((2U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)
                                                    : 0U)))
                                   : 0U)),4);
        bufp->chgBit(oldp+553,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
        bufp->chgCData(oldp+554,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                   ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? 0U : ((2U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)
                                                    : 0U)))
                                   : 0U)),4);
        bufp->chgBit(oldp+555,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                & ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                             >> 2U))) 
                                   && ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                        ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                        : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                           && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast)))))));
        bufp->chgCData(oldp+556,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                   ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? 0U : ((2U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)
                                                    : 0U)))
                                   : 0U)),4);
        bufp->chgBit(oldp+557,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
        bufp->chgCData(oldp+558,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                   ? ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? 0U : ((2U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)
                                                    : 0U)))
                                   : 0U)),4);
        bufp->chgBit(oldp+559,(((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                          >> 2U))) 
                                && ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                     ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                     : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                        && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast))))));
        bufp->chgCData(oldp+560,(((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                            : ((1U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)
                                                : 0U)))),4);
        bufp->chgCData(oldp+561,(((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                            : ((1U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)
                                                : 0U)))),4);
        bufp->chgCData(oldp+562,(((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                                                    ? 0U
                                                    : 3U)
                                                : (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready)))
                                                    ? 0U
                                                    : 2U))
                                            : ((1U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready)))
                                                    ? 0U
                                                    : 1U)
                                                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arvalid)
                                                    ? 
                                                   (((0x2000048U 
                                                      == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr) 
                                                     | (0x200004cU 
                                                        == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr))
                                                     ? 3U
                                                     : 1U)
                                                    : 0U))))),3);
        bufp->chgCData(oldp+563,(((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   ((5U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                                                    ? 0U
                                                    : 3U)
                                                : (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                                                    ? 0U
                                                    : 2U))
                                            : ((1U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                                    ? 0U
                                                    : 1U)
                                                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awvalid)
                                                    ? 
                                                   ((0x3f8U 
                                                     == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awaddr)
                                                     ? 2U
                                                     : 1U)
                                                    : 0U))))),3);
        bufp->chgBit(oldp+564,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready)))));
        bufp->chgBit(oldp+565,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
        bufp->chgBit(oldp+566,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_6)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_6) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_6)))));
        bufp->chgBit(oldp+567,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_5)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_5) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_5)))));
        bufp->chgBit(oldp+568,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_3)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_3) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_3)))));
        bufp->chgBit(oldp+569,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_1)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_1) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_1)))));
        __Vtemp_50[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0;
        __Vtemp_50[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1;
        __Vtemp_50[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2;
        __Vtemp_50[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3;
        __Vtemp_50[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4;
        __Vtemp_50[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5;
        __Vtemp_50[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))));
        __Vtemp_50[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+570,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_50[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                   << 2U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                     << 2U)), 5U))))) 
                                  | (__Vtemp_50[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                    << 2U)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                 << 2U)), 5U))))),32);
        __Vtemp_56[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_0;
        __Vtemp_56[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_1;
        __Vtemp_56[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_2;
        __Vtemp_56[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_3;
        __Vtemp_56[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_4;
        __Vtemp_56[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_5;
        __Vtemp_56[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))));
        __Vtemp_56[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+571,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_56[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                   << 2U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                     << 2U)), 5U))))) 
                                  | (__Vtemp_56[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                    << 2U)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                 << 2U)), 5U))))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x23U])))) {
        bufp->chgCData(oldp+572,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+573,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+574,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+575,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+576,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__deq_ptr)))),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x29U])))) {
        bufp->chgBit(oldp+577,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid))));
        bufp->chgIData(oldp+578,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                   ? (IData)((vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                              >> 3U))
                                   : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_data)),32);
        bufp->chgCData(oldp+579,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                         ? (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                    >> 1U))
                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp)))),2);
        bufp->chgBit(oldp+580,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last)))));
        bufp->chgIData(oldp+581,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                   ? (IData)((vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                              >> 5U))
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_data)),32);
        bufp->chgCData(oldp+582,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                           ? (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                      >> 1U))
                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_mask)))),4);
        bufp->chgBit(oldp+583,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_last)))));
        bufp->chgQData(oldp+584,((((QData)((IData)(
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                                     ? (IData)(
                                                               (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                                >> 5U))
                                                     : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_data))) 
                                   << 4U) | (QData)((IData)(
                                                            (0xfU 
                                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                                                 ? (IData)(
                                                                           (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                                            >> 1U))
                                                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_mask))))))),36);
        bufp->chgBit(oldp+586,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgRegularize_hc17a5693_0_0))));
        bufp->chgBit(oldp+587,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgRegularize_hc17a5693_2_0))));
        bufp->chgCData(oldp+588,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bresp) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__error_1)
                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__error_0)))),2);
        bufp->chgCData(oldp+589,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                         ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_extra_id)
                                             : (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value] 
                                                >> 1U))
                                         : ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_extra_id)
                                             : (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value] 
                                                >> 1U))))),3);
        bufp->chgCData(oldp+590,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
                                         ? (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_extra_id)
                                             : (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value] 
                                                >> 1U))
                                         : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_extra_id)
                                             : (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__deq_ptr_value] 
                                                >> 1U))))),3);
        bufp->chgBit(oldp+591,((1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
                                        ? (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_real_last)
                                            : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                           [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value])
                                        : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_real_last)
                                            : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                           [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__deq_ptr_value])) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram)
                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last))))));
        bufp->chgBit(oldp+592,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
                                       ? (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_real_last)
                                           : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                          [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value])
                                       : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_real_last)
                                           : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                          [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__deq_ptr_value])))));
        bufp->chgBit(oldp+593,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_arready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_real_last))));
        bufp->chgBit(oldp+594,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_real_last))));
        bufp->chgBit(oldp+595,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_wready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_2))));
        bufp->chgBit(oldp+596,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__VdfgRegularize_hb2c28821_0_0))));
        bufp->chgBit(oldp+597,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__VdfgRegularize_hb2c28821_2_0))));
        bufp->chgCData(oldp+598,(((0xeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                             ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_extra_id)
                                                 : 
                                                (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                                                 [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value] 
                                                 >> 1U))
                                             : ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_extra_id)
                                                 : 
                                                (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                                                 [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value] 
                                                 >> 1U))) 
                                           << 1U)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id))),4);
        bufp->chgCData(oldp+599,(((0xeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
                                             ? (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_extra_id)
                                                 : 
                                                (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                                 [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value] 
                                                 >> 1U))
                                             : (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_extra_id)
                                                 : 
                                                (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                                 [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__deq_ptr_value] 
                                                 >> 1U))) 
                                           << 1U)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid))),4);
        bufp->chgBit(oldp+600,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid)))));
        bufp->chgBit(oldp+601,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid)))));
        bufp->chgBit(oldp+602,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid)))));
        bufp->chgBit(oldp+603,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid)))));
        bufp->chgIData(oldp+604,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                   ? 0U : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),32);
        __Vtemp_58[0U] = vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header;
        __Vtemp_58[1U] = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                          & (IData)((vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                     >> 0x22U)));
        __Vtemp_58[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                 ? (IData)(
                                                                           (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                            >> 1U))
                                                                 : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))));
        __Vtemp_58[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                  ? (IData)(
                                                                            (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                             >> 1U))
                                                                  : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+605,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U)))
                                    ? 0U : (__Vtemp_58[
                                            (((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))) 
                                  | (__Vtemp_58[(3U 
                                                 & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))),32);
        bufp->chgSData(oldp+606,((0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                    >> 3U)), 4U)))
                                               ? 0U
                                               : (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,7,32, 
                                                                     (7U 
                                                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                         >> 3U)), 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, 
                                                                    (7U 
                                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                        >> 3U)), 4U))))) 
                                             | (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                                                (3U 
                                                 & (VL_SHIFTL_III(7,7,32, 
                                                                  (7U 
                                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                      >> 3U)), 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, 
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                     >> 3U)), 4U)))))),16);
        bufp->chgIData(oldp+607,((4U | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                          & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                          : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                         [0U]) << 0x10U))),32);
        bufp->chgSData(oldp+608,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                   & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                  [0U])),16);
        bufp->chgBit(oldp+609,((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12))));
        bufp->chgSData(oldp+610,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+611,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 1U))));
        bufp->chgSData(oldp+612,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+613,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 2U))));
        bufp->chgSData(oldp+614,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+615,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 3U))));
        bufp->chgSData(oldp+616,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+617,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 4U))));
        bufp->chgSData(oldp+618,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+619,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 5U))));
        bufp->chgSData(oldp+620,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+621,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 6U))));
        bufp->chgSData(oldp+622,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+623,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 7U))));
        bufp->chgSData(oldp+624,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+625,((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_6) 
                                    != (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_h9d3d4082_0_0))))) 
                                | (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)))));
        bufp->chgBit(oldp+626,((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_5) 
                                    != (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_h9d3d4082_0_0))))) 
                                | (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)))));
        bufp->chgBit(oldp+627,((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_3) 
                                    != (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_h9d3d4082_0_0))))) 
                                | (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)))));
        bufp->chgBit(oldp+628,((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_1) 
                                    != (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_h9d3d4082_0_0))))) 
                                | (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)))));
        bufp->chgCData(oldp+629,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                                           ? (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                      >> 0x2dU))
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id)))),4);
        bufp->chgIData(oldp+630,(((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                   ? (IData)((vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                              >> 5U))
                                   : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wdata)),32);
        bufp->chgCData(oldp+631,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                           ? (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                      >> 1U))
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wstrb)))),4);
        bufp->chgBit(oldp+632,((1U == ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)))));
        bufp->chgCData(oldp+633,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                                           ? (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                                      >> 0x2dU))
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id)))),4);
        bufp->chgQData(oldp+634,((((QData)((IData)(
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                                                        ? (IData)(
                                                                  (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                                                   >> 0x2dU))
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))) 
                                   << 0x21U) | (((QData)((IData)(
                                                                 (~ 
                                                                  (((~ 
                                                                     (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
                                                                      >> 2U)) 
                                                                    << 2U) 
                                                                   | (3U 
                                                                      & ((~ 
                                                                          ((IData)(3U) 
                                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                                                         | (~ vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr))))))) 
                                                 << 1U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      (0U 
                                                                       != (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len))))))))),37);
        bufp->chgQData(oldp+636,((((QData)((IData)(
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                                                        ? (IData)(
                                                                  (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                                   >> 0x2dU))
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))) 
                                   << 0x21U) | (((QData)((IData)(
                                                                 (~ 
                                                                  (((~ 
                                                                     (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
                                                                      >> 2U)) 
                                                                    << 2U) 
                                                                   | (3U 
                                                                      & ((~ 
                                                                          ((IData)(3U) 
                                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                                                         | (~ vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1))))))) 
                                                 << 1U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      (0U 
                                                                       != (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1))))))))),37);
        bufp->chgQData(oldp+638,((((QData)((IData)(
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                     ? (IData)(
                                                               (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                                >> 5U))
                                                     : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wdata))) 
                                   << 4U) | (QData)((IData)(
                                                            (0xfU 
                                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                                 ? (IData)(
                                                                           (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                                            >> 1U))
                                                                 : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wstrb))))))),36);
        bufp->chgSData(oldp+640,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))),9);
        bufp->chgBit(oldp+641,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wlast)))));
        bufp->chgBit(oldp+642,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_6)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_6) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_6)))));
        bufp->chgBit(oldp+643,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_5)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_5) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_5)))));
        bufp->chgBit(oldp+644,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_3)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_3) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_3)))));
        bufp->chgBit(oldp+645,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_1)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_1) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_1)))));
        __Vtemp_64[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0;
        __Vtemp_64[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1;
        __Vtemp_64[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2;
        __Vtemp_64[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3;
        __Vtemp_64[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4;
        __Vtemp_64[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5;
        __Vtemp_64[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))));
        __Vtemp_64[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+646,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_64[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                   << 2U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                     << 2U)), 5U))))) 
                                  | (__Vtemp_64[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                    << 2U)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                 << 2U)), 5U))))),32);
        __Vtemp_70[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_0;
        __Vtemp_70[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_1;
        __Vtemp_70[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_2;
        __Vtemp_70[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_3;
        __Vtemp_70[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_4;
        __Vtemp_70[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_5;
        __Vtemp_70[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))));
        __Vtemp_70[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+647,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_70[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                   << 2U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                     << 2U)), 5U))))) 
                                  | (__Vtemp_70[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                    << 2U)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                                 << 2U)), 5U))))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x2cU])))) {
        bufp->chgBit(oldp+648,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid))));
        bufp->chgBit(oldp+649,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgBit(oldp+650,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                & ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                             >> 2U))) 
                                   && ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                        ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                        : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                           && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready)))))));
        bufp->chgBit(oldp+651,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                & ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                             >> 2U))) 
                                   && ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                        ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                        : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                           && ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid))))))));
        bufp->chgBit(oldp+652,(((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                          >> 2U))) 
                                && ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                     ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))
                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                     : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                        && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready))))));
        bufp->chgBit(oldp+653,(((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                          >> 2U))) 
                                && ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                     ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                     : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                        && ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid)))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+654,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data),8);
        bufp->chgCData(oldp+655,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),8);
        bufp->chgIData(oldp+656,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+657,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck));
        bufp->chgCData(oldp+658,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss),8);
        bufp->chgBit(oldp+659,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
        bufp->chgBit(oldp+660,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
        bufp->chgCData(oldp+661,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bid),4);
        bufp->chgIData(oldp+662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
        bufp->chgBit(oldp+663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast));
        bufp->chgBit(oldp+664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
        bufp->chgBit(oldp+665,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+669,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+670,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+671,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+672,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+676,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                   ? 0xeU : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? 0xbU
                                              : (0xfU 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x14U)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0x10U)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 0xcU)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 8U)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                         >> 4U)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                          : 0U)))))))))),4);
        bufp->chgBit(oldp+677,((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+680,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+681,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
        bufp->chgBit(oldp+682,((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))));
        bufp->chgBit(oldp+683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck));
        bufp->chgBit(oldp+684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n));
        bufp->chgCData(oldp+685,(((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                                   ? (1U & (0x35U >> 
                                            (7U & ((IData)(7U) 
                                                   - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                                   : 0U)),4);
        bufp->chgBit(oldp+686,((0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgCData(oldp+687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
        bufp->chgCData(oldp+688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter),8);
        bufp->chgBit(oldp+689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+692,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                         >> 1U) - (IData)(3U)))),2);
        bufp->chgBit(oldp+693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+696,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+697,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
        bufp->chgIData(oldp+698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
        bufp->chgBit(oldp+699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+709,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+711,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+712,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+713,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr]),6);
        bufp->chgBit(oldp+714,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0)) 
                                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+715,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0))));
        bufp->chgBit(oldp+716,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+717,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+718,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+719,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+726,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+731,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+732,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+733,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgBit(oldp+734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgBit(oldp+735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
        bufp->chgSData(oldp+737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+739,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
        bufp->chgSData(oldp+741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
        bufp->chgSData(oldp+742,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
        bufp->chgSData(oldp+743,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
        bufp->chgSData(oldp+744,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
        bufp->chgCData(oldp+745,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+746,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+748,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+749,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+750,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
        bufp->chgBit(oldp+751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_spi_irq_out));
        bufp->chgIData(oldp+752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata),32);
        bufp->chgBit(oldp+753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready));
        bufp->chgSData(oldp+754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+761,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 9U))));
        bufp->chgBit(oldp+762,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xaU))));
        bufp->chgCData(oldp+763,((0x7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+764,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 8U))));
        bufp->chgBit(oldp+765,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+766,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+767,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+769,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+770,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+771,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
        bufp->chgSData(oldp+772,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+773,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+774,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+776,((0xffU & ((0x800U 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0) 
                                               - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                               - (IData)(1U))))),8);
        bufp->chgCData(oldp+777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+778,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
        bufp->chgBit(oldp+779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
        bufp->chgBit(oldp+780,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                         >> 1U)))));
        bufp->chgBit(oldp+781,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+782,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+783,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U))));
        bufp->chgBit(oldp+784,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+785,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+786,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+787,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+790,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+791,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+792,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+793,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+794,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+795,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+796,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+797,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+798,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+799,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+800,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+801,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+802,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+803,((IData)((0x10U != (0x12U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+804,((IData)((0x11U == (0x11U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+805,((IData)((0x14U == (0x14U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+806,((IData)((0x18U == (0x18U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+807,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                     << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                               << 6U)) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                       << 5U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                 << 4U))) 
                                  | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                       << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))),8);
        bufp->chgBit(oldp+808,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+809,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+810,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
        bufp->chgBit(oldp+811,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
        bufp->chgBit(oldp+812,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
        bufp->chgBit(oldp+813,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+814,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+815,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+816,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+817,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+818,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+825,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+831,((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [1U] 
                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [2U] 
                                                  | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [3U] 
                                                     | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [4U] 
                                                        | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [5U] 
                                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                              [6U] 
                                                              | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                 [7U] 
                                                                 | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                    [8U] 
                                                                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                       [9U] 
                                                                       | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                          [0xaU] 
                                                                          | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                             [0xbU] 
                                                                             | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xcU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xdU] 
                                                                                | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
        bufp->chgBit(oldp+832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
        bufp->chgCData(oldp+833,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+834,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+835,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+836,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+837,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+838,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt))))));
        bufp->chgCData(oldp+839,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+846,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+848,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+849,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+857,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+858,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+859,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+860,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+861,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+875,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+876,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+879,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+880,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+881,((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+882,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+883,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+884,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                          - (IData)(1U)))),4);
        bufp->chgSData(oldp+885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+886,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                           >> 2U))),8);
        bufp->chgCData(oldp+887,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+888,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+889,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+890,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+891,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+892,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+893,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+895,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+899,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+904,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+905,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+913,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+914,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+915,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xaU]),3);
        bufp->chgCData(oldp+917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xbU]),3);
        bufp->chgCData(oldp+918,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xcU]),3);
        bufp->chgCData(oldp+919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xdU]),3);
        bufp->chgCData(oldp+920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xeU]),3);
        bufp->chgCData(oldp+921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xfU]),3);
        bufp->chgCData(oldp+922,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                           >> 3U))),8);
        bufp->chgCData(oldp+923,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+929,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+931,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+932,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+933,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgBit(oldp+934,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss) 
                                      >> 7U))));
        bufp->chgBit(oldp+935,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset));
        bufp->chgBit(oldp+936,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+937,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+938,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+939,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+940,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+941,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+942,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+943,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+944,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid));
        bufp->chgCData(oldp+945,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+946,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+947,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+948,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+949,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+950,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+951,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+952,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+953,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+954,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+955,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+956,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+957,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+959,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+960,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+961,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+963,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+964,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+965,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+966,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+967,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+968,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+969,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+970,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+971,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+972,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+973,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+974,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+975,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+976,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+977,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+978,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+979,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+981,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+982,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+983,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+984,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+985,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+986,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+987,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+988,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+989,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+990,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+991,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+992,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+993,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+994,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+995,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+996,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+997,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+998,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+999,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1000,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+1001,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1002,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1003,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1004,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1005,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1006,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1007,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1008,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1009,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1010,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1011,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1014,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1015,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1016,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+1017,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1018,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1020,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1022,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1024,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1026,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1027,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1028,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1032,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1033,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1034,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+1035,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1040,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1041,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1042,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1043,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1044,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1045,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1046,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1047,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1048,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1049,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1050,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1052,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+1053,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+1055,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1056,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1057,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1058,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1059,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1060,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1061,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1062,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1064,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1065,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1066,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1067,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1068,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1069,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1070,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+1071,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+1073,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1074,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1075,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1076,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1077,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1078,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1079,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1081,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1082,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1083,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1084,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1085,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1086,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1087,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1088,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+1089,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1090,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1093,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1094,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1095,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1096,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1097,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1098,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1099,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1100,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1101,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1102,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1103,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1104,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1105,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1106,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+1107,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+1108,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+1109,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1110,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1111,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1112,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1113,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1114,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1115,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1116,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1117,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1118,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1119,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1120,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1124,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT___rxInc_sink_io_deq_valid));
        bufp->chgBit(oldp+1126,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1129,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1130,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1132,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1133,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1134,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT___txInc_sink_io_deq_valid));
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1137,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1138,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1139,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1141,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1143,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT___rxInc_sink_io_deq_valid));
        bufp->chgBit(oldp+1144,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1146,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1147,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1148,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1149,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1150,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1151,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1152,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT___txInc_sink_io_deq_valid));
        bufp->chgBit(oldp+1153,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+1154,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1156,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1159,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1160,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xaU])))) {
        bufp->chgCData(oldp+1161,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                    : 0U)),4);
        bufp->chgCData(oldp+1162,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                    : 0U)),4);
        bufp->chgCData(oldp+1163,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                    : 0U)),4);
        bufp->chgCData(oldp+1164,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                    : 0U)),4);
        bufp->chgCData(oldp+1165,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                    : 0U)),4);
        bufp->chgCData(oldp+1166,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                    : 0U)),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+1167,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[0]),13);
        bufp->chgSData(oldp+1168,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[1]),13);
        bufp->chgSData(oldp+1169,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[2]),13);
        bufp->chgSData(oldp+1170,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[3]),13);
        bufp->chgSData(oldp+1171,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)
                                    ? 0xffffU : 0U)),16);
        bufp->chgSData(oldp+1172,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout),16);
        bufp->chgCData(oldp+1173,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency),3);
        bufp->chgCData(oldp+1174,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length),3);
        bufp->chgCData(oldp+1175,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank),2);
        bufp->chgCData(oldp+1176,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1),2);
        bufp->chgCData(oldp+1177,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter),4);
        bufp->chgCData(oldp+1178,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter),4);
        bufp->chgBit(oldp+1179,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag));
        bufp->chgSData(oldp+1180,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address),9);
        bufp->chgSData(oldp+1181,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address),9);
        bufp->chgSData(oldp+1182,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data),16);
        bufp->chgIData(oldp+1183,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address),22);
        bufp->chgIData(oldp+1184,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address),22);
        bufp->chgCData(oldp+1185,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length),4);
        bufp->chgSData(oldp+1186,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[0]),13);
        bufp->chgSData(oldp+1187,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[1]),13);
        bufp->chgSData(oldp+1188,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[2]),13);
        bufp->chgSData(oldp+1189,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[3]),13);
        bufp->chgSData(oldp+1190,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                    ? 0xffffU : 0U)),16);
        bufp->chgSData(oldp+1191,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout),16);
        bufp->chgCData(oldp+1192,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency),3);
        bufp->chgCData(oldp+1193,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length),3);
        bufp->chgCData(oldp+1194,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank),2);
        bufp->chgCData(oldp+1195,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1),2);
        bufp->chgCData(oldp+1196,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter),4);
        bufp->chgCData(oldp+1197,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter),4);
        bufp->chgBit(oldp+1198,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag));
        bufp->chgSData(oldp+1199,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address),9);
        bufp->chgSData(oldp+1200,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address),9);
        bufp->chgSData(oldp+1201,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data),16);
        bufp->chgIData(oldp+1202,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address),22);
        bufp->chgIData(oldp+1203,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address),22);
        bufp->chgCData(oldp+1204,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length),4);
        bufp->chgSData(oldp+1205,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[0]),13);
        bufp->chgSData(oldp+1206,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[1]),13);
        bufp->chgSData(oldp+1207,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[2]),13);
        bufp->chgSData(oldp+1208,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[3]),13);
        bufp->chgSData(oldp+1209,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)
                                    ? 0xffffU : 0U)),16);
        bufp->chgSData(oldp+1210,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout),16);
        bufp->chgCData(oldp+1211,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency),3);
        bufp->chgCData(oldp+1212,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length),3);
        bufp->chgCData(oldp+1213,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank),2);
        bufp->chgCData(oldp+1214,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1),2);
        bufp->chgCData(oldp+1215,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter),4);
        bufp->chgCData(oldp+1216,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter),4);
        bufp->chgBit(oldp+1217,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag));
        bufp->chgSData(oldp+1218,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address),9);
        bufp->chgSData(oldp+1219,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address),9);
        bufp->chgSData(oldp+1220,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data),16);
        bufp->chgIData(oldp+1221,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address),22);
        bufp->chgIData(oldp+1222,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address),22);
        bufp->chgCData(oldp+1223,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length),4);
        bufp->chgSData(oldp+1224,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[0]),13);
        bufp->chgSData(oldp+1225,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[1]),13);
        bufp->chgSData(oldp+1226,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[2]),13);
        bufp->chgSData(oldp+1227,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[3]),13);
        bufp->chgSData(oldp+1228,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                    ? 0xffffU : 0U)),16);
        bufp->chgSData(oldp+1229,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout),16);
        bufp->chgCData(oldp+1230,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency),3);
        bufp->chgCData(oldp+1231,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length),3);
        bufp->chgCData(oldp+1232,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank),2);
        bufp->chgCData(oldp+1233,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1),2);
        bufp->chgCData(oldp+1234,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter),4);
        bufp->chgCData(oldp+1235,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter),4);
        bufp->chgBit(oldp+1236,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag));
        bufp->chgSData(oldp+1237,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address),9);
        bufp->chgSData(oldp+1238,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address),9);
        bufp->chgSData(oldp+1239,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data),16);
        bufp->chgIData(oldp+1240,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address),22);
        bufp->chgIData(oldp+1241,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address),22);
        bufp->chgCData(oldp+1242,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1243,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+1244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1247,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1248,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1249,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1250,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1251,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray),4);
        bufp->chgBit(oldp+1252,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1253,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1254,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1255,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1256,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1257,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1258,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1259,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1260,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+1261,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ready_reg));
        bufp->chgBit(oldp+1262,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1263,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1264,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1265,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1266,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1267,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1268,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+1269,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1270,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+1271,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ready_reg));
        bufp->chgBit(oldp+1272,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1273,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1274,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1275,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1277,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1278,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+1279,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1280,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1281,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1282,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1283,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray))));
        bufp->chgBit(oldp+1284,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1285,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1286,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1287,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1288,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1289,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1290,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1291,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1292,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1293,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1294,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1295,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1296,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1297,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1298,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgCData(oldp+1299,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1300,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1301,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1303,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1304,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1305,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1306,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1307,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1308,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1309,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1310,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1311,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1312,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1313,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1314,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1315,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1316,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1317,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1318,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1319,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ready_reg));
        bufp->chgCData(oldp+1321,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1324,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1325,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1326,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1328,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1329,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1330,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1336,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1337,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1338,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1339,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1341,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1342,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1343,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1344,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1345,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1346,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1347,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1348,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1349,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1350,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1351,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1352,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1353,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1354,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1355,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1357,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1358,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1359,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1360,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1361,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1362,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1363,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1364,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1365,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1366,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1367,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1368,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1371,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1372,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1373,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1374,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1375,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1376,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1377,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1378,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1379,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1380,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1381,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1382,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1383,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1384,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1385,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1386,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1387,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1388,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1389,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1390,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1391,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1392,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1393,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1394,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1395,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1396,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1397,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1398,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+1399,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+1400,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1401,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1402,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1403,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1404,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1406,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1407,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray),4);
        bufp->chgBit(oldp+1408,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1409,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1410,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1411,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1412,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1413,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1414,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1415,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1416,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+1417,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ready_reg));
        bufp->chgBit(oldp+1418,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1419,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1420,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1421,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1422,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1423,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1424,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+1425,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1426,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+1427,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ready_reg));
        bufp->chgBit(oldp+1428,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1429,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1430,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1431,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1432,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1433,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1434,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+1435,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1436,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1437,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1438,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1439,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray))));
        bufp->chgBit(oldp+1440,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1441,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1442,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1443,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1444,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1445,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1446,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1447,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1448,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1449,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1450,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1451,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1452,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1453,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1454,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgCData(oldp+1455,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1456,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1457,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1458,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1459,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1460,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1461,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1462,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1463,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1464,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1465,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1466,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1467,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1468,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1469,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1470,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1471,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1472,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1473,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1474,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1475,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1476,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ready_reg));
        bufp->chgCData(oldp+1477,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1478,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1479,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1480,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1481,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1482,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1483,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1484,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1485,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1486,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1488,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1489,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1490,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1491,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1492,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1493,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1494,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1495,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1496,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1497,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1498,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1499,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1500,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1501,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1502,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1503,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1504,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1505,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1506,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1507,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1508,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1509,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1510,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1511,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1512,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1513,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1514,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1515,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1516,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1517,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1518,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1519,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1520,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1521,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1522,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1523,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1524,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1525,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1527,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1528,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1529,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1530,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1531,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1532,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1533,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1534,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1535,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1536,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1537,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1538,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1539,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1540,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1541,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1542,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1543,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1544,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1545,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1546,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1547,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1548,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1549,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1550,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1551,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1552,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1553,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1554,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+1555,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+1556,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter),8);
        bufp->chgIData(oldp+1557,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+1558,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgIData(oldp+1559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
        bufp->chgBit(oldp+1560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+1561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite));
        bufp->chgIData(oldp+1562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
        bufp->chgCData(oldp+1563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
        bufp->chgBit(oldp+1564,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                    | (IData)(((0x20000000U 
                                                == 
                                                (0x30000000U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr)))))));
        bufp->chgBit(oldp+1565,((IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)))));
        bufp->chgIData(oldp+1566,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
        bufp->chgBit(oldp+1567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
        bufp->chgBit(oldp+1568,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgIData(oldp+1569,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
        bufp->chgBit(oldp+1570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
        bufp->chgBit(oldp+1571,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+1572,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
        bufp->chgBit(oldp+1573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
        bufp->chgBit(oldp+1574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
        bufp->chgBit(oldp+1575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
        bufp->chgBit(oldp+1576,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
        bufp->chgBit(oldp+1577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
        bufp->chgBit(oldp+1578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
        bufp->chgBit(oldp+1579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+1580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+1581,((0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+1582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+1583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+1584,((2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+1585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
        bufp->chgBit(oldp+1586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
        bufp->chgIData(oldp+1587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgBit(oldp+1588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
        bufp->chgIData(oldp+1589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
        bufp->chgBit(oldp+1590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+1591,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
        bufp->chgBit(oldp+1592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
        bufp->chgIData(oldp+1593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
        bufp->chgBit(oldp+1594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
        bufp->chgBit(oldp+1595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
        bufp->chgIData(oldp+1596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
        bufp->chgCData(oldp+1597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arburst),2);
        bufp->chgBit(oldp+1598,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
        bufp->chgIData(oldp+1599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
        bufp->chgBit(oldp+1600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
        bufp->chgIData(oldp+1601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
        bufp->chgBit(oldp+1602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
        bufp->chgBit(oldp+1603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
        bufp->chgBit(oldp+1604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
        bufp->chgBit(oldp+1605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
        bufp->chgCData(oldp+1606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid),4);
        bufp->chgBit(oldp+1607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
        bufp->chgBit(oldp+1608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
        bufp->chgCData(oldp+1609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid),4);
        bufp->chgBit(oldp+1610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+1611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgBit(oldp+1612,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+1613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
        bufp->chgCData(oldp+1614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
        bufp->chgBit(oldp+1615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
        bufp->chgBit(oldp+1616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+1617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgBit(oldp+1618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast));
        bufp->chgIData(oldp+1619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+1620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+1621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+1622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgIData(oldp+1623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgBit(oldp+1624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+1625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgBit(oldp+1626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+1627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+1628,((0xfffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
        bufp->chgBit(oldp+1629,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                    >> 2U))));
        bufp->chgBit(oldp+1630,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+1631,((0xfffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
        bufp->chgBit(oldp+1632,((0x7800U == (0x7fffU 
                                             & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0xdU)))));
        bufp->chgSData(oldp+1633,((0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1634,((0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 2U))),11);
        bufp->chgBit(oldp+1635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_awvalid));
        bufp->chgBit(oldp+1636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_wvalid));
        bufp->chgBit(oldp+1637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_arvalid));
        bufp->chgBit(oldp+1638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+1639,((0xaU == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
                                          >> 0x1cU))));
        bufp->chgBit(oldp+1640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+1641,((0xaU == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr 
                                          >> 0x1cU))));
        bufp->chgCData(oldp+1642,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag),2);
        bufp->chgCData(oldp+1643,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag),2);
        bufp->chgBit(oldp+1644,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
        bufp->chgBit(oldp+1645,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
        bufp->chgCData(oldp+1646,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgCData(oldp+1647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),3);
        bufp->chgBit(oldp+1648,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
        bufp->chgBit(oldp+1649,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
        bufp->chgBit(oldp+1650,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                 & (0U == ((6U & (4U 
                                                  ^ 
                                                  (0x1eU 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1bU)))) 
                                           | (1U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+1651,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                    >> 1U))));
        bufp->chgBit(oldp+1652,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+1653,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
        bufp->chgBit(oldp+1654,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+1655,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+1656,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+1657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+1658,((0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+1659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgSData(oldp+1660,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)))),16);
        bufp->chgSData(oldp+1661,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)))),16);
        bufp->chgBit(oldp+1662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+1663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+1664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgBit(oldp+1665,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+1666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+1667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+1668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+1669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+1670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+1671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+1672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+1673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+1674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+1675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+1676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+1677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+1678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+1679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+1680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+1681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+1682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgCData(oldp+1683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgBit(oldp+1684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid));
        bufp->chgCData(oldp+1685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
        bufp->chgBit(oldp+1686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_awvalid));
        bufp->chgIData(oldp+1687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgCData(oldp+1688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats1_1),8);
        bufp->chgBit(oldp+1689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgBit(oldp+1690,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+1691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_arvalid));
        bufp->chgIData(oldp+1692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_araddr),32);
        bufp->chgCData(oldp+1693,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats1),8);
        bufp->chgBit(oldp+1694,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid));
        bufp->chgCData(oldp+1695,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+1696,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size),3);
        bufp->chgCData(oldp+1697,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source),4);
        bufp->chgIData(oldp+1698,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address),32);
        bufp->chgCData(oldp+1699,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask),4);
        bufp->chgIData(oldp+1700,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_data),32);
        bufp->chgCData(oldp+1701,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size_hi),8);
        bufp->chgIData(oldp+1702,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr),32);
        bufp->chgBit(oldp+1703,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1));
        bufp->chgBit(oldp+1704,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1));
        bufp->chgCData(oldp+1705,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size_hi),8);
        bufp->chgBit(oldp+1706,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
        bufp->chgCData(oldp+1707,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_valid),2);
        bufp->chgCData(oldp+1708,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready),4);
        bufp->chgCData(oldp+1709,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_readys),2);
        bufp->chgBit(oldp+1710,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_0));
        bufp->chgBit(oldp+1711,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_1));
        bufp->chgBit(oldp+1712,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0));
        bufp->chgBit(oldp+1713,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1));
        bufp->chgBit(oldp+1714,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+1715,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_real_last));
        bufp->chgBit(oldp+1716,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+1717,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last));
        bufp->chgIData(oldp+1718,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr),32);
        bufp->chgBit(oldp+1719,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst))));
        bufp->chgIData(oldp+1720,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgSData(oldp+1721,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats),9);
        bufp->chgBit(oldp+1722,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+1723,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgIData(oldp+1724,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+1725,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgBit(oldp+1726,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+1727,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgBit(oldp+1728,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+1729,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data),4);
        bufp->chgCData(oldp+1730,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT____Vcellinp__ram_ext__W0_data),4);
        bufp->chgBit(oldp+1731,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
        bufp->chgBit(oldp+1732,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_last) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState))));
        bufp->chgCData(oldp+1733,((0x1fU & ((IData)(3U) 
                                            + (((4U 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                 ? 0U
                                                 : 
                                                ((0x1eU 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size)) 
                                                     >> 2U)) 
                                                 | (3U 
                                                    > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size)))) 
                                               + ((1U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                   ? 
                                                  (((6U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size)) 
                                                    << 1U) 
                                                   | (3U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size) 
                                                          >> 1U))))
                                                   : 0U))))),7);
        bufp->chgCData(oldp+1734,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_beats1),3);
        bufp->chgBit(oldp+1735,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
        bufp->chgBit(oldp+1736,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_i_last));
        bufp->chgBit(oldp+1737,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_last));
        bufp->chgBit(oldp+1738,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_ready));
        bufp->chgCData(oldp+1739,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode),3);
        bufp->chgCData(oldp+1740,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size),3);
        bufp->chgCData(oldp+1741,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source),4);
        bufp->chgCData(oldp+1742,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_mask),4);
        bufp->chgIData(oldp+1743,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data),32);
        bufp->chgBit(oldp+1744,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_o_ready));
        bufp->chgIData(oldp+1745,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data)),32);
        bufp->chgBit(oldp+1746,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))));
        bufp->chgQData(oldp+1747,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide),64);
        bufp->chgIData(oldp+1749,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgIData(oldp+1750,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
        bufp->chgBit(oldp+1751,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+1752,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
        bufp->chgBit(oldp+1753,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+1754,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+1755,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+1756,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+1757,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+1758,((0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1759,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+1760,(((0xffff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                       << 8U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgIData(oldp+1761,((0xfffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgIData(oldp+1762,((0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgCData(oldp+1763,((0xffU & ((IData)(7U) 
                                            + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
        bufp->chgIData(oldp+1764,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgCData(oldp+1765,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pstrb),4);
        bufp->chgCData(oldp+1766,((7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
        bufp->chgCData(oldp+1767,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+1768,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
        bufp->chgBit(oldp+1769,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid));
        bufp->chgBit(oldp+1770,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid));
        bufp->chgSData(oldp+1771,((0x1fffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address)),13);
        bufp->chgCData(oldp+1772,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__a_id),2);
        bufp->chgBit(oldp+1773,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__a_id))));
        bufp->chgBit(oldp+1774,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__stall));
        bufp->chgCData(oldp+1775,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size),4);
        __Vtemp_71[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address;
        __Vtemp_71[1U] = 0U;
        __Vtemp_71[2U] = 0U;
        __Vtemp_71[3U] = 0U;
        bufp->chgWData(oldp+1776,(__Vtemp_71),128);
        bufp->chgCData(oldp+1780,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode),3);
        bufp->chgSData(oldp+1781,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__a_last_beats1),10);
        bufp->chgBit(oldp+1782,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__a_last));
        bufp->chgSData(oldp+1783,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__r_beats1),10);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[9U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x20U])))) {
        bufp->chgBit(oldp+1784,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0))));
        bufp->chgBit(oldp+1785,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)))));
        bufp->chgBit(oldp+1786,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 1U))));
        bufp->chgBit(oldp+1787,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+1788,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+1789,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+1790,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+1791,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+1792,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+1793,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)))));
        bufp->chgBit(oldp+1794,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 1U))));
        bufp->chgBit(oldp+1795,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 2U))));
        bufp->chgBit(oldp+1796,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 3U))));
        bufp->chgBit(oldp+1797,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 2U))));
        bufp->chgBit(oldp+1798,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 4U))));
        bufp->chgBit(oldp+1799,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 5U))));
        bufp->chgBit(oldp+1800,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 6U))));
        bufp->chgBit(oldp+1801,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 7U))));
        bufp->chgBit(oldp+1802,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 8U))));
        bufp->chgBit(oldp+1803,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 9U))));
        bufp->chgBit(oldp+1804,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+1805,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+1806,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+1807,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+1808,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 3U))));
        bufp->chgBit(oldp+1809,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+1810,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+1811,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 4U))));
        bufp->chgBit(oldp+1812,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 5U))));
        bufp->chgBit(oldp+1813,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 6U))));
        bufp->chgBit(oldp+1814,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 7U))));
        bufp->chgBit(oldp+1815,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 8U))));
        bufp->chgBit(oldp+1816,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 9U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+1817,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck));
        bufp->chgBit(oldp+1818,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n));
        bufp->chgBit(oldp+1819,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
        bufp->chgCData(oldp+1820,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next_state),3);
        bufp->chgBit(oldp+1821,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid));
        bufp->chgBit(oldp+1822,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid));
        bufp->chgBit(oldp+1823,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceA_io_a_valid));
        bufp->chgBit(oldp+1824,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_c_valid));
        bufp->chgBit(oldp+1825,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid));
        bufp->chgBit(oldp+1826,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T));
        bufp->chgBit(oldp+1827,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid));
        bufp->chgBit(oldp+1828,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_8));
        bufp->chgCData(oldp+1829,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
        bufp->chgCData(oldp+1830,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
        bufp->chgCData(oldp+1831,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
        bufp->chgBit(oldp+1832,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+1833,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+1834,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgCData(oldp+1835,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
        bufp->chgBit(oldp+1836,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
        bufp->chgBit(oldp+1837,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
        bufp->chgBit(oldp+1838,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
        bufp->chgBit(oldp+1839,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgCData(oldp+1840,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate),4);
        bufp->chgIData(oldp+1841,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr),32);
        bufp->chgIData(oldp+1842,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata),32);
        bufp->chgBit(oldp+1843,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite));
        bufp->chgBit(oldp+1844,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel));
        bufp->chgBit(oldp+1845,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable));
        bufp->chgCData(oldp+1846,((0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)),5);
        bufp->chgIData(oldp+1847,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
        bufp->chgBit(oldp+1848,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x14U == (0x1cU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
        bufp->chgBit(oldp+1849,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x10U == (0x1cU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
        bufp->chgCData(oldp+1850,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                      & (0xcU == (0x1cU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                                     << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                                & (8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                        & (4U == (0x1cU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                                       << 1U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))))),4);
        bufp->chgBit(oldp+1851,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x18U == (0x1cU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
        bufp->chgCData(oldp+1852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgCData(oldp+1853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
        bufp->chgCData(oldp+1854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
        bufp->chgBit(oldp+1855,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid));
        bufp->chgBit(oldp+1856,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid));
        bufp->chgBit(oldp+1857,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_a_valid));
        bufp->chgBit(oldp+1858,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_c_valid));
        bufp->chgBit(oldp+1859,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid));
        bufp->chgBit(oldp+1860,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T));
        bufp->chgBit(oldp+1861,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid));
        bufp->chgBit(oldp+1862,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_8));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+1863,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1864,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1865,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1866,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1867,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1868,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+1869,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1870,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1871,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1872,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1873,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1874,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+1875,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1876,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1877,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+1878,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1879,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1880,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+1881,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1882,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1883,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x10U]))) {
        bufp->chgBit(oldp+1884,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1885,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1886,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x11U]))) {
        bufp->chgBit(oldp+1887,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1888,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1889,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x12U]))) {
        bufp->chgBit(oldp+1890,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1891,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1892,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x13U]))) {
        bufp->chgBit(oldp+1893,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1894,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1895,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x14U]))) {
        bufp->chgBit(oldp+1896,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1897,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1898,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x15U]))) {
        bufp->chgBit(oldp+1899,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1900,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1901,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x16U]))) {
        bufp->chgBit(oldp+1902,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1903,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1904,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x17U]))) {
        bufp->chgBit(oldp+1905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgBit(oldp+1906,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1907,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1908,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1909,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgCData(oldp+1910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgCData(oldp+1911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
        bufp->chgBit(oldp+1912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
        bufp->chgCData(oldp+1913,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgSData(oldp+1914,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgCData(oldp+1915,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgIData(oldp+1916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+1917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
        bufp->chgCData(oldp+1920,((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))),3);
        bufp->chgCData(oldp+1921,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
        bufp->chgCData(oldp+1922,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1923,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1924,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1925,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1926,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1927,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgBit(oldp+1928,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+1929,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
        bufp->chgCData(oldp+1930,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1931,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1932,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1933,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1934,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgBit(oldp+1935,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+1936,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+1937,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx));
        bufp->chgBit(oldp+1938,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid));
        bufp->chgBit(oldp+1939,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx));
        bufp->chgBit(oldp+1940,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid));
        bufp->chgBit(oldp+1941,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx));
        bufp->chgBit(oldp+1942,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid));
        bufp->chgBit(oldp+1943,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx));
        bufp->chgBit(oldp+1944,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid));
        bufp->chgBit(oldp+1945,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1946,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1947,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1948,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1949,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1950,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1951,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1952,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1953,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1954,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1955,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1956,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1957,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1958,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1959,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1960,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1961,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1962,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1963,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1964,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1965,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1966,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1967,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1968,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1969,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1970,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1971,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1972,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1973,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1974,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1975,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1976,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1977,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1978,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1979,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1980,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1981,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1982,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1983,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1984,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[0x17U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x2cU])))) {
        bufp->chgBit(oldp+1985,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                           >> 2U) : 
                                       (((0x2000U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                          ? 7U : (7U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        >> 2U)))));
        bufp->chgBit(oldp+1986,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                           >> 1U) : 
                                       (((0x2000U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                          ? 7U : (7U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        >> 1U)))));
        bufp->chgBit(oldp+1987,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)
                                        : ((0x2000U 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                            ? 7U : 
                                           (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))))));
        bufp->chgBit(oldp+1988,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                           >> 2U) : 
                                       (((0x2000U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                          ? (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                          : 7U) >> 2U)))));
        bufp->chgBit(oldp+1989,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                           >> 1U) : 
                                       (((0x2000U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                          ? (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                          : 7U) >> 1U)))));
        bufp->chgBit(oldp+1990,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)
                                        : ((0x2000U 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                            ? (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                            : 7U)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x18U]))) {
        bufp->chgIData(oldp+1991,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
        bufp->chgSData(oldp+1992,((0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
        bufp->chgSData(oldp+1993,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                   >> 0x10U)),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x19U]))) {
        bufp->chgBit(oldp+1994,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1995,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1996,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1997,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1998,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1999,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2000,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2001,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2002,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2003,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2004,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2005,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2006,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2007,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2008,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2009,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2010,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2011,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1aU]))) {
        bufp->chgBit(oldp+2012,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2013,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2014,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2015,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2016,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2017,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2018,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2019,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2020,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2021,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2022,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2023,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2024,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2025,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2026,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2027,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2028,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2029,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2030,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2031,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2032,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2033,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2034,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2035,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2036,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__ren));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1bU]))) {
        bufp->chgBit(oldp+2037,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2038,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2039,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2040,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2041,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2042,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2043,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2044,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2045,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1cU]))) {
        bufp->chgBit(oldp+2046,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2047,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2048,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2049,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2050,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2051,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2052,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2053,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2054,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1dU]))) {
        bufp->chgBit(oldp+2055,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2056,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2057,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2058,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2059,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2060,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2061,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2062,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2063,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1eU]))) {
        bufp->chgBit(oldp+2064,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2065,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2066,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2067,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2068,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2069,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2070,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2071,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2072,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1fU]))) {
        bufp->chgBit(oldp+2073,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2074,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2075,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2076,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2077,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2078,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2079,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2080,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2081,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x20U]))) {
        bufp->chgBit(oldp+2082,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
        bufp->chgBit(oldp+2083,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
        bufp->chgBit(oldp+2084,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
        bufp->chgBit(oldp+2085,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_bready));
        bufp->chgBit(oldp+2086,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_shift));
        bufp->chgBit(oldp+2087,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__b_shift));
        bufp->chgBit(oldp+2088,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
        bufp->chgBit(oldp+2089,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+2090,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+2091,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
        bufp->chgBit(oldp+2092,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
        bufp->chgBit(oldp+2093,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+2094,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+2095,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2096,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+2097,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+2098,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+2099,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2100,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready));
        bufp->chgBit(oldp+2101,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
        bufp->chgBit(oldp+2102,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready));
        bufp->chgBit(oldp+2103,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
        bufp->chgBit(oldp+2104,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
        bufp->chgBit(oldp+2105,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+2106,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
        bufp->chgCData(oldp+2107,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid),4);
        bufp->chgBit(oldp+2108,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
        bufp->chgCData(oldp+2109,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid),4);
        bufp->chgBit(oldp+2110,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast));
        bufp->chgBit(oldp+2111,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_bvalid));
        bufp->chgBit(oldp+2112,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_rready));
        bufp->chgBit(oldp+2113,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0));
        bufp->chgSData(oldp+2114,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)))),16);
        bufp->chgSData(oldp+2115,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)))),16);
        bufp->chgBit(oldp+2116,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+2117,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),3);
        bufp->chgCData(oldp+2118,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),6);
        bufp->chgCData(oldp+2119,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),3);
        bufp->chgBit(oldp+2120,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
        bufp->chgBit(oldp+2121,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
        bufp->chgBit(oldp+2122,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_2));
        bufp->chgBit(oldp+2123,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
        bufp->chgBit(oldp+2124,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
        bufp->chgBit(oldp+2125,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2));
        bufp->chgBit(oldp+2126,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
        bufp->chgCData(oldp+2127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+2128,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+2129,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+2130,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0));
        bufp->chgBit(oldp+2131,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1));
        bufp->chgBit(oldp+2132,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2));
        bufp->chgBit(oldp+2133,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready));
        bufp->chgBit(oldp+2134,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready));
        bufp->chgBit(oldp+2135,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+2136,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+2137,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+2138,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+2139,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
        bufp->chgCData(oldp+2140,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))),4);
        bufp->chgBit(oldp+2141,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2142,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_valid));
        bufp->chgBit(oldp+2143,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__in_0_a_ready));
        bufp->chgBit(oldp+2144,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeOut_a_valid));
        bufp->chgCData(oldp+2145,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+2146,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_param),3);
        bufp->chgCData(oldp+2147,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size),3);
        bufp->chgCData(oldp+2148,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_source),7);
        bufp->chgIData(oldp+2149,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address),32);
        bufp->chgCData(oldp+2150,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_mask),4);
        bufp->chgIData(oldp+2151,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_data),32);
        bufp->chgBit(oldp+2152,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_ready));
        bufp->chgBit(oldp+2153,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
        bufp->chgBit(oldp+2154,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__winner_1));
        bufp->chgBit(oldp+2155,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxState_1));
        bufp->chgBit(oldp+2156,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_awready));
        bufp->chgBit(oldp+2157,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+2158,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_bready));
        bufp->chgBit(oldp+2159,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+2160,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id));
        bufp->chgCData(oldp+2161,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp),2);
        bufp->chgBit(oldp+2162,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_ready));
        bufp->chgBit(oldp+2163,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid));
        bufp->chgBit(oldp+2164,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_rlast));
        bufp->chgBit(oldp+2165,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__anonIn_a_ready));
        bufp->chgBit(oldp+2166,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready));
        bufp->chgBit(oldp+2167,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__in_0_d_valid));
        bufp->chgCData(oldp+2168,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_25),3);
        bufp->chgCData(oldp+2169,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_19),3);
        bufp->chgCData(oldp+2170,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_16),4);
        bufp->chgBit(oldp+2171,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_10));
        bufp->chgIData(oldp+2172,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_data),32);
        bufp->chgBit(oldp+2173,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_3));
        bufp->chgBit(oldp+2174,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_ready));
        bufp->chgCData(oldp+2175,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp),2);
        bufp->chgCData(oldp+2176,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_beats1),3);
        bufp->chgBit(oldp+2177,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow));
        bufp->chgBit(oldp+2178,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2179,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_16) 
                                       >> 3U))));
        bufp->chgBit(oldp+2180,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last));
        bufp->chgBit(oldp+2181,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2182,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2183,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready));
        bufp->chgBit(oldp+2184,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2185,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2186,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+2187,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_becho_real_last));
        bufp->chgBit(oldp+2188,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_arready));
        bufp->chgBit(oldp+2189,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+2190,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+2191,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2192,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+2193,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+2194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+2195,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2196,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0))));
        bufp->chgCData(oldp+2197,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id),5);
        bufp->chgCData(oldp+2198,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size),4);
        bufp->chgCData(oldp+2199,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source),7);
        bufp->chgBit(oldp+2200,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0))));
        bufp->chgBit(oldp+2201,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                       >> 4U))));
        bufp->chgBit(oldp+2202,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid));
        bufp->chgBit(oldp+2203,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_deq_ready));
        bufp->chgBit(oldp+2204,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__do_deq));
        bufp->chgBit(oldp+2205,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__do_enq));
        bufp->chgBit(oldp+2206,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid));
        bufp->chgBit(oldp+2207,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_deq_ready));
        bufp->chgBit(oldp+2208,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__do_deq));
        bufp->chgBit(oldp+2209,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+2210,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid));
        bufp->chgBit(oldp+2211,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready));
        bufp->chgBit(oldp+2212,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__do_deq));
        bufp->chgBit(oldp+2213,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+2214,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid));
        bufp->chgBit(oldp+2215,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready));
        bufp->chgBit(oldp+2216,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__do_deq));
        bufp->chgBit(oldp+2217,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+2218,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2219,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_a_valid));
        bufp->chgBit(oldp+2220,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2221,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready));
        bufp->chgBit(oldp+2222,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_valid));
        bufp->chgCData(oldp+2223,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_opcode),3);
        bufp->chgCData(oldp+2224,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_param),2);
        bufp->chgCData(oldp+2225,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_size),3);
        bufp->chgCData(oldp+2226,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_source),4);
        bufp->chgCData(oldp+2227,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_sink),5);
        bufp->chgBit(oldp+2228,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_denied));
        bufp->chgBit(oldp+2229,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_corrupt));
        bufp->chgBit(oldp+2230,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass));
        bufp->chgBit(oldp+2231,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready));
        bufp->chgBit(oldp+2232,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall));
        bufp->chgBit(oldp+2233,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid));
        bufp->chgBit(oldp+2234,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2235,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq));
        bufp->chgIData(oldp+2236,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header),32);
        bufp->chgBit(oldp+2237,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_ready_0));
        bufp->chgBit(oldp+2238,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T));
        bufp->chgBit(oldp+2239,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T));
        bufp->chgBit(oldp+2240,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T));
        bufp->chgBit(oldp+2241,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T));
        bufp->chgBit(oldp+2242,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T));
        bufp->chgBit(oldp+2243,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T));
        bufp->chgBit(oldp+2244,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T));
        bufp->chgBit(oldp+2245,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T));
        bufp->chgBit(oldp+2246,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0));
        bufp->chgBit(oldp+2247,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready));
        bufp->chgBit(oldp+2248,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_ready_0));
        bufp->chgBit(oldp+2249,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T));
        bufp->chgBit(oldp+2250,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_1_a_valid));
        bufp->chgSData(oldp+2251,((0x1fffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address)),13);
        bufp->chgBit(oldp+2252,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__anonIn_a_ready));
        bufp->chgBit(oldp+2253,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2254,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeIn_a_ready));
        bufp->chgBit(oldp+2255,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_0_a_valid));
        bufp->chgBit(oldp+2256,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rvalid));
        bufp->chgIData(oldp+2257,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rdata),32);
        bufp->chgBit(oldp+2258,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rvalid));
        bufp->chgIData(oldp+2259,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
        bufp->chgBit(oldp+2260,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
        bufp->chgBit(oldp+2261,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
        bufp->chgCData(oldp+2262,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
        bufp->chgCData(oldp+2263,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
        bufp->chgBit(oldp+2264,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
        bufp->chgBit(oldp+2265,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
        bufp->chgIData(oldp+2266,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask),32);
        bufp->chgBit(oldp+2267,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
        bufp->chgBit(oldp+2268,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__in_0_a_ready));
        bufp->chgCData(oldp+2269,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_22),2);
        bufp->chgCData(oldp+2270,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_13),6);
        bufp->chgBit(oldp+2271,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready));
        bufp->chgCData(oldp+2272,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_valid),2);
        bufp->chgCData(oldp+2273,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_unready),4);
        bufp->chgCData(oldp+2274,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_readys),2);
        bufp->chgBit(oldp+2275,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__winner_0));
        bufp->chgBit(oldp+2276,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__winner_1));
        bufp->chgBit(oldp+2277,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__muxState_0));
        bufp->chgBit(oldp+2278,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__muxState_1));
        bufp->chgBit(oldp+2279,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_25))));
        bufp->chgBit(oldp+2280,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__da_ready));
        bufp->chgBit(oldp+2281,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a_q_io_deq_ready));
        bufp->chgBit(oldp+2282,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2283,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap__DOT__do_enq));
        bufp->chgSData(oldp+2284,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data),12);
        bufp->chgBit(oldp+2285,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2286,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+2287,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2288,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_10__DOT__do_enq));
        bufp->chgSData(oldp+2289,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data),12);
        bufp->chgBit(oldp+2290,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2291,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_11__DOT__do_enq));
        bufp->chgBit(oldp+2292,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2293,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_12__DOT__do_enq));
        bufp->chgBit(oldp+2294,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2295,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_13__DOT__do_enq));
        bufp->chgBit(oldp+2296,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2297,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+2298,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2299,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+2300,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2301,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_4__DOT__do_enq));
        bufp->chgBit(oldp+2302,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2303,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_5__DOT__do_enq));
        bufp->chgBit(oldp+2304,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2305,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_6__DOT__do_enq));
        bufp->chgBit(oldp+2306,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2307,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_7__DOT__do_enq));
        bufp->chgBit(oldp+2308,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2309,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_8__DOT__do_enq));
        bufp->chgBit(oldp+2310,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2311,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_9__DOT__do_enq));
        bufp->chgBit(oldp+2312,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2313,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2314,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2315,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2316,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2317,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2318,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2319,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2320,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2321,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2322,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2323,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2324,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2325,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2326,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2327,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2328,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2329,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2330,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_4));
        bufp->chgBit(oldp+2331,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_2));
        bufp->chgBit(oldp+2332,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_0));
        bufp->chgCData(oldp+2333,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__r_beats1),3);
        bufp->chgBit(oldp+2334,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__a_last));
        bufp->chgBit(oldp+2335,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__stall));
        bufp->chgBit(oldp+2336,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_valid));
        bufp->chgBit(oldp+2337,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc));
        bufp->chgBit(oldp+2338,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_1));
        bufp->chgBit(oldp+2339,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_2));
        bufp->chgBit(oldp+2340,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_3));
        bufp->chgBit(oldp+2341,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_4));
        bufp->chgBit(oldp+2342,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_5));
        bufp->chgBit(oldp+2343,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_6));
        bufp->chgBit(oldp+2344,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2345,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2346,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2347,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xaU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2348,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xbU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2349,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xcU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2350,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2351,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2352,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xfU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2353,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x10U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2354,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x11U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2355,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x12U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2356,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x13U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2357,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x14U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2358,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x15U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2359,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x16U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2360,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__nodeOut_wdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2361,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgCData(oldp+2362,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
        bufp->chgCData(oldp+2363,((0xffU & (~ (0xffU 
                                               & (((IData)(0x3ffU) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size)) 
                                                  >> 2U))))),8);
        bufp->chgCData(oldp+2364,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_size),3);
        bufp->chgCData(oldp+2365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size),4);
        bufp->chgBit(oldp+2366,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                          >> 2U)))));
        bufp->chgBit(oldp+2367,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_deq_ready));
        bufp->chgBit(oldp+2368,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2369,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen));
        bufp->chgBit(oldp+2370,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2371,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2372,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT___bar_auto_out_0_a_valid));
        bufp->chgBit(oldp+2373,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT___bar_auto_out_0_d_ready));
        bufp->chgBit(oldp+2374,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_d_valid));
        bufp->chgCData(oldp+2375,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24),3);
        bufp->chgCData(oldp+2376,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_19),4);
        bufp->chgCData(oldp+2377,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_16),4);
        bufp->chgBit(oldp+2378,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxState_1));
        bufp->chgBit(oldp+2379,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_3));
        bufp->chgBit(oldp+2380,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass));
        bufp->chgBit(oldp+2381,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall));
        bufp->chgBit(oldp+2382,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_opcode))));
        bufp->chgBit(oldp+2383,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_ready));
        bufp->chgBit(oldp+2384,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__winner_1));
        bufp->chgBit(oldp+2385,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24))));
        bufp->chgCData(oldp+2386,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2387,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2388,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2389,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x22U]))) {
        bufp->chgBit(oldp+2390,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2391,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2392,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2393,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2394,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2395,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2396,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2397,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2398,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2399,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2400,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2401,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2402,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2403,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2404,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2405,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2406,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2407,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x23U]))) {
        bufp->chgBit(oldp+2408,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2409,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2410,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2411,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2412,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2413,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2414,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2415,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2416,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2417,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2418,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2419,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2420,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2421,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2422,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2423,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2424,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2425,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2426,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2427,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2428,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2429,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2430,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2431,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2432,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__ren));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x24U]))) {
        bufp->chgBit(oldp+2433,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2434,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2435,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2436,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2437,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2438,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2439,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2440,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2441,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x25U]))) {
        bufp->chgBit(oldp+2442,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2443,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2444,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2445,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2446,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2447,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2448,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2449,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2450,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x26U]))) {
        bufp->chgBit(oldp+2451,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2452,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2453,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2454,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2455,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2456,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2457,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2458,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2459,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x27U]))) {
        bufp->chgBit(oldp+2460,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2461,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2462,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2463,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2464,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2465,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2466,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2467,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2468,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x28U]))) {
        bufp->chgBit(oldp+2469,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2470,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2471,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2472,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2473,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2474,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2475,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2476,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2477,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x29U]))) {
        bufp->chgBit(oldp+2478,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_awvalid));
        bufp->chgCData(oldp+2479,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))),4);
        bufp->chgIData(oldp+2480,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+2481,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_len),8);
        bufp->chgCData(oldp+2482,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_size),3);
        bufp->chgBit(oldp+2483,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+2484,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wdata),32);
        bufp->chgCData(oldp+2485,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wstrb),4);
        bufp->chgBit(oldp+2486,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wlast));
        bufp->chgBit(oldp+2487,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_arvalid));
        bufp->chgBit(oldp+2488,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2489,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_valid));
        bufp->chgBit(oldp+2490,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__in_0_a_ready));
        bufp->chgBit(oldp+2491,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeOut_a_valid));
        bufp->chgCData(oldp+2492,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+2493,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_param),3);
        bufp->chgCData(oldp+2494,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size),4);
        bufp->chgCData(oldp+2495,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_source),7);
        bufp->chgIData(oldp+2496,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address),32);
        bufp->chgCData(oldp+2497,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_mask),4);
        bufp->chgIData(oldp+2498,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_data),32);
        bufp->chgBit(oldp+2499,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_ready));
        bufp->chgBit(oldp+2500,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
        bufp->chgBit(oldp+2501,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__winner_1));
        bufp->chgBit(oldp+2502,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1));
        bufp->chgBit(oldp+2503,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_awready));
        bufp->chgBit(oldp+2504,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_wready));
        bufp->chgBit(oldp+2505,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last)))));
        bufp->chgBit(oldp+2506,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+2507,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id));
        bufp->chgCData(oldp+2508,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bresp),2);
        bufp->chgBit(oldp+2509,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_ready));
        bufp->chgBit(oldp+2510,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid));
        bufp->chgBit(oldp+2511,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__anonIn_a_ready));
        bufp->chgBit(oldp+2512,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready));
        bufp->chgBit(oldp+2513,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__in_0_d_valid));
        bufp->chgCData(oldp+2514,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_25),3);
        bufp->chgCData(oldp+2515,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_19),3);
        bufp->chgCData(oldp+2516,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_16),4);
        bufp->chgBit(oldp+2517,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_10));
        bufp->chgIData(oldp+2518,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_data),32);
        bufp->chgBit(oldp+2519,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_3));
        bufp->chgBit(oldp+2520,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_ready));
        bufp->chgCData(oldp+2521,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp),2);
        bufp->chgCData(oldp+2522,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_beats1),3);
        bufp->chgBit(oldp+2523,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
        bufp->chgBit(oldp+2524,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2525,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_16) 
                                       >> 3U))));
        bufp->chgBit(oldp+2526,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last));
        bufp->chgBit(oldp+2527,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2528,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2529,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready));
        bufp->chgBit(oldp+2530,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2531,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2532,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_awvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgRegularize_hc17a5693_0_0))));
        bufp->chgBit(oldp+2533,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2534,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_arvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgRegularize_hc17a5693_2_0))));
        bufp->chgBit(oldp+2535,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2536,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_awvalid));
        bufp->chgCData(oldp+2537,((0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))),4);
        bufp->chgCData(oldp+2538,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size),4);
        bufp->chgCData(oldp+2539,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source),7);
        bufp->chgBit(oldp+2540,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id) 
                                       >> 4U))));
        bufp->chgBit(oldp+2541,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_arvalid));
        bufp->chgBit(oldp+2542,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_bvalid))));
        bufp->chgBit(oldp+2543,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_awready));
        bufp->chgBit(oldp+2544,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last));
        bufp->chgBit(oldp+2545,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_arready));
        bufp->chgBit(oldp+2546,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+2547,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awvalid));
        bufp->chgCData(oldp+2548,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id),5);
        bufp->chgCData(oldp+2549,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size),4);
        bufp->chgCData(oldp+2550,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source),7);
        bufp->chgBit(oldp+2551,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_arvalid));
        bufp->chgBit(oldp+2552,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                       >> 4U))));
        bufp->chgCData(oldp+2553,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id),5);
        bufp->chgBit(oldp+2554,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2555,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__do_enq));
        bufp->chgSData(oldp+2556,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data),12);
        bufp->chgBit(oldp+2557,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2558,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+2559,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2560,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__do_enq));
        bufp->chgBit(oldp+2561,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2562,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__do_enq));
        bufp->chgBit(oldp+2563,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2564,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__do_enq));
        bufp->chgBit(oldp+2565,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2566,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__do_enq));
        bufp->chgBit(oldp+2567,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2568,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+2569,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2570,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+2571,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2572,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__do_enq));
        bufp->chgBit(oldp+2573,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2574,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__do_enq));
        bufp->chgBit(oldp+2575,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2576,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__do_enq));
        bufp->chgBit(oldp+2577,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2578,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__do_enq));
        bufp->chgBit(oldp+2579,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2580,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__do_enq));
        bufp->chgBit(oldp+2581,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2582,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__do_enq));
        bufp->chgBit(oldp+2583,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2584,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2585,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2586,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2587,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2588,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2589,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2590,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2591,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2592,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2593,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2594,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2595,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2596,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2597,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2598,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2599,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2600,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2601,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid));
        bufp->chgBit(oldp+2602,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__do_enq));
        bufp->chgBit(oldp+2603,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid));
        bufp->chgBit(oldp+2604,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+2605,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid));
        bufp->chgBit(oldp+2606,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready));
        bufp->chgBit(oldp+2607,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_deq));
        bufp->chgBit(oldp+2608,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+2609,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid));
        bufp->chgBit(oldp+2610,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready));
        bufp->chgBit(oldp+2611,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_deq));
        bufp->chgBit(oldp+2612,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+2613,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2614,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_a_valid));
        bufp->chgBit(oldp+2615,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2616,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready));
        bufp->chgBit(oldp+2617,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_valid));
        bufp->chgCData(oldp+2618,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_opcode),3);
        bufp->chgCData(oldp+2619,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_param),2);
        bufp->chgCData(oldp+2620,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_size),3);
        bufp->chgCData(oldp+2621,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_source),4);
        bufp->chgCData(oldp+2622,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_sink),5);
        bufp->chgBit(oldp+2623,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_denied));
        bufp->chgBit(oldp+2624,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_corrupt));
        bufp->chgBit(oldp+2625,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass));
        bufp->chgBit(oldp+2626,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready));
        bufp->chgBit(oldp+2627,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall));
        bufp->chgBit(oldp+2628,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid));
        bufp->chgBit(oldp+2629,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2630,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq));
        bufp->chgIData(oldp+2631,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header),32);
        bufp->chgBit(oldp+2632,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_q_ready_0));
        bufp->chgBit(oldp+2633,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T));
        bufp->chgBit(oldp+2634,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T));
        bufp->chgBit(oldp+2635,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T));
        bufp->chgBit(oldp+2636,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T));
        bufp->chgBit(oldp+2637,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T));
        bufp->chgBit(oldp+2638,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T));
        bufp->chgBit(oldp+2639,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T));
        bufp->chgBit(oldp+2640,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T));
        bufp->chgBit(oldp+2641,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0));
        bufp->chgBit(oldp+2642,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready));
        bufp->chgBit(oldp+2643,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready_0));
        bufp->chgBit(oldp+2644,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T));
        bufp->chgBit(oldp+2645,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_valid));
        bufp->chgCData(oldp+2646,((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size))),3);
        bufp->chgSData(oldp+2647,((0x1fffU & vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address)),13);
        bufp->chgBit(oldp+2648,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__anonIn_a_ready));
        bufp->chgBit(oldp+2649,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2650,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2651,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_valid));
        bufp->chgIData(oldp+2652,((0x7fffffffU & vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address)),31);
        bufp->chgBit(oldp+2653,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4));
        bufp->chgBit(oldp+2654,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2));
        bufp->chgBit(oldp+2655,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0));
        bufp->chgCData(oldp+2656,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_beats1),6);
        bufp->chgBit(oldp+2657,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_last));
        bufp->chgBit(oldp+2658,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall));
        bufp->chgBit(oldp+2659,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_valid));
        bufp->chgBit(oldp+2660,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc));
        bufp->chgBit(oldp+2661,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1));
        bufp->chgBit(oldp+2662,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2));
        bufp->chgBit(oldp+2663,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3));
        bufp->chgBit(oldp+2664,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4));
        bufp->chgBit(oldp+2665,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5));
        bufp->chgBit(oldp+2666,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6));
        bufp->chgBit(oldp+2667,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2668,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2669,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2670,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xaU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2671,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xbU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2672,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xcU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2673,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xdU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2674,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xeU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2675,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xfU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2676,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x10U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2677,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x11U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2678,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x12U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2679,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x13U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2680,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x14U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2681,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x15U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2682,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x16U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2683,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2684,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgCData(oldp+2685,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
        bufp->chgCData(oldp+2686,((0xffU & (~ (0xffU 
                                               & (((IData)(0x3ffU) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size)) 
                                                  >> 2U))))),8);
        bufp->chgCData(oldp+2687,(((0U != (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size) 
                                                 >> 1U)))
                                    ? 2U : (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size)))),3);
        bufp->chgBit(oldp+2688,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_h9d3d4082_0_0)))));
        bufp->chgBit(oldp+2689,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready));
        bufp->chgBit(oldp+2690,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2691,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_wen));
        bufp->chgBit(oldp+2692,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2693,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeIn_a_ready));
        bufp->chgBit(oldp+2694,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_valid));
        bufp->chgBit(oldp+2695,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__requestAIO_0_1));
        bufp->chgBit(oldp+2696,((0U == (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address 
                                        >> 0x1eU))));
        bufp->chgBit(oldp+2697,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgIData(oldp+2698,((~ (((~ (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                                    | (~ vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1)))))),32);
        bufp->chgCData(oldp+2699,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
        bufp->chgBit(oldp+2700,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1))))));
        bufp->chgBit(oldp+2701,(((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____VdfgRegularize_h55402cce_3_0))));
        bufp->chgBit(oldp+2702,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+2703,((~ (((~ (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                                    | (~ vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr)))))),32);
        bufp->chgCData(oldp+2704,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
        bufp->chgBit(oldp+2705,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len))))));
        bufp->chgBit(oldp+2706,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2707,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2708,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wcounter_T));
        bufp->chgCData(oldp+2709,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+2710,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr),32);
        bufp->chgCData(oldp+2711,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1),8);
        bufp->chgIData(oldp+2712,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+2713,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgBit(oldp+2714,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgIData(oldp+2715,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+2716,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgBit(oldp+2717,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2718,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+2719,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+2720,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgCData(oldp+2721,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
        bufp->chgBit(oldp+2722,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+2723,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+2724,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2725,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2726,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__in_0_a_ready));
        bufp->chgCData(oldp+2727,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_22),2);
        bufp->chgCData(oldp+2728,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_13),6);
        bufp->chgBit(oldp+2729,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready));
        bufp->chgCData(oldp+2730,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_valid),2);
        bufp->chgCData(oldp+2731,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_unready),4);
        bufp->chgCData(oldp+2732,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_readys),2);
        bufp->chgBit(oldp+2733,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__winner_0));
        bufp->chgBit(oldp+2734,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__winner_1));
        bufp->chgBit(oldp+2735,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__muxState_0));
        bufp->chgBit(oldp+2736,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__muxState_1));
        bufp->chgBit(oldp+2737,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_25))));
        bufp->chgBit(oldp+2738,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__da_ready));
        bufp->chgBit(oldp+2739,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_q_io_deq_ready));
        bufp->chgBit(oldp+2740,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2741,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap__DOT__do_enq));
        bufp->chgSData(oldp+2742,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data),12);
        bufp->chgBit(oldp+2743,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2744,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+2745,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2746,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_10__DOT__do_enq));
        bufp->chgSData(oldp+2747,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data),12);
        bufp->chgBit(oldp+2748,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2749,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_11__DOT__do_enq));
        bufp->chgBit(oldp+2750,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2751,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_12__DOT__do_enq));
        bufp->chgBit(oldp+2752,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2753,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_13__DOT__do_enq));
        bufp->chgBit(oldp+2754,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2755,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+2756,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2757,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+2758,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2759,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_4__DOT__do_enq));
        bufp->chgBit(oldp+2760,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2761,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_5__DOT__do_enq));
        bufp->chgBit(oldp+2762,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2763,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_6__DOT__do_enq));
        bufp->chgBit(oldp+2764,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2765,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_7__DOT__do_enq));
        bufp->chgBit(oldp+2766,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2767,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_8__DOT__do_enq));
        bufp->chgBit(oldp+2768,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2769,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_9__DOT__do_enq));
        bufp->chgBit(oldp+2770,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2771,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2772,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2773,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2774,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2775,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2776,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2777,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2778,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2779,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2780,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2781,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2782,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2783,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2784,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2785,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2786,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2787,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2788,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_4));
        bufp->chgBit(oldp+2789,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_2));
        bufp->chgBit(oldp+2790,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_0));
        bufp->chgCData(oldp+2791,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__r_beats1),3);
        bufp->chgBit(oldp+2792,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__a_last));
        bufp->chgBit(oldp+2793,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__stall));
        bufp->chgBit(oldp+2794,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_valid));
        bufp->chgBit(oldp+2795,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc));
        bufp->chgBit(oldp+2796,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_1));
        bufp->chgBit(oldp+2797,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_2));
        bufp->chgBit(oldp+2798,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_3));
        bufp->chgBit(oldp+2799,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_4));
        bufp->chgBit(oldp+2800,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_5));
        bufp->chgBit(oldp+2801,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_6));
        bufp->chgBit(oldp+2802,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2803,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2804,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2805,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xaU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2806,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xbU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2807,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xcU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2808,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2809,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2810,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xfU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2811,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x10U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2812,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x11U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2813,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x12U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2814,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x13U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2815,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x14U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2816,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x15U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2817,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x16U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2818,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__nodeOut_wdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2819,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgCData(oldp+2820,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
        bufp->chgCData(oldp+2821,((0xffU & (~ (0xffU 
                                               & (((IData)(0x3ffU) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size))) 
                                                  >> 2U))))),8);
        bufp->chgCData(oldp+2822,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_size),3);
        bufp->chgCData(oldp+2823,((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size))),4);
        bufp->chgBit(oldp+2824,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                          >> 2U)))));
        bufp->chgBit(oldp+2825,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_deq_ready));
        bufp->chgBit(oldp+2826,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2827,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen));
        bufp->chgBit(oldp+2828,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2829,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2830,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT___bar_auto_out_0_a_valid));
        bufp->chgBit(oldp+2831,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT___bar_auto_out_0_d_ready));
        bufp->chgBit(oldp+2832,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_d_valid));
        bufp->chgCData(oldp+2833,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24),3);
        bufp->chgCData(oldp+2834,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_19),4);
        bufp->chgCData(oldp+2835,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_16),4);
        bufp->chgBit(oldp+2836,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxState_1));
        bufp->chgBit(oldp+2837,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_3));
        bufp->chgBit(oldp+2838,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass));
        bufp->chgBit(oldp+2839,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall));
        bufp->chgBit(oldp+2840,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_opcode))));
        bufp->chgBit(oldp+2841,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_ready));
        bufp->chgBit(oldp+2842,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__winner_1));
        bufp->chgBit(oldp+2843,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24))));
        bufp->chgCData(oldp+2844,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2845,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2846,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2847,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2bU]))) {
        bufp->chgCData(oldp+2848,(((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT____VdfgRegularize_h95f21b40_0_2)
                                    ? 0xfU : 0U)),4);
        bufp->chgCData(oldp+2849,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd),8);
        bufp->chgIData(oldp+2850,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr),24);
        bufp->chgCData(oldp+2851,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter),8);
        bufp->chgCData(oldp+2852,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2cU]))) {
        bufp->chgSData(oldp+2853,(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a),14);
        bufp->chgBit(oldp+2854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
        bufp->chgBit(oldp+2855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
        bufp->chgBit(oldp+2856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
        bufp->chgBit(oldp+2857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready));
        bufp->chgBit(oldp+2858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready));
        bufp->chgBit(oldp+2859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
        bufp->chgBit(oldp+2860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
        bufp->chgBit(oldp+2861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+2862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+2863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
        bufp->chgBit(oldp+2864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__arready));
        bufp->chgBit(oldp+2865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__awready));
        bufp->chgBit(oldp+2866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__wready));
        bufp->chgBit(oldp+2867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
        bufp->chgIData(oldp+2868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w),32);
        bufp->chgCData(oldp+2869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
        bufp->chgBit(oldp+2870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+2871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
        bufp->chgCData(oldp+2872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+2873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+2874,((0x1feU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                             >> 1U))),13);
        bufp->chgSData(oldp+2875,((0x1fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                              >> 0xcU))),13);
        bufp->chgCData(oldp+2876,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                         >> 0xaU))),2);
        bufp->chgCData(oldp+2877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_double),3);
        bufp->chgCData(oldp+2878,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
        bufp->chgCData(oldp+2879,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command),3);
        bufp->chgCData(oldp+2880,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command),3);
        bufp->chgCData(oldp+2881,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2882,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2883,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2884,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2885,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2886,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2887,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2888,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2889,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2890,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2891,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2892,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2dU]))) {
        bufp->chgBit(oldp+2893,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2894,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2895,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2896,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2897,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2898,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2899,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2900,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2901,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2902,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2903,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2904,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2eU]))) {
        bufp->chgBit(oldp+2905,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2906,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2907,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2908,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2909,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2910,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2fU]))) {
        bufp->chgBit(oldp+2911,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2912,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2913,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2914,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2915,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2916,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x30U]))) {
        bufp->chgBit(oldp+2917,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2918,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2919,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2920,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2921,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2922,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x31U]))) {
        bufp->chgBit(oldp+2923,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2924,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2925,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2926,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2927,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2928,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x32U]))) {
        bufp->chgBit(oldp+2929,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2930,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2931,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2932,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2933,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2934,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x33U]))) {
        bufp->chgBit(oldp+2935,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2936,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2937,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2938,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2939,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2940,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2941,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2942,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2943,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2944,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2945,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2946,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x34U]))) {
        bufp->chgBit(oldp+2947,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2948,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2949,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2950,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2951,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2952,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x35U]))) {
        bufp->chgBit(oldp+2953,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2954,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2955,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2956,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2957,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2958,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x36U]))) {
        bufp->chgBit(oldp+2959,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2960,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2961,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2962,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2963,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2964,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x37U]))) {
        bufp->chgBit(oldp+2965,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2966,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2967,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2968,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2969,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2970,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x38U]))) {
        bufp->chgBit(oldp+2971,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2972,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2973,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2974,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2975,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2976,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x39U]))) {
        bufp->chgBit(oldp+2977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_valid));
        bufp->chgCData(oldp+2978,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_IFU__DOT__next_state),3);
        bufp->chgCData(oldp+2979,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__next_state),3);
    }
    bufp->chgBit(oldp+2980,(vlSelfRef.clock));
    bufp->chgBit(oldp+2981,(vlSelfRef.reset));
    bufp->chgSData(oldp+2982,(vlSelfRef.externalPins_gpio_out),16);
    bufp->chgSData(oldp+2983,(vlSelfRef.externalPins_gpio_in),16);
    bufp->chgCData(oldp+2984,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+2985,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+2986,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+2987,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+2988,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+2989,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+2990,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+2991,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+2992,(vlSelfRef.externalPins_ps2_clk));
    bufp->chgBit(oldp+2993,(vlSelfRef.externalPins_ps2_data));
    bufp->chgCData(oldp+2994,(vlSelfRef.externalPins_vga_r),8);
    bufp->chgCData(oldp+2995,(vlSelfRef.externalPins_vga_g),8);
    bufp->chgCData(oldp+2996,(vlSelfRef.externalPins_vga_b),8);
    bufp->chgBit(oldp+2997,(vlSelfRef.externalPins_vga_hsync));
    bufp->chgBit(oldp+2998,(vlSelfRef.externalPins_vga_vsync));
    bufp->chgBit(oldp+2999,(vlSelfRef.externalPins_vga_valid));
    bufp->chgBit(oldp+3000,(vlSelfRef.externalPins_uart_rx));
    bufp->chgBit(oldp+3001,(vlSelfRef.externalPins_uart_tx));
    bufp->chgBit(oldp+3002,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_0));
    bufp->chgBit(oldp+3003,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_0));
    bufp->chgBit(oldp+3004,(((IData)(vlSelfRef.ysyxSoCFull__DOT___bitrev_miso) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                     & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                     ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                     : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                   >> 0x1fU)))));
    bufp->chgCData(oldp+3005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->chgBit(oldp+3006,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgIData(oldp+3007,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                 ? ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata
                                     : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                                         ? (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                   << 8U))) 
                                            | ((0xff00U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                   >> 8U)) 
                                               | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                  >> 0x18U)))
                                         : 0U)) : 0U) 
                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                        ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                            << 0x18U) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                               << 0x10U) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                        : 0U) : 0U) 
                                  | (((0U == (3U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0x1cU)))
                                       ? (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                            [3U] << 0x18U) 
                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                              [2U] 
                                              << 0x10U)) 
                                          | ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                              [1U] 
                                              << 8U) 
                                             | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                             [0U]))
                                       : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_in_prdata
                                                  : 0U) 
                                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__reg_in_prdata
                                                     : 0U) 
                                                   | ((2U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                           >> 0x1cU)))
                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                       : 0U))))))),32);
    bufp->chgBit(oldp+3008,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->chgIData(oldp+3009,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->chgBit(oldp+3010,((1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                                   | (((0xaU == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
                                                 >> 0x1cU)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                         & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
                                            >> 0x1eU)))))));
    bufp->chgBit(oldp+3011,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    bufp->chgBit(oldp+3012,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid)))))));
    bufp->chgBit(oldp+3013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->chgBit(oldp+3014,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+3015,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->chgCData(oldp+3016,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))
                                ? 0x30U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready))
                                            ? 0x10U
                                            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                                << 5U) 
                                               | (((0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+3017,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->chgBit(oldp+3018,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->chgBit(oldp+3019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->chgBit(oldp+3020,(vlSelfRef.ysyxSoCFull__DOT___bitrev_miso));
    bufp->chgBit(oldp+3021,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                   | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->chgCData(oldp+3022,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->chgIData(oldp+3023,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->chgIData(oldp+3024,(((0xfffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->chgIData(oldp+3025,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->chgBit(oldp+3026,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    bufp->chgBit(oldp+3027,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid)))))));
    bufp->chgCData(oldp+3028,((vlSelfRef.ysyxSoCFull__DOT__psram__DOT____VdfgRegularize_h95f21b40_0_1 
                               >> 0x1cU)),4);
    bufp->chgBit(oldp+3029,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->chgIData(oldp+3030,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->chgIData(oldp+3031,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->chgIData(oldp+3032,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->chgIData(oldp+3033,((((vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | (0xff0000U 
                                              & (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data 
                                                 << 8U))) 
                               | ((0xff00U & (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data 
                                              >> 8U)) 
                                  | (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data 
                                     >> 0x18U)))),32);
    bufp->chgBit(oldp+3034,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)))));
    bufp->chgBit(oldp+3035,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)))));
    bufp->chgCData(oldp+3036,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                : 0U)),4);
    bufp->chgCData(oldp+3037,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                : 0U)),4);
    bufp->chgCData(oldp+3038,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                : 0U)),4);
    bufp->chgCData(oldp+3039,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                : 0U)),4);
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3bU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
