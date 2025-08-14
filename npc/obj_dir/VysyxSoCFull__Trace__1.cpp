// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_1(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7701);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_10;
    VlWide<8>/*255:0*/ __Vtemp_16;
    VlWide<8>/*255:0*/ __Vtemp_22;
    VlWide<8>/*255:0*/ __Vtemp_28;
    VlWide<8>/*255:0*/ __Vtemp_34;
    VlWide<8>/*255:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<8>/*255:0*/ __Vtemp_48;
    VlWide<8>/*255:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<8>/*255:0*/ __Vtemp_62;
    VlWide<8>/*255:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_69;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_2));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q_io_deq_ready));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_first_3));
        bufp->chgIData(oldp+3,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_delta_3),21);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_3));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q_io_deq_ready));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_first_4));
        bufp->chgIData(oldp+7,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_delta_4),21);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_4));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q_io_deq_ready));
        bufp->chgIData(oldp+10,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__mask),19);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__msbOH),20);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__mask_1),19);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__msbOH_1),20);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__mask_2),19);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__msbOH_2),20);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__mask_3),19);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__msbOH_3),20);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__mask_4),19);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__msbOH_4),20);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__requests),6);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__xmit),2);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowReturn));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__first));
        bufp->chgCData(oldp+24,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__state),6);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__readys_mask),6);
        bufp->chgSData(oldp+26,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__readys_unready),12);
        bufp->chgCData(oldp+27,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__winner),6);
        bufp->chgCData(oldp+28,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__grant),6);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed),6);
        bufp->chgBit(oldp+30,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__send));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_send_REG));
        bufp->chgCData(oldp+32,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG),6);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_0),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_1),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_2),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_3),32);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_4),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_1_5),32);
        bufp->chgBit(oldp+39,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__valid_1)))));
        bufp->chgBit(oldp+40,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__valid_0) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow))));
        bufp->chgIData(oldp+41,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+42,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_0_last));
        bufp->chgCData(oldp+43,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+44,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed))));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__valid_0));
        bufp->chgIData(oldp+46,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_0_data),32);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_0_last));
        bufp->chgCData(oldp+48,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+49,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__valid_1));
        bufp->chgIData(oldp+50,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_1_data),32);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_1_last));
        bufp->chgCData(oldp+52,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+53,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__valid_1)))));
        bufp->chgBit(oldp+54,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_0) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_1))));
        bufp->chgIData(oldp+55,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_0_last));
        bufp->chgCData(oldp+57,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                     >> 1U))));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__valid_0));
        bufp->chgIData(oldp+60,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_0_data),32);
        bufp->chgBit(oldp+61,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_0_last));
        bufp->chgCData(oldp+62,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+63,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__valid_1));
        bufp->chgIData(oldp+64,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_1_data),32);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_1_last));
        bufp->chgCData(oldp+66,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_1__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+67,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__valid_1)))));
        bufp->chgBit(oldp+68,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_0) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_2))));
        bufp->chgIData(oldp+69,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_0_last));
        bufp->chgCData(oldp+71,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+72,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                     >> 2U))));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__valid_0));
        bufp->chgIData(oldp+74,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_0_data),32);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_0_last));
        bufp->chgCData(oldp+76,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__valid_1));
        bufp->chgIData(oldp+78,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_1_data),32);
        bufp->chgBit(oldp+79,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_1_last));
        bufp->chgCData(oldp+80,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_2__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+81,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__valid_1)))));
        bufp->chgBit(oldp+82,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__valid_0) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_3))));
        bufp->chgIData(oldp+83,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_0_last));
        bufp->chgCData(oldp+85,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                     >> 3U))));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__valid_0));
        bufp->chgIData(oldp+88,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_0_data),32);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_0_last));
        bufp->chgCData(oldp+90,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+91,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__valid_1));
        bufp->chgIData(oldp+92,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_1_data),32);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_1_last));
        bufp->chgCData(oldp+94,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_3__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+95,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__valid_1)))));
        bufp->chgBit(oldp+96,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_0) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_allow_4))));
        bufp->chgIData(oldp+97,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_0_data),32);
        bufp->chgBit(oldp+98,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_0_last));
        bufp->chgCData(oldp+99,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+100,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__allowed) 
                                      >> 4U))));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__valid_0));
        bufp->chgIData(oldp+102,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_0_data),32);
        bufp->chgBit(oldp+103,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_0_last));
        bufp->chgCData(oldp+104,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+105,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__valid_1));
        bufp->chgIData(oldp+106,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_1_data),32);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_1_last));
        bufp->chgCData(oldp+108,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__ioX_cq_4__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+109,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__valid_0));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__valid_1));
        bufp->chgIData(oldp+111,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_1_last));
        bufp->chgCData(oldp+113,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+114,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_1)))));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_0));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__valid_1));
        bufp->chgIData(oldp+117,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+118,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_1_last));
        bufp->chgCData(oldp+119,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qb_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+120,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_1)))));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_0));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__valid_1));
        bufp->chgIData(oldp+123,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_1_last));
        bufp->chgCData(oldp+125,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qc_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__valid_0));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__valid_1));
        bufp->chgIData(oldp+128,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+129,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_1_last));
        bufp->chgCData(oldp+130,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qd_q__DOT__elts_1_beats),7);
        bufp->chgBit(oldp+131,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_1)))));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_0));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__valid_1));
        bufp->chgIData(oldp+134,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_1_last));
        bufp->chgCData(oldp+136,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qe_q__DOT__elts_1_beats),7);
        bufp->chgIData(oldp+137,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 0x10U)))),20);
        bufp->chgIData(oldp+138,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               << 4U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                 >> 0x1cU)))),20);
        bufp->chgIData(oldp+139,((0xfffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 8U))),20);
        bufp->chgIData(oldp+140,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                 >> 0x14U)))),20);
        bufp->chgIData(oldp+141,((0xfffffU & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])),20);
        __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_c)) 
                                  << 0x28U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_d)) 
                                                << 0x14U) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_e)))));
        __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b)))) 
                          << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_c)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_d)) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_e)))) 
                                               >> 0x20U)));
        __Vtemp_1[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b)))) 
                          >> 4U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                               << 0x14U) 
                                              | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b))) 
                                             >> 0x20U)) 
                                    << 0x1cU));
        __Vtemp_1[3U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__mem_0_b))) 
                                  >> 0x20U)) >> 4U);
        bufp->chgWData(oldp+142,(__Vtemp_1),100);
        bufp->chgWData(oldp+146,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),100);
        bufp->chgBit(oldp+150,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__valid_1)))));
        bufp->chgIData(oldp+151,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__Vcellinp__rxQ__io_enq_bits_data),32);
        bufp->chgBit(oldp+152,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__Vcellinp__rxQ__io_deq_ready));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__valid_0));
        bufp->chgIData(oldp+154,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_0_data),32);
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_0_last));
        bufp->chgCData(oldp+156,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_0_beats),7);
        bufp->chgBit(oldp+157,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__valid_1));
        bufp->chgIData(oldp+158,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_1_data),32);
        bufp->chgBit(oldp+159,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_1_last));
        bufp->chgCData(oldp+160,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxQ__DOT__elts_1_beats),7);
        bufp->chgIData(oldp+161,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 0x10U)))),20);
        bufp->chgIData(oldp+162,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               << 4U) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                 >> 0x1cU)))),20);
        bufp->chgIData(oldp+163,((0xfffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 8U))),20);
        bufp->chgIData(oldp+164,((0xfffffU & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                 >> 0x14U)))),20);
        bufp->chgIData(oldp+165,((0xfffffU & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])),20);
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_c)) 
                                  << 0x28U) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_d)) 
                                                << 0x14U) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_e)))));
        __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b)))) 
                          << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_c)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_d)) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_e)))) 
                                               >> 0x20U)));
        __Vtemp_2[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b)))) 
                          >> 4U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                               << 0x14U) 
                                              | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b))) 
                                             >> 0x20U)) 
                                    << 0x1cU));
        __Vtemp_2[3U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_a)) 
                                    << 0x14U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__mem_0_b))) 
                                  >> 0x20U)) >> 4U);
        bufp->chgWData(oldp+166,(__Vtemp_2),100);
        bufp->chgWData(oldp+170,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),100);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z),21);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_1),21);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_2),21);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_3),21);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__unnamedblk1__DOT__rx_z_4),21);
        bufp->chgCData(oldp+179,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+180,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+181,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+182,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+183,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+184,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+185,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+186,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+187,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk1__DOT__index),3);
        bufp->chgCData(oldp+188,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk1__DOT__index),3);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+189,((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state)) 
                                 | (9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready))));
        bufp->chgIData(oldp+190,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
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
        bufp->chgBit(oldp+191,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit))));
        bufp->chgBit(oldp+192,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_c_ready) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid)))))));
        bufp->chgSData(oldp+193,(((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                   [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                   << 3U) | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
        bufp->chgCData(oldp+194,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
        bufp->chgBit(oldp+195,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__xmit))));
        bufp->chgBit(oldp+196,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_c_ready) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid)))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgBit(oldp+197,((IData)(((0x20000000U 
                                         == (0x30000000U 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                        & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
        bufp->chgBit(oldp+198,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+199,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+200,((IData)(((0U == (0x30000000U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                        & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
        bufp->chgBit(oldp+201,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast)))));
        bufp->chgIData(oldp+202,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                   ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                              >> 5U))
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata)),32);
        bufp->chgBit(oldp+203,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast)))));
        bufp->chgBit(oldp+204,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value]))));
        bufp->chgBit(oldp+205,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value]))));
        bufp->chgBit(oldp+206,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_real_last)
                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value]))));
        bufp->chgBit(oldp+207,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_real_last)
                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                                      [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value]))));
        __Vtemp_4[0U] = ((((0x2fU >= (0x3fU & ((IData)(3U) 
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
        __Vtemp_4[1U] = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                          ? ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                              << 0x1bU) | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                           >> 5U)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address);
        __Vtemp_4[2U] = (IData)(((QData)((IData)(((1U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data))) 
                                 << 0x20U));
        __Vtemp_4[3U] = (IData)((((QData)((IData)((
                                                   (1U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data))) 
                                  << 0x20U) >> 0x20U));
        bufp->chgIData(oldp+208,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U)))
                                    ? 0U : (__Vtemp_4[
                                            (((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))))) 
                                  | (__Vtemp_4[(3U 
                                                & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U) 
                                                   >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state), 5U))))),32);
        bufp->chgIData(oldp+209,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                                   ? ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                                       << 0x1bU) | 
                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                       >> 5U)) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address)),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xaU])))) {
        bufp->chgIData(oldp+210,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
        bufp->chgCData(oldp+211,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
        bufp->chgIData(oldp+212,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                    ? ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
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
        bufp->chgBit(oldp+213,(((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
        bufp->chgBit(oldp+214,((1U & (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
        bufp->chgSData(oldp+215,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_bits)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgSData(oldp+216,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_bits)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        __Vtemp_10[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_0;
        __Vtemp_10[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_1;
        __Vtemp_10[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_2;
        __Vtemp_10[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_3;
        __Vtemp_10[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_4;
        __Vtemp_10[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_5;
        __Vtemp_10[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))));
        __Vtemp_10[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+217,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_10[
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
                                  | (__Vtemp_10[(7U 
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
        __Vtemp_16[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_0;
        __Vtemp_16[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_1;
        __Vtemp_16[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_2;
        __Vtemp_16[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_3;
        __Vtemp_16[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_4;
        __Vtemp_16[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_5;
        __Vtemp_16[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))));
        __Vtemp_16[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+218,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_16[
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
                                  | (__Vtemp_16[(7U 
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
        __Vtemp_22[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_0;
        __Vtemp_22[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_1;
        __Vtemp_22[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_2;
        __Vtemp_22[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_3;
        __Vtemp_22[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_4;
        __Vtemp_22[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_5;
        __Vtemp_22[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))));
        __Vtemp_22[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+219,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_22[
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
                                  | (__Vtemp_22[(7U 
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
        __Vtemp_28[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_0;
        __Vtemp_28[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_1;
        __Vtemp_28[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_2;
        __Vtemp_28[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_3;
        __Vtemp_28[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_4;
        __Vtemp_28[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_5;
        __Vtemp_28[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))));
        __Vtemp_28[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+220,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_28[
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
                                  | (__Vtemp_28[(7U 
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
        __Vtemp_34[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_0;
        __Vtemp_34[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_1;
        __Vtemp_34[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_2;
        __Vtemp_34[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_3;
        __Vtemp_34[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_4;
        __Vtemp_34[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_5;
        __Vtemp_34[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))));
        __Vtemp_34[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+221,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_34[
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
                                  | (__Vtemp_34[(7U 
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
        __Vtemp_40[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_0;
        __Vtemp_40[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_1;
        __Vtemp_40[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_2;
        __Vtemp_40[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_3;
        __Vtemp_40[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_4;
        __Vtemp_40[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_5;
        __Vtemp_40[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))));
        __Vtemp_40[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+222,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_40[
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
                                  | (__Vtemp_40[(7U 
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
        bufp->chgCData(oldp+223,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+224,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+225,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+226,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+227,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT___fq_io_deq_valid)
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
        bufp->chgBit(oldp+228,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))));
        bufp->chgBit(oldp+229,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                       >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1)))));
        bufp->chgBit(oldp+230,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0)))));
        bufp->chgBit(oldp+231,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                                       >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2)))));
        bufp->chgCData(oldp+232,(((0xeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
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
        bufp->chgCData(oldp+233,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))),2);
        bufp->chgCData(oldp+234,(((0xeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)
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
        bufp->chgIData(oldp+235,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                   ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                              >> 3U))
                                   : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_data)),32);
        bufp->chgCData(oldp+236,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                         ? (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                    >> 1U))
                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp)))),2);
        bufp->chgBit(oldp+237,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0))));
        bufp->chgBit(oldp+238,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1))));
        bufp->chgBit(oldp+239,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))));
        bufp->chgBit(oldp+240,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+241,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+242,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xaU))));
        bufp->chgBit(oldp+243,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xbU))));
        bufp->chgBit(oldp+244,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xcU))));
        bufp->chgBit(oldp+245,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xdU))));
        bufp->chgBit(oldp+246,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xeU))));
        bufp->chgBit(oldp+247,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xfU))));
        bufp->chgBit(oldp+248,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+249,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+250,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+251,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+252,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+253,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+254,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+255,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+256,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+257,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+258,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+259,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xaU))));
        bufp->chgBit(oldp+260,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xbU))));
        bufp->chgBit(oldp+261,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xcU))));
        bufp->chgBit(oldp+262,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xdU))));
        bufp->chgBit(oldp+263,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+264,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xeU))));
        bufp->chgBit(oldp+265,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xfU))));
        bufp->chgBit(oldp+266,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+267,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+268,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+269,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+270,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+271,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+272,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen) 
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
        bufp->chgIData(oldp+273,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                   ? (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram 
                                              >> 0x19U))
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address)),32);
        bufp->chgCData(oldp+274,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                            ? (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram 
                                                       >> 0x11U))
                                            : (~ (0xffU 
                                                  & (((IData)(0x3ffU) 
                                                      << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size)) 
                                                     >> 2U)))))),8);
        bufp->chgCData(oldp+275,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                         ? (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram 
                                                    >> 0xeU))
                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_size)))),3);
        bufp->chgBit(oldp+276,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full) 
                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__nodeOut_wdeq_q__io_enq_valid))));
        bufp->chgIData(oldp+277,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full)
                                   ? (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__ram 
                                              >> 5U))
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_data)),32);
        bufp->chgCData(oldp+278,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full)
                                           ? (IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__ram 
                                                      >> 1U))
                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_mask)))),4);
        bufp->chgBit(oldp+279,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__ram)
                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__a_last)))));
        bufp->chgBit(oldp+280,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen)) 
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
        bufp->chgCData(oldp+281,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
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
        bufp->chgCData(oldp+282,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)
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
        bufp->chgBit(oldp+283,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_slave_awready) 
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
        bufp->chgBit(oldp+284,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_slave_arready) 
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
        bufp->chgBit(oldp+285,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid)))));
        bufp->chgBit(oldp+286,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid)))));
        bufp->chgBit(oldp+287,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid)))));
        bufp->chgBit(oldp+288,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid)))));
        bufp->chgIData(oldp+289,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                   ? 0U : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),32);
        __Vtemp_42[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header;
        __Vtemp_42[1U] = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                          & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                     >> 0x22U)));
        __Vtemp_42[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                 ? (IData)(
                                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                            >> 1U))
                                                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))));
        __Vtemp_42[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                  ? (IData)(
                                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                             >> 1U))
                                                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+290,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U)))
                                    ? 0U : (__Vtemp_42[
                                            (((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))) 
                                  | (__Vtemp_42[(3U 
                                                 & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))),32);
        bufp->chgSData(oldp+291,((0xffffU & (((0U == 
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
        bufp->chgIData(oldp+292,((4U | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                          & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                         [0U]) << 0x10U))),32);
        bufp->chgSData(oldp+293,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                   & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                  [0U])),16);
        bufp->chgBit(oldp+294,((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11))));
        bufp->chgSData(oldp+295,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+296,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 1U))));
        bufp->chgSData(oldp+297,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+298,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 2U))));
        bufp->chgSData(oldp+299,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+300,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 3U))));
        bufp->chgSData(oldp+301,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+302,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 4U))));
        bufp->chgSData(oldp+303,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+304,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 5U))));
        bufp->chgSData(oldp+305,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+306,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 6U))));
        bufp->chgSData(oldp+307,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+308,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 7U))));
        bufp->chgSData(oldp+309,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgIData(oldp+310,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                   : 0U)),32);
        bufp->chgBit(oldp+311,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                                & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                   && ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast)
                                        : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                           && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)))))));
        bufp->chgCData(oldp+312,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                   ? ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)
                                                : 0U))
                                   : 0U)),4);
        bufp->chgBit(oldp+313,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
        bufp->chgCData(oldp+314,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                   ? ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)
                                                : 0U))
                                   : 0U)),4);
        bufp->chgBit(oldp+315,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                                & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                   && ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast)
                                        : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                           && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)))))));
        bufp->chgCData(oldp+316,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                   ? ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)
                                                : 0U))
                                   : 0U)),4);
        bufp->chgBit(oldp+317,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
        bufp->chgCData(oldp+318,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                   ? ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)
                                                : 0U))
                                   : 0U)),4);
        bufp->chgBit(oldp+319,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                && ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast)
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                        && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg))))));
        bufp->chgCData(oldp+320,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)
                                            : 0U))),4);
        bufp->chgCData(oldp+321,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)
                                            : 0U))),4);
        bufp->chgCData(oldp+322,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arvalid)
                                       ? (((0x2000048U 
                                            == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr) 
                                           | (0x200004cU 
                                              == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr))
                                           ? 2U : 1U)
                                       : 0U) : ((1U 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 
                                                (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast) 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready)))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)))),3);
        bufp->chgCData(oldp+323,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awvalid)
                                       ? 1U : 0U) : 
                                  ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                        ? 0U : 1U) : 
                                   ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                     ? 2U : 0U)))),3);
        bufp->chgBit(oldp+324,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready)))));
        bufp->chgBit(oldp+325,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
        bufp->chgBit(oldp+326,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_6)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_6) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_6)))));
        bufp->chgBit(oldp+327,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_5)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_5) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_5)))));
        bufp->chgBit(oldp+328,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_3)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_3) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_3)))));
        bufp->chgBit(oldp+329,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_1)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_1) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_1)))));
        __Vtemp_48[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0;
        __Vtemp_48[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1;
        __Vtemp_48[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2;
        __Vtemp_48[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3;
        __Vtemp_48[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4;
        __Vtemp_48[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5;
        __Vtemp_48[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))));
        __Vtemp_48[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+330,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_48[
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
                                  | (__Vtemp_48[(7U 
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
        __Vtemp_54[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_0;
        __Vtemp_54[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_1;
        __Vtemp_54[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_2;
        __Vtemp_54[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_3;
        __Vtemp_54[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_4;
        __Vtemp_54[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_5;
        __Vtemp_54[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))));
        __Vtemp_54[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+331,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_54[
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
                                  | (__Vtemp_54[(7U 
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
        bufp->chgCData(oldp+332,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+333,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+334,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+335,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT___fq_io_deq_valid)
                                            ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq) 
                                                & (0x1fU 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__deq_ptr)))),5);
        bufp->chgCData(oldp+336,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT___fq_io_deq_valid)
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
        bufp->chgBit(oldp+337,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid))));
        bufp->chgIData(oldp+338,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                   ? (IData)((vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                              >> 3U))
                                   : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_data)),32);
        bufp->chgCData(oldp+339,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                         ? (IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                    >> 1U))
                                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp)))),2);
        bufp->chgBit(oldp+340,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last)))));
        bufp->chgIData(oldp+341,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                   ? (IData)((vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                              >> 5U))
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_data)),32);
        bufp->chgCData(oldp+342,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                           ? (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                      >> 1U))
                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_mask)))),4);
        bufp->chgBit(oldp+343,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram)
                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_last)))));
        bufp->chgQData(oldp+344,((((QData)((IData)(
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
        bufp->chgBit(oldp+346,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgRegularize_hc17a5693_0_0))));
        bufp->chgBit(oldp+347,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgRegularize_hc17a5693_2_0))));
        bufp->chgCData(oldp+348,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bresp) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__error_1)
                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__error_0)))),2);
        bufp->chgCData(oldp+349,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
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
        bufp->chgCData(oldp+350,((7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
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
        bufp->chgBit(oldp+351,((1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
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
        bufp->chgBit(oldp+352,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
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
        bufp->chgBit(oldp+353,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_arready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_real_last))));
        bufp->chgBit(oldp+354,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_real_last))));
        bufp->chgBit(oldp+355,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_wready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_2))));
        bufp->chgBit(oldp+356,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__VdfgRegularize_hb2c28821_0_0))));
        bufp->chgBit(oldp+357,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__VdfgRegularize_hb2c28821_2_0))));
        bufp->chgCData(oldp+358,(((0xeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
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
        bufp->chgCData(oldp+359,(((0xeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
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
        bufp->chgBit(oldp+360,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid)))));
        bufp->chgBit(oldp+361,((1U & ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid)))));
        bufp->chgBit(oldp+362,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid)))));
        bufp->chgBit(oldp+363,((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid)))));
        bufp->chgIData(oldp+364,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                   ? 0U : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),32);
        __Vtemp_56[0U] = vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header;
        __Vtemp_56[1U] = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                          & (IData)((vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                     >> 0x22U)));
        __Vtemp_56[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                 ? (IData)(
                                                                           (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                            >> 1U))
                                                                 : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))));
        __Vtemp_56[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                                  ? (IData)(
                                                                            (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                             >> 1U))
                                                                  : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+365,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U)))
                                    ? 0U : (__Vtemp_56[
                                            (((IData)(0x1fU) 
                                              + (0x7fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))) 
                                  | (__Vtemp_56[(3U 
                                                 & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state), 5U))))),32);
        bufp->chgSData(oldp+366,((0xffffU & (((0U == 
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
        bufp->chgIData(oldp+367,((4U | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                          & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                          : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                         [0U]) << 0x10U))),32);
        bufp->chgSData(oldp+368,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                   & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                  [0U])),16);
        bufp->chgBit(oldp+369,((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12))));
        bufp->chgSData(oldp+370,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+371,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 1U))));
        bufp->chgSData(oldp+372,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+373,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 2U))));
        bufp->chgSData(oldp+374,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+375,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 3U))));
        bufp->chgSData(oldp+376,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+377,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 4U))));
        bufp->chgSData(oldp+378,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+379,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 5U))));
        bufp->chgSData(oldp+380,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+381,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 6U))));
        bufp->chgSData(oldp+382,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+383,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
                                & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                   >> 7U))));
        bufp->chgSData(oldp+384,((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T) 
                                   & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_key_0)))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                   : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                  [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
        bufp->chgBit(oldp+385,((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_6) 
                                    != (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_h9d3d4082_0_0))))) 
                                | (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)))));
        bufp->chgBit(oldp+386,((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_5) 
                                    != (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_h9d3d4082_0_0))))) 
                                | (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)))));
        bufp->chgBit(oldp+387,((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_3) 
                                    != (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_h9d3d4082_0_0))))) 
                                | (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)))));
        bufp->chgBit(oldp+388,((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_1) 
                                    != (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_h9d3d4082_0_0))))) 
                                | (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)))));
        bufp->chgCData(oldp+389,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                                           ? (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                      >> 0x2dU))
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id)))),4);
        bufp->chgIData(oldp+390,(((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                   ? (IData)((vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                              >> 5U))
                                   : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wdata)),32);
        bufp->chgCData(oldp+391,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                           ? (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                      >> 1U))
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wstrb)))),4);
        bufp->chgBit(oldp+392,((1U == ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)))));
        bufp->chgCData(oldp+393,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                                           ? (IData)(
                                                     (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                                      >> 0x2dU))
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id)))),4);
        bufp->chgQData(oldp+394,((((QData)((IData)(
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
        bufp->chgQData(oldp+396,((((QData)((IData)(
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
        bufp->chgQData(oldp+398,((((QData)((IData)(
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
        bufp->chgSData(oldp+400,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))),9);
        bufp->chgBit(oldp+401,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wlast)))));
        bufp->chgBit(oldp+402,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_6)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_6) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_6)))));
        bufp->chgBit(oldp+403,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_5)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_5) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_5)))));
        bufp->chgBit(oldp+404,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_3)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_3) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_3)))));
        bufp->chgBit(oldp+405,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_1)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_1) 
                                    != (1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_1)))));
        __Vtemp_62[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0;
        __Vtemp_62[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1;
        __Vtemp_62[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2;
        __Vtemp_62[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3;
        __Vtemp_62[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4;
        __Vtemp_62[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5;
        __Vtemp_62[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))));
        __Vtemp_62[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+406,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_62[
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
                                  | (__Vtemp_62[(7U 
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
        __Vtemp_68[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_0;
        __Vtemp_68[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_1;
        __Vtemp_68[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_2;
        __Vtemp_68[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_3;
        __Vtemp_68[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_4;
        __Vtemp_68[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_5;
        __Vtemp_68[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))));
        __Vtemp_68[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+407,((((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_1) 
                                                           << 2U)), 5U)))
                                    ? 0U : (__Vtemp_68[
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
                                  | (__Vtemp_68[(7U 
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
        bufp->chgBit(oldp+408,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid))));
        bufp->chgBit(oldp+409,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgBit(oldp+410,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                                & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   && ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                       && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready))))));
        bufp->chgBit(oldp+411,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                                & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   && ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                       && ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid)))))));
        bufp->chgBit(oldp+412,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                && ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                    && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready)))));
        bufp->chgBit(oldp+413,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                && ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                    && ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+414,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data),8);
        bufp->chgCData(oldp+415,(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),8);
        bufp->chgIData(oldp+416,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+417,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck));
        bufp->chgCData(oldp+418,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss),8);
        bufp->chgBit(oldp+419,(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
        bufp->chgBit(oldp+420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
        bufp->chgCData(oldp+421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
        bufp->chgIData(oldp+422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
        bufp->chgBit(oldp+423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
        bufp->chgBit(oldp+424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
        bufp->chgBit(oldp+425,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+426,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+429,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+431,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+432,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+436,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
        bufp->chgBit(oldp+437,((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+440,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+441,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
        bufp->chgBit(oldp+442,((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))));
        bufp->chgBit(oldp+443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck));
        bufp->chgBit(oldp+444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n));
        bufp->chgCData(oldp+445,(((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                                   ? (1U & (0x35U >> 
                                            (7U & ((IData)(7U) 
                                                   - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                                   : 0U)),4);
        bufp->chgBit(oldp+446,((0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgCData(oldp+447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
        bufp->chgCData(oldp+448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter),8);
        bufp->chgBit(oldp+449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+452,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                         >> 1U) - (IData)(3U)))),2);
        bufp->chgBit(oldp+453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+456,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
        bufp->chgIData(oldp+458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
        bufp->chgBit(oldp+459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+469,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+470,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+471,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+472,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr]),6);
        bufp->chgBit(oldp+474,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0)) 
                                & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+475,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0))));
        bufp->chgBit(oldp+476,((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+477,((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+478,((1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+483,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+484,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+486,((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+487,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+488,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgBit(oldp+494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgBit(oldp+495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+496,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
        bufp->chgSData(oldp+497,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+498,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+499,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+500,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
        bufp->chgSData(oldp+501,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
        bufp->chgSData(oldp+502,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
        bufp->chgSData(oldp+503,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
        bufp->chgSData(oldp+504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
        bufp->chgCData(oldp+505,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+508,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+509,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+510,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
        bufp->chgBit(oldp+511,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_spi_irq_out));
        bufp->chgIData(oldp+512,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata),32);
        bufp->chgBit(oldp+513,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready));
        bufp->chgSData(oldp+514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+515,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+516,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+517,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+521,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 9U))));
        bufp->chgBit(oldp+522,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xaU))));
        bufp->chgCData(oldp+523,((0x7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+524,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 8U))));
        bufp->chgBit(oldp+525,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+526,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+527,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+531,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
        bufp->chgSData(oldp+532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+533,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+534,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+536,((0xffU & ((0x800U 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0) 
                                               - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                               - (IData)(1U))))),8);
        bufp->chgCData(oldp+537,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+538,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
        bufp->chgBit(oldp+539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
        bufp->chgBit(oldp+540,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                         >> 1U)))));
        bufp->chgBit(oldp+541,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+543,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U))));
        bufp->chgBit(oldp+544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+546,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+547,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+561,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+562,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+563,((IData)((0x10U != (0x12U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+564,((IData)((0x11U == (0x11U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+565,((IData)((0x14U == (0x14U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+566,((IData)((0x18U == (0x18U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+567,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
        bufp->chgBit(oldp+568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
        bufp->chgBit(oldp+571,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
        bufp->chgBit(oldp+572,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
        bufp->chgBit(oldp+573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+582,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+584,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+585,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+586,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+587,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+591,((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
        bufp->chgBit(oldp+592,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
        bufp->chgCData(oldp+593,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+594,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+595,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+596,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+597,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+598,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt))))));
        bufp->chgCData(oldp+599,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+600,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+601,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+602,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+603,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+604,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+605,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+606,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+607,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+608,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+609,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+610,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+611,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+612,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+613,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+614,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+615,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+617,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+618,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+619,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+620,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+621,(((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+636,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+637,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+638,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+640,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+641,((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+642,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+643,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+644,((0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                          - (IData)(1U)))),4);
        bufp->chgSData(oldp+645,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+646,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                           >> 2U))),8);
        bufp->chgCData(oldp+647,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+648,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+649,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+650,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+651,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+652,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+653,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+654,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+655,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+656,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+657,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+658,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+659,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+660,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+661,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+662,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+663,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+664,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+665,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+666,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+667,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+668,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+669,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+670,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+671,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+672,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+674,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+675,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+676,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xaU]),3);
        bufp->chgCData(oldp+677,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xbU]),3);
        bufp->chgCData(oldp+678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xcU]),3);
        bufp->chgCData(oldp+679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xdU]),3);
        bufp->chgCData(oldp+680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xeU]),3);
        bufp->chgCData(oldp+681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xfU]),3);
        bufp->chgCData(oldp+682,((0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                           >> 3U))),8);
        bufp->chgCData(oldp+683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+686,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+687,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+688,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+689,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+690,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+691,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+692,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+693,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgBit(oldp+694,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss) 
                                      >> 7U))));
        bufp->chgBit(oldp+695,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset));
        bufp->chgBit(oldp+696,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+697,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+698,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+699,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+700,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+701,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+702,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+703,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid));
        bufp->chgBit(oldp+704,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid));
        bufp->chgCData(oldp+705,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+706,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+708,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+709,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+710,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+711,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+712,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+713,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+714,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+720,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+723,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+724,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+725,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+726,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+728,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+729,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+730,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+731,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+732,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+733,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+734,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+735,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+737,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+738,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+739,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+741,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+742,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+743,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+744,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+745,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+746,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+747,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+748,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+749,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+750,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+751,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+754,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+755,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+756,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+757,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+758,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+759,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+760,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+761,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+762,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+763,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+764,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+765,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+766,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+767,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+768,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+769,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+770,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+771,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+772,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+773,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+774,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+775,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+776,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+777,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+778,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+779,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+780,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+781,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+782,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+783,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+784,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+785,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+786,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+787,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+788,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+791,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+793,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+794,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+795,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+796,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+797,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+800,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+801,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+803,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+813,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+814,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+815,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+816,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+817,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+818,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+819,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+820,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+821,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+822,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+824,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+825,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+826,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+827,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+828,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+829,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+830,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+831,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+832,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+833,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+834,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+835,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+836,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+837,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+839,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+840,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+841,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+842,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+843,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+844,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+845,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+847,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+849,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+850,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+851,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+852,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+853,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+854,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+855,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+856,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+857,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+858,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+859,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+860,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+861,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+862,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+863,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+864,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+865,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+866,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgCData(oldp+867,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_ridx_bin),4);
        bufp->chgBit(oldp+868,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid_reg));
        bufp->chgBit(oldp+869,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+870,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+871,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+872,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+873,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+874,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+875,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+876,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+877,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+878,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+879,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+880,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+881,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+882,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+883,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+884,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+885,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT___rxInc_sink_io_deq_valid));
        bufp->chgBit(oldp+886,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+887,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+888,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+889,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+890,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+891,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+892,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+893,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+894,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT___txInc_sink_io_deq_valid));
        bufp->chgBit(oldp+895,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+896,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+897,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+898,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+899,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+900,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+901,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+902,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+903,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT___rxInc_sink_io_deq_valid));
        bufp->chgBit(oldp+904,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+905,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+906,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+907,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+908,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+910,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+911,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+912,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT___txInc_sink_io_deq_valid));
        bufp->chgBit(oldp+913,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+914,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid_reg));
        bufp->chgBit(oldp+915,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+916,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+917,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+918,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+919,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+920,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xaU])))) {
        bufp->chgCData(oldp+921,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                   : 0U)),4);
        bufp->chgCData(oldp+922,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                   : 0U)),4);
        bufp->chgCData(oldp+923,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                   : 0U)),4);
        bufp->chgCData(oldp+924,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                   : 0U)),4);
        bufp->chgCData(oldp+925,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                   : 0U)),4);
        bufp->chgCData(oldp+926,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                   : 0U)),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+927,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[0]),13);
        bufp->chgSData(oldp+928,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[1]),13);
        bufp->chgSData(oldp+929,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[2]),13);
        bufp->chgSData(oldp+930,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[3]),13);
        bufp->chgSData(oldp+931,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)
                                   ? 0xffffU : 0U)),16);
        bufp->chgSData(oldp+932,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout),16);
        bufp->chgCData(oldp+933,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency),3);
        bufp->chgCData(oldp+934,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length),3);
        bufp->chgCData(oldp+935,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank),2);
        bufp->chgCData(oldp+936,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1),2);
        bufp->chgCData(oldp+937,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter),4);
        bufp->chgCData(oldp+938,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter),4);
        bufp->chgBit(oldp+939,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag));
        bufp->chgSData(oldp+940,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address),9);
        bufp->chgSData(oldp+941,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address),9);
        bufp->chgSData(oldp+942,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data),16);
        bufp->chgIData(oldp+943,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address),22);
        bufp->chgIData(oldp+944,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address),22);
        bufp->chgCData(oldp+945,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length),4);
        bufp->chgSData(oldp+946,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[0]),13);
        bufp->chgSData(oldp+947,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[1]),13);
        bufp->chgSData(oldp+948,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[2]),13);
        bufp->chgSData(oldp+949,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[3]),13);
        bufp->chgSData(oldp+950,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                   ? 0xffffU : 0U)),16);
        bufp->chgSData(oldp+951,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout),16);
        bufp->chgCData(oldp+952,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency),3);
        bufp->chgCData(oldp+953,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length),3);
        bufp->chgCData(oldp+954,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank),2);
        bufp->chgCData(oldp+955,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1),2);
        bufp->chgCData(oldp+956,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter),4);
        bufp->chgCData(oldp+957,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter),4);
        bufp->chgBit(oldp+958,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag));
        bufp->chgSData(oldp+959,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address),9);
        bufp->chgSData(oldp+960,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address),9);
        bufp->chgSData(oldp+961,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data),16);
        bufp->chgIData(oldp+962,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address),22);
        bufp->chgIData(oldp+963,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address),22);
        bufp->chgCData(oldp+964,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length),4);
        bufp->chgSData(oldp+965,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[0]),13);
        bufp->chgSData(oldp+966,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[1]),13);
        bufp->chgSData(oldp+967,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[2]),13);
        bufp->chgSData(oldp+968,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[3]),13);
        bufp->chgSData(oldp+969,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)
                                   ? 0xffffU : 0U)),16);
        bufp->chgSData(oldp+970,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout),16);
        bufp->chgCData(oldp+971,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency),3);
        bufp->chgCData(oldp+972,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length),3);
        bufp->chgCData(oldp+973,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank),2);
        bufp->chgCData(oldp+974,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1),2);
        bufp->chgCData(oldp+975,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter),4);
        bufp->chgCData(oldp+976,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter),4);
        bufp->chgBit(oldp+977,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag));
        bufp->chgSData(oldp+978,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address),9);
        bufp->chgSData(oldp+979,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address),9);
        bufp->chgSData(oldp+980,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data),16);
        bufp->chgIData(oldp+981,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address),22);
        bufp->chgIData(oldp+982,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address),22);
        bufp->chgCData(oldp+983,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length),4);
        bufp->chgSData(oldp+984,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[0]),13);
        bufp->chgSData(oldp+985,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[1]),13);
        bufp->chgSData(oldp+986,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[2]),13);
        bufp->chgSData(oldp+987,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[3]),13);
        bufp->chgSData(oldp+988,(((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                   ? 0xffffU : 0U)),16);
        bufp->chgSData(oldp+989,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout),16);
        bufp->chgCData(oldp+990,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency),3);
        bufp->chgCData(oldp+991,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length),3);
        bufp->chgCData(oldp+992,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank),2);
        bufp->chgCData(oldp+993,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1),2);
        bufp->chgCData(oldp+994,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter),4);
        bufp->chgCData(oldp+995,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter),4);
        bufp->chgBit(oldp+996,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag));
        bufp->chgSData(oldp+997,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address),9);
        bufp->chgSData(oldp+998,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address),9);
        bufp->chgSData(oldp+999,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data),16);
        bufp->chgIData(oldp+1000,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address),22);
        bufp->chgIData(oldp+1001,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address),22);
        bufp->chgCData(oldp+1002,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1003,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+1004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1007,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1009,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray),4);
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1014,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1015,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1016,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1017,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1018,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1020,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ready_reg));
        bufp->chgBit(oldp+1022,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1024,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1026,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1027,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1028,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+1029,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ready_reg));
        bufp->chgBit(oldp+1032,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1033,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1034,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1035,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+1039,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1040,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1041,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1042,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1043,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray))));
        bufp->chgBit(oldp+1044,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1045,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1046,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1047,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1048,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1049,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1050,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1051,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1052,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1053,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1054,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1055,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1056,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1057,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1058,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1060,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1061,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1062,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1064,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1065,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1066,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1067,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1068,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1069,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1070,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1071,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1073,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1074,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1075,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1076,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ready_reg));
        bufp->chgCData(oldp+1081,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1082,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1083,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1084,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1085,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1086,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1087,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1088,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1089,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1090,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1093,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1094,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1095,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1096,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1097,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1098,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1099,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1100,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1101,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1102,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1103,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1104,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1105,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1106,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1107,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1108,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1109,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1110,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1111,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1112,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1113,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1114,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1115,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1116,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1117,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1118,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1119,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1120,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1121,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1124,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1126,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1129,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1130,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1132,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1133,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1134,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1137,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1138,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1139,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1141,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1143,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1144,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1146,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1147,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1148,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1149,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1150,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1151,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1152,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1153,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1154,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1156,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1157,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1158,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+1159,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
        bufp->chgBit(oldp+1160,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1161,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1162,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1163,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1164,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1165,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1166,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray),4);
        bufp->chgCData(oldp+1167,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray),4);
        bufp->chgBit(oldp+1168,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1169,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
        bufp->chgBit(oldp+1170,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1171,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1172,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1173,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1174,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__io_enq_ready));
        bufp->chgBit(oldp+1175,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1176,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+1177,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ready_reg));
        bufp->chgBit(oldp+1178,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1179,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1180,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1181,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1182,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1183,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1184,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+1185,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1186,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+1187,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ready_reg));
        bufp->chgBit(oldp+1188,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1189,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1190,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1191,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1192,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1193,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1194,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+1195,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1196,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1197,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1198,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1199,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray))));
        bufp->chgBit(oldp+1200,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1201,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1202,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1203,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1204,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1205,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1206,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1207,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1208,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1209,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1210,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1211,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray))));
        bufp->chgBit(oldp+1212,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1213,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1214,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                       >> 3U))));
        bufp->chgCData(oldp+1215,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1216,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1217,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1218,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1219,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1220,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1221,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1222,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1223,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1224,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1225,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1226,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1227,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1228,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1229,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1230,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1231,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1232,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1236,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ready_reg));
        bufp->chgCData(oldp+1237,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1238,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1239,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1240,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1241,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1242,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1243,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1244,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1245,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1246,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1247,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1248,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1249,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1250,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1251,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1252,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1253,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1254,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1255,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1256,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1257,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1258,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1259,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1260,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1261,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1262,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1263,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1264,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1265,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1266,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1267,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1268,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1269,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1270,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1271,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1272,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1273,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1274,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1275,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1277,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1278,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1279,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1280,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1282,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1283,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1284,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1285,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1286,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1289,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1292,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1293,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1294,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx),4);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_widx_bin),4);
        bufp->chgBit(oldp+1296,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ready_reg));
        bufp->chgCData(oldp+1297,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                       << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1299,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1300,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1301,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        bufp->chgBit(oldp+1303,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        bufp->chgBit(oldp+1304,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        bufp->chgBit(oldp+1305,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        bufp->chgBit(oldp+1306,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        bufp->chgBit(oldp+1307,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        bufp->chgBit(oldp+1308,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        bufp->chgBit(oldp+1309,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        bufp->chgBit(oldp+1310,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1311,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1312,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgCData(oldp+1313,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
        bufp->chgCData(oldp+1314,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+1315,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+1316,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter),8);
        bufp->chgIData(oldp+1317,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+1318,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgIData(oldp+1319,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
        bufp->chgBit(oldp+1320,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+1321,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite));
        bufp->chgIData(oldp+1322,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
        bufp->chgCData(oldp+1323,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
        bufp->chgBit(oldp+1324,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
        bufp->chgBit(oldp+1325,((IData)(((0x20000000U 
                                          == (0x30000000U 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)))));
        bufp->chgIData(oldp+1326,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
        bufp->chgBit(oldp+1327,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
        bufp->chgBit(oldp+1328,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgIData(oldp+1329,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
        bufp->chgBit(oldp+1330,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
        bufp->chgBit(oldp+1331,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+1332,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
        bufp->chgBit(oldp+1333,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
        bufp->chgBit(oldp+1334,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
        bufp->chgBit(oldp+1335,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
        bufp->chgBit(oldp+1336,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
        bufp->chgBit(oldp+1337,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
        bufp->chgBit(oldp+1338,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
        bufp->chgBit(oldp+1339,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+1340,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+1341,((0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+1342,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+1343,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+1344,((2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+1345,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
        bufp->chgBit(oldp+1346,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
        bufp->chgIData(oldp+1347,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgBit(oldp+1348,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
        bufp->chgIData(oldp+1349,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
        bufp->chgCData(oldp+1350,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp),2);
        bufp->chgBit(oldp+1351,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
        bufp->chgBit(oldp+1352,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
        bufp->chgIData(oldp+1353,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
        bufp->chgCData(oldp+1354,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U)),2);
        bufp->chgBit(oldp+1355,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
        bufp->chgIData(oldp+1356,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
        bufp->chgCData(oldp+1357,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen),8);
        bufp->chgCData(oldp+1358,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arburst),2);
        bufp->chgBit(oldp+1359,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
        bufp->chgIData(oldp+1360,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
        bufp->chgBit(oldp+1361,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
        bufp->chgIData(oldp+1362,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
        bufp->chgBit(oldp+1363,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
        bufp->chgBit(oldp+1364,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
        bufp->chgBit(oldp+1365,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
        bufp->chgBit(oldp+1366,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
        bufp->chgBit(oldp+1367,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+1368,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgBit(oldp+1369,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+1370,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+1371,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgBit(oldp+1372,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))))));
        bufp->chgCData(oldp+1373,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+1374,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+1375,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+1376,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+1377,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgIData(oldp+1378,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+1379,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgBit(oldp+1380,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+1381,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgBit(oldp+1382,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+1383,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+1384,((0xfffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
        bufp->chgBit(oldp+1385,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                    >> 2U))));
        bufp->chgBit(oldp+1386,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+1387,((0xfffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
        bufp->chgBit(oldp+1388,((0x7800U == (0x7fffU 
                                             & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0xdU)))));
        bufp->chgSData(oldp+1389,((0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1390,((0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 2U))),11);
        bufp->chgBit(oldp+1391,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_awvalid));
        bufp->chgBit(oldp+1392,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_wvalid));
        bufp->chgBit(oldp+1393,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_arvalid));
        bufp->chgBit(oldp+1394,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+1395,((0xaU == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
                                          >> 0x1cU))));
        bufp->chgBit(oldp+1396,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+1397,((0xaU == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr 
                                          >> 0x1cU))));
        bufp->chgCData(oldp+1398,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag),2);
        bufp->chgCData(oldp+1399,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag),2);
        bufp->chgBit(oldp+1400,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
        bufp->chgBit(oldp+1401,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
        bufp->chgCData(oldp+1402,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgCData(oldp+1403,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),3);
        bufp->chgBit(oldp+1404,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
        bufp->chgBit(oldp+1405,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
        bufp->chgBit(oldp+1406,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                 & (0U == ((6U & (4U 
                                                  ^ 
                                                  (0x1eU 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1bU)))) 
                                           | (1U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+1407,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                    >> 1U))));
        bufp->chgBit(oldp+1408,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+1409,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
        bufp->chgBit(oldp+1410,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+1411,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+1412,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+1413,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+1414,((0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+1415,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgBit(oldp+1416,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+1417,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+1418,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgCData(oldp+1419,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgBit(oldp+1420,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid));
        bufp->chgCData(oldp+1421,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
        bufp->chgBit(oldp+1422,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_awvalid));
        bufp->chgIData(oldp+1423,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgCData(oldp+1424,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats1_1),8);
        bufp->chgBit(oldp+1425,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgBit(oldp+1426,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+1427,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_arvalid));
        bufp->chgIData(oldp+1428,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_araddr),32);
        bufp->chgCData(oldp+1429,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats1),8);
        bufp->chgBit(oldp+1430,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid));
        bufp->chgCData(oldp+1431,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+1432,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size),3);
        bufp->chgCData(oldp+1433,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source),4);
        bufp->chgIData(oldp+1434,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address),32);
        bufp->chgCData(oldp+1435,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask),4);
        bufp->chgIData(oldp+1436,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_data),32);
        bufp->chgCData(oldp+1437,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size_hi),8);
        bufp->chgIData(oldp+1438,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr),32);
        bufp->chgBit(oldp+1439,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1));
        bufp->chgBit(oldp+1440,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1));
        bufp->chgCData(oldp+1441,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size_hi),8);
        bufp->chgBit(oldp+1442,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
        bufp->chgCData(oldp+1443,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_valid),2);
        bufp->chgCData(oldp+1444,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready),4);
        bufp->chgCData(oldp+1445,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_readys),2);
        bufp->chgBit(oldp+1446,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_0));
        bufp->chgBit(oldp+1447,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_1));
        bufp->chgBit(oldp+1448,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0));
        bufp->chgBit(oldp+1449,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1));
        bufp->chgBit(oldp+1450,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+1451,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_real_last));
        bufp->chgBit(oldp+1452,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+1453,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last));
        bufp->chgCData(oldp+1454,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+1455,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr),32);
        bufp->chgBit(oldp+1456,((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst))));
        bufp->chgIData(oldp+1457,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgSData(oldp+1458,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats),9);
        bufp->chgBit(oldp+1459,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+1460,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgIData(oldp+1461,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+1462,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgCData(oldp+1463,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgBit(oldp+1464,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+1465,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgBit(oldp+1466,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+1467,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data),4);
        bufp->chgCData(oldp+1468,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT____Vcellinp__ram_ext__W0_data),4);
        bufp->chgBit(oldp+1469,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
        bufp->chgBit(oldp+1470,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_last) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState))));
        bufp->chgCData(oldp+1471,((0x1fU & ((IData)(3U) 
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
        bufp->chgCData(oldp+1472,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_beats1),3);
        bufp->chgBit(oldp+1473,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
        bufp->chgBit(oldp+1474,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_i_last));
        bufp->chgBit(oldp+1475,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_last));
        bufp->chgBit(oldp+1476,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_ready));
        bufp->chgCData(oldp+1477,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode),3);
        bufp->chgCData(oldp+1478,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size),3);
        bufp->chgCData(oldp+1479,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source),4);
        bufp->chgCData(oldp+1480,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_mask),4);
        bufp->chgIData(oldp+1481,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data),32);
        bufp->chgBit(oldp+1482,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_o_ready));
        bufp->chgIData(oldp+1483,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide)
                                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data)),32);
        bufp->chgBit(oldp+1484,((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode))));
        bufp->chgQData(oldp+1485,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide),64);
        bufp->chgIData(oldp+1487,((0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgIData(oldp+1488,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
        bufp->chgBit(oldp+1489,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+1490,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
        bufp->chgBit(oldp+1491,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+1492,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+1493,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+1494,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+1495,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+1496,((0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1497,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+1498,(((0xffff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                       << 8U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgIData(oldp+1499,((0xfffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgIData(oldp+1500,((0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgCData(oldp+1501,((0xffU & ((IData)(7U) 
                                            + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
        bufp->chgCData(oldp+1502,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen)
                                             : 0U))),8);
        bufp->chgIData(oldp+1503,((0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgCData(oldp+1504,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pstrb),4);
        bufp->chgCData(oldp+1505,((7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
        bufp->chgCData(oldp+1506,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+1507,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
        bufp->chgBit(oldp+1508,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid));
        bufp->chgBit(oldp+1509,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid));
        bufp->chgSData(oldp+1510,((0x1fffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address)),13);
        bufp->chgCData(oldp+1511,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__a_id),2);
        bufp->chgBit(oldp+1512,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__a_id))));
        bufp->chgBit(oldp+1513,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__stall));
        bufp->chgCData(oldp+1514,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size),4);
        __Vtemp_69[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address;
        __Vtemp_69[1U] = 0U;
        __Vtemp_69[2U] = 0U;
        __Vtemp_69[3U] = 0U;
        bufp->chgWData(oldp+1515,(__Vtemp_69),128);
        bufp->chgCData(oldp+1519,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode),3);
        bufp->chgSData(oldp+1520,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__a_last_beats1),10);
        bufp->chgBit(oldp+1521,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__a_last));
        bufp->chgSData(oldp+1522,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__r_beats1),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+1523,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck));
        bufp->chgBit(oldp+1524,(vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n));
        bufp->chgBit(oldp+1525,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
        bufp->chgIData(oldp+1526,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
        bufp->chgBit(oldp+1527,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+1528,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
        bufp->chgBit(oldp+1529,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
        bufp->chgCData(oldp+1530,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid),4);
        bufp->chgBit(oldp+1531,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
        bufp->chgCData(oldp+1532,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid),4);
        bufp->chgBit(oldp+1533,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
        bufp->chgCData(oldp+1534,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
        bufp->chgBit(oldp+1535,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
        bufp->chgBit(oldp+1536,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast));
        bufp->chgSData(oldp+1537,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)))),16);
        bufp->chgSData(oldp+1538,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)))),16);
        bufp->chgBit(oldp+1539,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+1540,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+1541,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+1542,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+1543,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+1544,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+1545,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+1546,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+1547,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+1548,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+1549,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+1550,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+1551,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+1552,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+1553,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+1554,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+1555,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+1556,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+1557,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid));
        bufp->chgBit(oldp+1558,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid));
        bufp->chgBit(oldp+1559,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceA_io_a_valid));
        bufp->chgBit(oldp+1560,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_c_valid));
        bufp->chgBit(oldp+1561,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid));
        bufp->chgBit(oldp+1562,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T));
        bufp->chgBit(oldp+1563,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid));
        bufp->chgBit(oldp+1564,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_8));
        bufp->chgCData(oldp+1565,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
        bufp->chgCData(oldp+1566,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
        bufp->chgCData(oldp+1567,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
        bufp->chgBit(oldp+1568,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+1569,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+1570,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgCData(oldp+1571,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
        bufp->chgBit(oldp+1572,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
        bufp->chgBit(oldp+1573,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
        bufp->chgBit(oldp+1574,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
        bufp->chgBit(oldp+1575,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgCData(oldp+1576,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate),4);
        bufp->chgIData(oldp+1577,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr),32);
        bufp->chgIData(oldp+1578,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata),32);
        bufp->chgBit(oldp+1579,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite));
        bufp->chgBit(oldp+1580,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel));
        bufp->chgBit(oldp+1581,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable));
        bufp->chgCData(oldp+1582,((0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)),5);
        bufp->chgIData(oldp+1583,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
        bufp->chgBit(oldp+1584,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x14U == (0x1cU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
        bufp->chgBit(oldp+1585,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x10U == (0x1cU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
        bufp->chgCData(oldp+1586,((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
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
        bufp->chgBit(oldp+1587,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                 & (0x18U == (0x1cU 
                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
        bufp->chgCData(oldp+1588,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgCData(oldp+1589,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
        bufp->chgCData(oldp+1590,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
        bufp->chgBit(oldp+1591,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid));
        bufp->chgBit(oldp+1592,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid));
        bufp->chgBit(oldp+1593,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_a_valid));
        bufp->chgBit(oldp+1594,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_c_valid));
        bufp->chgBit(oldp+1595,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid));
        bufp->chgBit(oldp+1596,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T));
        bufp->chgBit(oldp+1597,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid));
        bufp->chgBit(oldp+1598,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_8));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[0xaU] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x20U])))) {
        bufp->chgBit(oldp+1599,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)))));
        bufp->chgBit(oldp+1600,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 1U))));
        bufp->chgBit(oldp+1601,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+1602,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+1603,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+1604,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+1605,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+1606,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+1607,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)))));
        bufp->chgBit(oldp+1608,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 1U))));
        bufp->chgBit(oldp+1609,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 2U))));
        bufp->chgBit(oldp+1610,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 3U))));
        bufp->chgBit(oldp+1611,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 2U))));
        bufp->chgBit(oldp+1612,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 4U))));
        bufp->chgBit(oldp+1613,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 5U))));
        bufp->chgBit(oldp+1614,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 6U))));
        bufp->chgBit(oldp+1615,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 7U))));
        bufp->chgBit(oldp+1616,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 8U))));
        bufp->chgBit(oldp+1617,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 9U))));
        bufp->chgBit(oldp+1618,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+1619,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+1620,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+1621,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+1622,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 3U))));
        bufp->chgBit(oldp+1623,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+1624,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+1625,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 4U))));
        bufp->chgBit(oldp+1626,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 5U))));
        bufp->chgBit(oldp+1627,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 6U))));
        bufp->chgBit(oldp+1628,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 7U))));
        bufp->chgBit(oldp+1629,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 8U))));
        bufp->chgBit(oldp+1630,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                    >> 9U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+1631,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1632,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1633,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1634,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1635,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1636,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+1637,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1638,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1639,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1640,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1641,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1642,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+1643,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1644,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1645,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+1646,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1647,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1648,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+1649,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1650,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1651,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x10U]))) {
        bufp->chgBit(oldp+1652,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1653,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1654,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x11U]))) {
        bufp->chgBit(oldp+1655,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1656,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1657,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x12U]))) {
        bufp->chgBit(oldp+1658,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1659,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1660,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x13U]))) {
        bufp->chgBit(oldp+1661,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1662,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1663,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x14U]))) {
        bufp->chgBit(oldp+1664,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1665,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1666,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x15U]))) {
        bufp->chgBit(oldp+1667,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1668,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1669,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x16U]))) {
        bufp->chgBit(oldp+1670,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1671,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1672,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x17U]))) {
        bufp->chgBit(oldp+1673,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgBit(oldp+1674,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1675,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1676,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1677,((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgCData(oldp+1678,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgCData(oldp+1679,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
        bufp->chgBit(oldp+1680,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w));
        bufp->chgCData(oldp+1681,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgSData(oldp+1682,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgCData(oldp+1683,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgIData(oldp+1684,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+1685,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
        bufp->chgCData(oldp+1688,((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))),3);
        bufp->chgCData(oldp+1689,((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
        bufp->chgCData(oldp+1690,((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1691,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1692,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1693,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1694,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1695,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgBit(oldp+1696,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+1697,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
        bufp->chgCData(oldp+1698,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1699,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1700,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1701,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgCData(oldp+1702,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray),4);
        bufp->chgBit(oldp+1703,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+1704,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+1705,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx));
        bufp->chgBit(oldp+1706,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid));
        bufp->chgBit(oldp+1707,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx));
        bufp->chgBit(oldp+1708,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid));
        bufp->chgBit(oldp+1709,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx));
        bufp->chgBit(oldp+1710,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid));
        bufp->chgBit(oldp+1711,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx));
        bufp->chgBit(oldp+1712,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid));
        bufp->chgBit(oldp+1713,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1714,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1715,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1716,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1717,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1718,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1719,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1720,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1721,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1722,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1723,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1724,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1725,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1726,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1727,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1728,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1729,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1730,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1731,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1732,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1733,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1734,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1735,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1736,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1737,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1738,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1739,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1740,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1741,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1742,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1743,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1744,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1745,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1746,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1747,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1748,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
        bufp->chgBit(oldp+1749,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray))));
        bufp->chgBit(oldp+1750,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 1U))));
        bufp->chgBit(oldp+1751,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 2U))));
        bufp->chgBit(oldp+1752,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                       >> 3U))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[0x17U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x2cU])))) {
        bufp->chgBit(oldp+1753,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                           >> 2U) : 
                                       (((0x2000U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                          ? 7U : (7U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        >> 2U)))));
        bufp->chgBit(oldp+1754,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                           >> 1U) : 
                                       (((0x2000U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                          ? 7U : (7U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        >> 1U)))));
        bufp->chgBit(oldp+1755,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)
                                        : ((0x2000U 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                            ? 7U : 
                                           (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))))));
        bufp->chgBit(oldp+1756,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                           >> 2U) : 
                                       (((0x2000U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                          ? (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                          : 7U) >> 2U)))));
        bufp->chgBit(oldp+1757,((1U & (((0U == (7U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                        || (7U == (7U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))
                                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                           >> 1U) : 
                                       (((0x2000U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a))
                                          ? (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))
                                          : 7U) >> 1U)))));
        bufp->chgBit(oldp+1758,((1U & (((0U == (7U 
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
        bufp->chgIData(oldp+1759,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
        bufp->chgSData(oldp+1760,((0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
        bufp->chgSData(oldp+1761,((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                   >> 0x10U)),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x19U]))) {
        bufp->chgBit(oldp+1762,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1763,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1764,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1765,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1766,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1767,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1768,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1769,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1770,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1771,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1772,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1773,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1774,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1775,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1776,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1777,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1778,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1779,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1aU]))) {
        bufp->chgBit(oldp+1780,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1781,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+1782,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+1783,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+1784,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+1785,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1786,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+1787,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+1788,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+1789,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+1790,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1791,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+1792,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+1793,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+1794,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+1795,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1796,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+1797,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+1799,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+1800,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1801,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+1802,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+1803,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+1804,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__ren));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1bU]))) {
        bufp->chgBit(oldp+1805,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1806,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1807,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1808,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1809,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1810,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1811,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1812,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1813,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1cU]))) {
        bufp->chgBit(oldp+1814,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1815,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1816,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1817,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1818,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1819,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1820,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1821,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1822,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1dU]))) {
        bufp->chgBit(oldp+1823,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1824,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1825,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1826,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1827,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1828,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1829,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1830,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1831,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1eU]))) {
        bufp->chgBit(oldp+1832,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1833,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1834,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1835,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1836,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1837,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1838,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1839,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1840,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1fU]))) {
        bufp->chgBit(oldp+1841,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1842,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1843,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1844,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1845,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+1846,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1847,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+1848,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+1849,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x20U]))) {
        bufp->chgBit(oldp+1850,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
        bufp->chgBit(oldp+1851,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
        bufp->chgBit(oldp+1852,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
        bufp->chgBit(oldp+1853,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+1854,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+1855,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
        bufp->chgBit(oldp+1856,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
        bufp->chgBit(oldp+1857,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+1858,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+1859,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+1860,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+1861,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+1862,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+1863,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1864,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready));
        bufp->chgBit(oldp+1865,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
        bufp->chgBit(oldp+1866,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready));
        bufp->chgBit(oldp+1867,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
        bufp->chgBit(oldp+1868,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
        bufp->chgBit(oldp+1869,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+1870,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
        bufp->chgCData(oldp+1871,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid),4);
        bufp->chgBit(oldp+1872,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
        bufp->chgCData(oldp+1873,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid),4);
        bufp->chgBit(oldp+1874,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast));
        bufp->chgBit(oldp+1875,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_bvalid));
        bufp->chgBit(oldp+1876,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_rready));
        bufp->chgBit(oldp+1877,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0));
        bufp->chgSData(oldp+1878,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)))),16);
        bufp->chgSData(oldp+1879,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)))),16);
        bufp->chgBit(oldp+1880,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+1881,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),3);
        bufp->chgCData(oldp+1882,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),6);
        bufp->chgCData(oldp+1883,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),3);
        bufp->chgBit(oldp+1884,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
        bufp->chgBit(oldp+1885,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
        bufp->chgBit(oldp+1886,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_2));
        bufp->chgBit(oldp+1887,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
        bufp->chgBit(oldp+1888,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
        bufp->chgBit(oldp+1889,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2));
        bufp->chgBit(oldp+1890,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
        bufp->chgCData(oldp+1891,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+1892,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+1893,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+1894,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0));
        bufp->chgBit(oldp+1895,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1));
        bufp->chgBit(oldp+1896,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2));
        bufp->chgBit(oldp+1897,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready));
        bufp->chgBit(oldp+1898,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready));
        bufp->chgBit(oldp+1899,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+1900,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+1901,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+1902,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+1903,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
        bufp->chgCData(oldp+1904,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))),4);
        bufp->chgBit(oldp+1905,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+1906,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_valid));
        bufp->chgBit(oldp+1907,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__in_0_a_ready));
        bufp->chgBit(oldp+1908,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeOut_a_valid));
        bufp->chgCData(oldp+1909,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+1910,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_param),3);
        bufp->chgCData(oldp+1911,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size),3);
        bufp->chgCData(oldp+1912,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_source),7);
        bufp->chgIData(oldp+1913,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address),32);
        bufp->chgCData(oldp+1914,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_mask),4);
        bufp->chgIData(oldp+1915,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_data),32);
        bufp->chgBit(oldp+1916,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_ready));
        bufp->chgBit(oldp+1917,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
        bufp->chgBit(oldp+1918,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__winner_1));
        bufp->chgBit(oldp+1919,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxState_1));
        bufp->chgBit(oldp+1920,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_awready));
        bufp->chgBit(oldp+1921,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+1922,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_bready));
        bufp->chgBit(oldp+1923,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+1924,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id));
        bufp->chgCData(oldp+1925,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp),2);
        bufp->chgBit(oldp+1926,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_ready));
        bufp->chgBit(oldp+1927,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid));
        bufp->chgBit(oldp+1928,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_rlast));
        bufp->chgBit(oldp+1929,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__anonIn_a_ready));
        bufp->chgBit(oldp+1930,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready));
        bufp->chgBit(oldp+1931,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__in_0_d_valid));
        bufp->chgCData(oldp+1932,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_25),3);
        bufp->chgCData(oldp+1933,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_19),3);
        bufp->chgCData(oldp+1934,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_16),4);
        bufp->chgBit(oldp+1935,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_10));
        bufp->chgIData(oldp+1936,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_data),32);
        bufp->chgBit(oldp+1937,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_3));
        bufp->chgBit(oldp+1938,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_ready));
        bufp->chgCData(oldp+1939,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp),2);
        bufp->chgCData(oldp+1940,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_beats1),3);
        bufp->chgBit(oldp+1941,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow));
        bufp->chgBit(oldp+1942,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid));
        bufp->chgBit(oldp+1943,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_16) 
                                       >> 3U))));
        bufp->chgBit(oldp+1944,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last));
        bufp->chgBit(oldp+1945,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1946,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid));
        bufp->chgBit(oldp+1947,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready));
        bufp->chgBit(oldp+1948,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+1949,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1950,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+1951,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_becho_real_last));
        bufp->chgBit(oldp+1952,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_arready));
        bufp->chgBit(oldp+1953,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+1954,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+1955,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+1956,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+1957,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+1958,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+1959,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1960,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0))));
        bufp->chgCData(oldp+1961,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id),5);
        bufp->chgCData(oldp+1962,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size),4);
        bufp->chgCData(oldp+1963,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source),7);
        bufp->chgBit(oldp+1964,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0))));
        bufp->chgBit(oldp+1965,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                       >> 4U))));
        bufp->chgBit(oldp+1966,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid));
        bufp->chgBit(oldp+1967,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_deq_ready));
        bufp->chgBit(oldp+1968,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__do_deq));
        bufp->chgBit(oldp+1969,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__do_enq));
        bufp->chgBit(oldp+1970,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid));
        bufp->chgBit(oldp+1971,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_deq_ready));
        bufp->chgBit(oldp+1972,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__do_deq));
        bufp->chgBit(oldp+1973,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+1974,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid));
        bufp->chgBit(oldp+1975,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready));
        bufp->chgBit(oldp+1976,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__do_deq));
        bufp->chgBit(oldp+1977,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+1978,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid));
        bufp->chgBit(oldp+1979,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready));
        bufp->chgBit(oldp+1980,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__do_deq));
        bufp->chgBit(oldp+1981,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+1982,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+1983,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_a_valid));
        bufp->chgBit(oldp+1984,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+1985,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready));
        bufp->chgBit(oldp+1986,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_valid));
        bufp->chgCData(oldp+1987,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_opcode),3);
        bufp->chgCData(oldp+1988,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_param),2);
        bufp->chgCData(oldp+1989,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_size),3);
        bufp->chgCData(oldp+1990,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_source),4);
        bufp->chgCData(oldp+1991,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_sink),5);
        bufp->chgBit(oldp+1992,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_denied));
        bufp->chgBit(oldp+1993,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_corrupt));
        bufp->chgBit(oldp+1994,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass));
        bufp->chgBit(oldp+1995,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready));
        bufp->chgBit(oldp+1996,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall));
        bufp->chgBit(oldp+1997,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid));
        bufp->chgBit(oldp+1998,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+1999,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq));
        bufp->chgIData(oldp+2000,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header),32);
        bufp->chgBit(oldp+2001,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_ready_0));
        bufp->chgBit(oldp+2002,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T));
        bufp->chgBit(oldp+2003,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T));
        bufp->chgBit(oldp+2004,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T));
        bufp->chgBit(oldp+2005,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T));
        bufp->chgBit(oldp+2006,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T));
        bufp->chgBit(oldp+2007,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T));
        bufp->chgBit(oldp+2008,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T));
        bufp->chgBit(oldp+2009,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T));
        bufp->chgBit(oldp+2010,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0));
        bufp->chgBit(oldp+2011,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready));
        bufp->chgBit(oldp+2012,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_ready_0));
        bufp->chgBit(oldp+2013,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T));
        bufp->chgBit(oldp+2014,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_1_a_valid));
        bufp->chgSData(oldp+2015,((0x1fffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address)),13);
        bufp->chgBit(oldp+2016,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__anonIn_a_ready));
        bufp->chgBit(oldp+2017,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2018,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeIn_a_ready));
        bufp->chgBit(oldp+2019,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_0_a_valid));
        bufp->chgBit(oldp+2020,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rvalid));
        bufp->chgIData(oldp+2021,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rdata),32);
        bufp->chgBit(oldp+2022,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rvalid));
        bufp->chgIData(oldp+2023,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
        bufp->chgBit(oldp+2024,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
        bufp->chgBit(oldp+2025,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
        bufp->chgCData(oldp+2026,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__next_state),3);
        bufp->chgBit(oldp+2027,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__done));
        bufp->chgIData(oldp+2028,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask),32);
        bufp->chgBit(oldp+2029,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
        bufp->chgBit(oldp+2030,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__in_0_a_ready));
        bufp->chgCData(oldp+2031,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_22),2);
        bufp->chgCData(oldp+2032,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_13),6);
        bufp->chgBit(oldp+2033,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready));
        bufp->chgCData(oldp+2034,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_valid),2);
        bufp->chgCData(oldp+2035,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_unready),4);
        bufp->chgCData(oldp+2036,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_readys),2);
        bufp->chgBit(oldp+2037,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__winner_0));
        bufp->chgBit(oldp+2038,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__winner_1));
        bufp->chgBit(oldp+2039,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__muxState_0));
        bufp->chgBit(oldp+2040,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__muxState_1));
        bufp->chgBit(oldp+2041,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_25))));
        bufp->chgBit(oldp+2042,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__da_ready));
        bufp->chgBit(oldp+2043,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a_q_io_deq_ready));
        bufp->chgBit(oldp+2044,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2045,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap__DOT__do_enq));
        bufp->chgSData(oldp+2046,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data),12);
        bufp->chgBit(oldp+2047,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2048,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+2049,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2050,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_10__DOT__do_enq));
        bufp->chgSData(oldp+2051,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data),12);
        bufp->chgBit(oldp+2052,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2053,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_11__DOT__do_enq));
        bufp->chgBit(oldp+2054,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2055,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_12__DOT__do_enq));
        bufp->chgBit(oldp+2056,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2057,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_13__DOT__do_enq));
        bufp->chgBit(oldp+2058,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2059,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+2060,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2061,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+2062,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2063,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_4__DOT__do_enq));
        bufp->chgBit(oldp+2064,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2065,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_5__DOT__do_enq));
        bufp->chgBit(oldp+2066,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2067,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_6__DOT__do_enq));
        bufp->chgBit(oldp+2068,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2069,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_7__DOT__do_enq));
        bufp->chgBit(oldp+2070,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2071,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_8__DOT__do_enq));
        bufp->chgBit(oldp+2072,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2073,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_9__DOT__do_enq));
        bufp->chgBit(oldp+2074,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2075,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2076,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2077,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2078,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2079,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2080,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2081,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2082,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2083,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2084,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2085,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2086,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2087,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2088,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2089,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2090,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2091,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2092,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_4));
        bufp->chgBit(oldp+2093,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_2));
        bufp->chgBit(oldp+2094,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_0));
        bufp->chgCData(oldp+2095,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__r_beats1),3);
        bufp->chgBit(oldp+2096,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__a_last));
        bufp->chgBit(oldp+2097,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__stall));
        bufp->chgBit(oldp+2098,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_valid));
        bufp->chgBit(oldp+2099,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc));
        bufp->chgBit(oldp+2100,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_1));
        bufp->chgBit(oldp+2101,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_2));
        bufp->chgBit(oldp+2102,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_3));
        bufp->chgBit(oldp+2103,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_4));
        bufp->chgBit(oldp+2104,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_5));
        bufp->chgBit(oldp+2105,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_6));
        bufp->chgBit(oldp+2106,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2107,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2108,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2109,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xaU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2110,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xbU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2111,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xcU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2112,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2113,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2114,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xfU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2115,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x10U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2116,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x11U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2117,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x12U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2118,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x13U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2119,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x14U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2120,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x15U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2121,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x16U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2122,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__nodeOut_wdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2123,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgCData(oldp+2124,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
        bufp->chgCData(oldp+2125,((0xffU & (~ (0xffU 
                                               & (((IData)(0x3ffU) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size)) 
                                                  >> 2U))))),8);
        bufp->chgCData(oldp+2126,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_size),3);
        bufp->chgCData(oldp+2127,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size),4);
        bufp->chgBit(oldp+2128,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                          >> 2U)))));
        bufp->chgBit(oldp+2129,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_deq_ready));
        bufp->chgBit(oldp+2130,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2131,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen));
        bufp->chgBit(oldp+2132,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2133,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2134,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT___bar_auto_out_0_a_valid));
        bufp->chgBit(oldp+2135,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT___bar_auto_out_0_d_ready));
        bufp->chgBit(oldp+2136,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_d_valid));
        bufp->chgCData(oldp+2137,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24),3);
        bufp->chgCData(oldp+2138,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_19),4);
        bufp->chgCData(oldp+2139,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_16),4);
        bufp->chgBit(oldp+2140,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxState_1));
        bufp->chgBit(oldp+2141,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_3));
        bufp->chgBit(oldp+2142,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass));
        bufp->chgBit(oldp+2143,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall));
        bufp->chgBit(oldp+2144,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_opcode))));
        bufp->chgBit(oldp+2145,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_ready));
        bufp->chgBit(oldp+2146,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__winner_1));
        bufp->chgBit(oldp+2147,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24))));
        bufp->chgCData(oldp+2148,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2149,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2150,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2151,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x22U]))) {
        bufp->chgBit(oldp+2152,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2153,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2154,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2155,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2156,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2157,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2158,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2159,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2160,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2161,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2162,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2163,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2164,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2165,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2166,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2167,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2168,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2169,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x23U]))) {
        bufp->chgBit(oldp+2170,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2171,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2172,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2173,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2174,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2175,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2176,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2177,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2178,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2179,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2180,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2181,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2182,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2183,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2184,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2185,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2186,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2187,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2188,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2189,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__ren));
        bufp->chgBit(oldp+2190,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2191,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_flow));
        bufp->chgBit(oldp+2192,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_enq));
        bufp->chgBit(oldp+2193,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq));
        bufp->chgBit(oldp+2194,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__ren));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x24U]))) {
        bufp->chgBit(oldp+2195,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2196,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2197,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2198,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2199,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2200,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2201,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2202,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2203,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x25U]))) {
        bufp->chgBit(oldp+2204,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2205,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2206,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2207,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2208,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2209,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2210,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2211,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2212,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x26U]))) {
        bufp->chgBit(oldp+2213,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2214,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2215,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2216,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2217,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2218,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2219,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2220,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2221,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x27U]))) {
        bufp->chgBit(oldp+2222,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2223,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2224,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2225,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2226,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2227,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2228,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2229,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2230,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x28U]))) {
        bufp->chgBit(oldp+2231,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2232,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2233,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2234,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2235,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2236,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2237,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2238,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2239,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x29U]))) {
        bufp->chgBit(oldp+2240,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_awvalid));
        bufp->chgCData(oldp+2241,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))),4);
        bufp->chgIData(oldp+2242,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+2243,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_len),8);
        bufp->chgCData(oldp+2244,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_size),3);
        bufp->chgBit(oldp+2245,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+2246,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wdata),32);
        bufp->chgCData(oldp+2247,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wstrb),4);
        bufp->chgBit(oldp+2248,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wlast));
        bufp->chgBit(oldp+2249,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_arvalid));
        bufp->chgBit(oldp+2250,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2251,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_valid));
        bufp->chgBit(oldp+2252,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__in_0_a_ready));
        bufp->chgBit(oldp+2253,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeOut_a_valid));
        bufp->chgCData(oldp+2254,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+2255,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_param),3);
        bufp->chgCData(oldp+2256,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size),4);
        bufp->chgCData(oldp+2257,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_source),7);
        bufp->chgIData(oldp+2258,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address),32);
        bufp->chgCData(oldp+2259,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_mask),4);
        bufp->chgIData(oldp+2260,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_data),32);
        bufp->chgBit(oldp+2261,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_ready));
        bufp->chgBit(oldp+2262,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
        bufp->chgBit(oldp+2263,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__winner_1));
        bufp->chgBit(oldp+2264,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1));
        bufp->chgBit(oldp+2265,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_awready));
        bufp->chgBit(oldp+2266,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_wready));
        bufp->chgBit(oldp+2267,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last)))));
        bufp->chgBit(oldp+2268,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+2269,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id));
        bufp->chgCData(oldp+2270,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bresp),2);
        bufp->chgBit(oldp+2271,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_ready));
        bufp->chgBit(oldp+2272,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid));
        bufp->chgBit(oldp+2273,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__anonIn_a_ready));
        bufp->chgBit(oldp+2274,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready));
        bufp->chgBit(oldp+2275,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__in_0_d_valid));
        bufp->chgCData(oldp+2276,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_25),3);
        bufp->chgCData(oldp+2277,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_19),3);
        bufp->chgCData(oldp+2278,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_16),4);
        bufp->chgBit(oldp+2279,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_10));
        bufp->chgIData(oldp+2280,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_data),32);
        bufp->chgBit(oldp+2281,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_3));
        bufp->chgBit(oldp+2282,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_ready));
        bufp->chgCData(oldp+2283,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp),2);
        bufp->chgCData(oldp+2284,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_beats1),3);
        bufp->chgBit(oldp+2285,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
        bufp->chgBit(oldp+2286,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2287,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_16) 
                                       >> 3U))));
        bufp->chgBit(oldp+2288,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last));
        bufp->chgBit(oldp+2289,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2290,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2291,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready));
        bufp->chgBit(oldp+2292,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2293,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2294,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_awvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgRegularize_hc17a5693_0_0))));
        bufp->chgBit(oldp+2295,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2296,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_arvalid) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgRegularize_hc17a5693_2_0))));
        bufp->chgBit(oldp+2297,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2298,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_awvalid));
        bufp->chgCData(oldp+2299,((0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))),4);
        bufp->chgCData(oldp+2300,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size),4);
        bufp->chgCData(oldp+2301,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source),7);
        bufp->chgBit(oldp+2302,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id) 
                                       >> 4U))));
        bufp->chgBit(oldp+2303,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_arvalid));
        bufp->chgBit(oldp+2304,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_bvalid))));
        bufp->chgBit(oldp+2305,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_awready));
        bufp->chgBit(oldp+2306,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last));
        bufp->chgBit(oldp+2307,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_arready));
        bufp->chgBit(oldp+2308,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+2309,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awvalid));
        bufp->chgCData(oldp+2310,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id),5);
        bufp->chgCData(oldp+2311,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size),4);
        bufp->chgCData(oldp+2312,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source),7);
        bufp->chgBit(oldp+2313,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_arvalid));
        bufp->chgBit(oldp+2314,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                       >> 4U))));
        bufp->chgCData(oldp+2315,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id),5);
        bufp->chgBit(oldp+2316,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2317,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__do_enq));
        bufp->chgSData(oldp+2318,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data),12);
        bufp->chgBit(oldp+2319,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2320,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+2321,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2322,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__do_enq));
        bufp->chgBit(oldp+2323,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2324,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__do_enq));
        bufp->chgBit(oldp+2325,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2326,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__do_enq));
        bufp->chgBit(oldp+2327,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2328,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__do_enq));
        bufp->chgBit(oldp+2329,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2330,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+2331,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2332,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+2333,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2334,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__do_enq));
        bufp->chgBit(oldp+2335,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2336,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__do_enq));
        bufp->chgBit(oldp+2337,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2338,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__do_enq));
        bufp->chgBit(oldp+2339,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2340,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__do_enq));
        bufp->chgBit(oldp+2341,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2342,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__do_enq));
        bufp->chgBit(oldp+2343,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2344,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__do_enq));
        bufp->chgBit(oldp+2345,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2346,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2347,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2348,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2349,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2350,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2351,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2352,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2353,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2354,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2355,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2356,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2357,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2358,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2359,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2360,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2361,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2362,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2363,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid));
        bufp->chgBit(oldp+2364,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__do_enq));
        bufp->chgBit(oldp+2365,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid));
        bufp->chgBit(oldp+2366,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+2367,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid));
        bufp->chgBit(oldp+2368,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready));
        bufp->chgBit(oldp+2369,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_deq));
        bufp->chgBit(oldp+2370,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+2371,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid));
        bufp->chgBit(oldp+2372,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready));
        bufp->chgBit(oldp+2373,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_deq));
        bufp->chgBit(oldp+2374,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+2375,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0));
        bufp->chgBit(oldp+2376,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_a_valid));
        bufp->chgBit(oldp+2377,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2378,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready));
        bufp->chgBit(oldp+2379,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_valid));
        bufp->chgCData(oldp+2380,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_opcode),3);
        bufp->chgCData(oldp+2381,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_param),2);
        bufp->chgCData(oldp+2382,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_size),3);
        bufp->chgCData(oldp+2383,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_source),4);
        bufp->chgCData(oldp+2384,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_sink),5);
        bufp->chgBit(oldp+2385,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_denied));
        bufp->chgBit(oldp+2386,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_corrupt));
        bufp->chgBit(oldp+2387,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass));
        bufp->chgBit(oldp+2388,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready));
        bufp->chgBit(oldp+2389,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall));
        bufp->chgBit(oldp+2390,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid));
        bufp->chgBit(oldp+2391,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2392,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq));
        bufp->chgIData(oldp+2393,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header),32);
        bufp->chgBit(oldp+2394,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_q_ready_0));
        bufp->chgBit(oldp+2395,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T));
        bufp->chgBit(oldp+2396,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T));
        bufp->chgBit(oldp+2397,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T));
        bufp->chgBit(oldp+2398,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T));
        bufp->chgBit(oldp+2399,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T));
        bufp->chgBit(oldp+2400,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T));
        bufp->chgBit(oldp+2401,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T));
        bufp->chgBit(oldp+2402,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T));
        bufp->chgBit(oldp+2403,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0));
        bufp->chgBit(oldp+2404,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready));
        bufp->chgBit(oldp+2405,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready_0));
        bufp->chgBit(oldp+2406,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T));
        bufp->chgBit(oldp+2407,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_valid));
        bufp->chgCData(oldp+2408,((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size))),3);
        bufp->chgSData(oldp+2409,((0x1fffU & vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address)),13);
        bufp->chgBit(oldp+2410,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__anonIn_a_ready));
        bufp->chgBit(oldp+2411,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2412,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2413,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_valid));
        bufp->chgIData(oldp+2414,((0x7fffffffU & vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address)),31);
        bufp->chgBit(oldp+2415,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4));
        bufp->chgBit(oldp+2416,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2));
        bufp->chgBit(oldp+2417,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0));
        bufp->chgCData(oldp+2418,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_beats1),6);
        bufp->chgBit(oldp+2419,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_last));
        bufp->chgBit(oldp+2420,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall));
        bufp->chgBit(oldp+2421,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_valid));
        bufp->chgBit(oldp+2422,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc));
        bufp->chgBit(oldp+2423,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1));
        bufp->chgBit(oldp+2424,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2));
        bufp->chgBit(oldp+2425,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3));
        bufp->chgBit(oldp+2426,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4));
        bufp->chgBit(oldp+2427,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5));
        bufp->chgBit(oldp+2428,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6));
        bufp->chgBit(oldp+2429,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2430,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2431,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2432,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xaU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2433,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xbU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2434,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xcU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2435,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xdU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2436,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xeU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2437,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xfU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2438,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x10U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2439,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x11U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2440,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x12U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2441,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x13U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2442,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x14U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2443,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x15U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2444,(((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x16U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
        bufp->chgBit(oldp+2445,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2446,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgCData(oldp+2447,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
        bufp->chgCData(oldp+2448,((0xffU & (~ (0xffU 
                                               & (((IData)(0x3ffU) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size)) 
                                                  >> 2U))))),8);
        bufp->chgCData(oldp+2449,(((0U != (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size) 
                                                 >> 1U)))
                                    ? 2U : (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size)))),3);
        bufp->chgBit(oldp+2450,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgRegularize_h9d3d4082_0_0)))));
        bufp->chgBit(oldp+2451,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready));
        bufp->chgBit(oldp+2452,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2453,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_wen));
        bufp->chgBit(oldp+2454,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2455,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeIn_a_ready));
        bufp->chgBit(oldp+2456,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_valid));
        bufp->chgBit(oldp+2457,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__requestAIO_0_1));
        bufp->chgBit(oldp+2458,((0U == (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address 
                                        >> 0x1eU))));
        bufp->chgBit(oldp+2459,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgIData(oldp+2460,((~ (((~ (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                                    | (~ vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1)))))),32);
        bufp->chgCData(oldp+2461,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
        bufp->chgBit(oldp+2462,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1))))));
        bufp->chgBit(oldp+2463,(((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____VdfgRegularize_h55402cce_3_0))));
        bufp->chgBit(oldp+2464,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+2465,((~ (((~ (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                                    | (~ vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr)))))),32);
        bufp->chgCData(oldp+2466,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
        bufp->chgBit(oldp+2467,((1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len))))));
        bufp->chgBit(oldp+2468,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2469,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2470,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wcounter_T));
        bufp->chgCData(oldp+2471,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+2472,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr),32);
        bufp->chgCData(oldp+2473,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1),8);
        bufp->chgIData(oldp+2474,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+2475,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgBit(oldp+2476,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgIData(oldp+2477,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+2478,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgBit(oldp+2479,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2480,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+2481,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+2482,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgCData(oldp+2483,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
        bufp->chgBit(oldp+2484,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+2485,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+2486,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2487,(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2488,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__in_0_a_ready));
        bufp->chgCData(oldp+2489,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_22),2);
        bufp->chgCData(oldp+2490,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_13),6);
        bufp->chgBit(oldp+2491,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready));
        bufp->chgCData(oldp+2492,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_valid),2);
        bufp->chgCData(oldp+2493,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_unready),4);
        bufp->chgCData(oldp+2494,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_readys),2);
        bufp->chgBit(oldp+2495,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__winner_0));
        bufp->chgBit(oldp+2496,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__winner_1));
        bufp->chgBit(oldp+2497,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__muxState_0));
        bufp->chgBit(oldp+2498,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__muxState_1));
        bufp->chgBit(oldp+2499,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_25))));
        bufp->chgBit(oldp+2500,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__da_ready));
        bufp->chgBit(oldp+2501,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_q_io_deq_ready));
        bufp->chgBit(oldp+2502,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2503,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap__DOT__do_enq));
        bufp->chgSData(oldp+2504,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data),12);
        bufp->chgBit(oldp+2505,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2506,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_1__DOT__do_enq));
        bufp->chgBit(oldp+2507,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2508,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_10__DOT__do_enq));
        bufp->chgSData(oldp+2509,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data),12);
        bufp->chgBit(oldp+2510,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2511,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_11__DOT__do_enq));
        bufp->chgBit(oldp+2512,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2513,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_12__DOT__do_enq));
        bufp->chgBit(oldp+2514,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2515,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_13__DOT__do_enq));
        bufp->chgBit(oldp+2516,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2517,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_2__DOT__do_enq));
        bufp->chgBit(oldp+2518,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 3U))));
        bufp->chgBit(oldp+2519,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_3__DOT__do_enq));
        bufp->chgBit(oldp+2520,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 4U))));
        bufp->chgBit(oldp+2521,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_4__DOT__do_enq));
        bufp->chgBit(oldp+2522,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 5U))));
        bufp->chgBit(oldp+2523,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_5__DOT__do_enq));
        bufp->chgBit(oldp+2524,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 6U))));
        bufp->chgBit(oldp+2525,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_6__DOT__do_enq));
        bufp->chgBit(oldp+2526,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & ((IData)(1U) << 
                                    (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))))));
        bufp->chgBit(oldp+2527,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_7__DOT__do_enq));
        bufp->chgBit(oldp+2528,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 1U))));
        bufp->chgBit(oldp+2529,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_8__DOT__do_enq));
        bufp->chgBit(oldp+2530,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 2U))));
        bufp->chgBit(oldp+2531,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_9__DOT__do_enq));
        bufp->chgBit(oldp+2532,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2533,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2534,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 8U))));
        bufp->chgBit(oldp+2535,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2536,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2537,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2538,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2539,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2540,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2541,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2542,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 9U))));
        bufp->chgBit(oldp+2543,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2544,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+2545,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xcU))));
        bufp->chgBit(oldp+2546,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xdU))));
        bufp->chgBit(oldp+2547,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xeU))));
        bufp->chgBit(oldp+2548,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+2549,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                 & (((IData)(1U) << 
                                     (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                    >> 7U))));
        bufp->chgBit(oldp+2550,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_4));
        bufp->chgBit(oldp+2551,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_2));
        bufp->chgBit(oldp+2552,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_0));
        bufp->chgCData(oldp+2553,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__r_beats1),3);
        bufp->chgBit(oldp+2554,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__a_last));
        bufp->chgBit(oldp+2555,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__stall));
        bufp->chgBit(oldp+2556,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_valid));
        bufp->chgBit(oldp+2557,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc));
        bufp->chgBit(oldp+2558,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_1));
        bufp->chgBit(oldp+2559,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_2));
        bufp->chgBit(oldp+2560,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_3));
        bufp->chgBit(oldp+2561,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_4));
        bufp->chgBit(oldp+2562,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_5));
        bufp->chgBit(oldp+2563,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_6));
        bufp->chgBit(oldp+2564,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2565,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2566,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2567,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xaU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2568,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xbU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2569,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xcU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2570,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2571,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2572,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0xfU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2573,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x10U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2574,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x11U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2575,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x12U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2576,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x13U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2577,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x14U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2578,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x15U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2579,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                  >> 0x16U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
        bufp->chgBit(oldp+2580,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__nodeOut_wdeq_q__io_enq_valid));
        bufp->chgBit(oldp+2581,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgCData(oldp+2582,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
        bufp->chgCData(oldp+2583,((0xffU & (~ (0xffU 
                                               & (((IData)(0x3ffU) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size))) 
                                                  >> 2U))))),8);
        bufp->chgCData(oldp+2584,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_size),3);
        bufp->chgCData(oldp+2585,((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size))),4);
        bufp->chgBit(oldp+2586,((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                          >> 2U)))));
        bufp->chgBit(oldp+2587,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_deq_ready));
        bufp->chgBit(oldp+2588,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2589,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen));
        bufp->chgBit(oldp+2590,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2591,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_a_ready));
        bufp->chgBit(oldp+2592,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT___bar_auto_out_0_a_valid));
        bufp->chgBit(oldp+2593,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT___bar_auto_out_0_d_ready));
        bufp->chgBit(oldp+2594,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_d_valid));
        bufp->chgCData(oldp+2595,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24),3);
        bufp->chgCData(oldp+2596,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_19),4);
        bufp->chgCData(oldp+2597,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_16),4);
        bufp->chgBit(oldp+2598,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxState_1));
        bufp->chgBit(oldp+2599,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_3));
        bufp->chgBit(oldp+2600,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass));
        bufp->chgBit(oldp+2601,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall));
        bufp->chgBit(oldp+2602,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_opcode))));
        bufp->chgBit(oldp+2603,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_ready));
        bufp->chgBit(oldp+2604,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__winner_1));
        bufp->chgBit(oldp+2605,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24))));
        bufp->chgCData(oldp+2606,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2607,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2608,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2609,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2bU]))) {
        bufp->chgCData(oldp+2610,(((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT____VdfgRegularize_h95f21b40_0_2)
                                    ? 0xfU : 0U)),4);
        bufp->chgCData(oldp+2611,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd),8);
        bufp->chgIData(oldp+2612,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr),24);
        bufp->chgCData(oldp+2613,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter),8);
        bufp->chgCData(oldp+2614,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2cU]))) {
        bufp->chgSData(oldp+2615,(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a),14);
        bufp->chgBit(oldp+2616,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
        bufp->chgBit(oldp+2617,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
        bufp->chgBit(oldp+2618,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
        bufp->chgBit(oldp+2619,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready));
        bufp->chgBit(oldp+2620,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready));
        bufp->chgBit(oldp+2621,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
        bufp->chgBit(oldp+2622,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
        bufp->chgBit(oldp+2623,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+2624,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+2625,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
        bufp->chgBit(oldp+2626,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__arready));
        bufp->chgBit(oldp+2627,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__awready));
        bufp->chgBit(oldp+2628,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__wready));
        bufp->chgBit(oldp+2629,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
        bufp->chgIData(oldp+2630,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w),32);
        bufp->chgCData(oldp+2631,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
        bufp->chgBit(oldp+2632,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+2633,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
        bufp->chgCData(oldp+2634,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+2635,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+2636,((0x1feU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                             >> 1U))),13);
        bufp->chgSData(oldp+2637,((0x1fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                              >> 0xcU))),13);
        bufp->chgCData(oldp+2638,((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                         >> 0xaU))),2);
        bufp->chgCData(oldp+2639,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_double),3);
        bufp->chgCData(oldp+2640,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
        bufp->chgCData(oldp+2641,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command),3);
        bufp->chgCData(oldp+2642,(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command),3);
        bufp->chgCData(oldp+2643,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2644,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2645,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2646,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2647,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2648,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2649,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2650,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2651,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2652,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid));
        bufp->chgCData(oldp+2653,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx),4);
        bufp->chgBit(oldp+2654,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2dU]))) {
        bufp->chgBit(oldp+2655,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2656,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2657,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2658,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2659,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2660,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2661,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2662,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2663,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2664,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2665,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2666,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2eU]))) {
        bufp->chgBit(oldp+2667,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2668,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2669,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2670,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2671,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2672,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2fU]))) {
        bufp->chgBit(oldp+2673,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2674,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2675,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2676,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2677,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2678,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x30U]))) {
        bufp->chgBit(oldp+2679,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2680,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2681,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2682,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2683,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2684,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x31U]))) {
        bufp->chgBit(oldp+2685,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2686,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2687,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2688,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2689,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2690,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x32U]))) {
        bufp->chgBit(oldp+2691,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2692,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2693,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2694,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2695,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2696,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x33U]))) {
        bufp->chgBit(oldp+2697,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2698,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2699,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2700,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2701,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2702,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2703,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2704,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2705,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2706,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2707,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2708,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x34U]))) {
        bufp->chgBit(oldp+2709,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2710,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2711,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2712,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2713,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2714,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x35U]))) {
        bufp->chgBit(oldp+2715,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2716,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2717,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2718,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2719,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2720,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x36U]))) {
        bufp->chgBit(oldp+2721,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2722,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2723,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2724,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2725,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2726,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x37U]))) {
        bufp->chgBit(oldp+2727,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2728,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2729,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2730,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2731,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2732,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x38U]))) {
        bufp->chgBit(oldp+2733,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2734,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+2735,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2736,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+2737,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+2738,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    bufp->chgBit(oldp+2739,(vlSelfRef.clock));
    bufp->chgBit(oldp+2740,(vlSelfRef.reset));
    bufp->chgSData(oldp+2741,(vlSelfRef.externalPins_gpio_out),16);
    bufp->chgSData(oldp+2742,(vlSelfRef.externalPins_gpio_in),16);
    bufp->chgCData(oldp+2743,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+2744,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+2745,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+2746,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+2747,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+2748,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+2749,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+2750,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+2751,(vlSelfRef.externalPins_ps2_clk));
    bufp->chgBit(oldp+2752,(vlSelfRef.externalPins_ps2_data));
    bufp->chgCData(oldp+2753,(vlSelfRef.externalPins_vga_r),8);
    bufp->chgCData(oldp+2754,(vlSelfRef.externalPins_vga_g),8);
    bufp->chgCData(oldp+2755,(vlSelfRef.externalPins_vga_b),8);
    bufp->chgBit(oldp+2756,(vlSelfRef.externalPins_vga_hsync));
    bufp->chgBit(oldp+2757,(vlSelfRef.externalPins_vga_vsync));
    bufp->chgBit(oldp+2758,(vlSelfRef.externalPins_vga_valid));
    bufp->chgBit(oldp+2759,(vlSelfRef.externalPins_uart_rx));
    bufp->chgBit(oldp+2760,(vlSelfRef.externalPins_uart_tx));
    bufp->chgBit(oldp+2761,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_0));
    bufp->chgBit(oldp+2762,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_0));
    bufp->chgBit(oldp+2763,(((IData)(vlSelfRef.ysyxSoCFull__DOT___bitrev_miso) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                     & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                     ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                     : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                   >> 0x1fU)))));
    bufp->chgCData(oldp+2764,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->chgBit(oldp+2765,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgBit(oldp+2766,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->chgIData(oldp+2767,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->chgCData(oldp+2768,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
                                 : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->chgBit(oldp+2769,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0))));
    bufp->chgCData(oldp+2770,((3U & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
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
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U))))
                                       : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))
                                                 ? 
                                                ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                     : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                 : 0U)))),2);
    bufp->chgIData(oldp+2771,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                 ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                      ? ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
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
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]
                                            : 0U) | 
                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                ? (IData)(
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                           >> 3U))
                                                : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_data)
                                            : 0U)))),32);
    bufp->chgCData(oldp+2772,((3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                       ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U)) : 0U) 
                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                         ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                             ? (IData)(
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                        >> 1U))
                                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                         : 0U)))),2);
    bufp->chgBit(oldp+2773,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)
                               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                  [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value])
                               : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                   : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                  [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value])) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_rlast))));
    bufp->chgBit(oldp+2774,((1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                                   | (((0xaU == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
                                                 >> 0x1cU)) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)) 
                                      | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                         & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
                                            >> 0x1eU)))))));
    bufp->chgBit(oldp+2775,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->chgBit(oldp+2776,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)
                                    ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                       [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value])
                                    : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                       [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value])))));
    bufp->chgBit(oldp+2777,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    bufp->chgBit(oldp+2778,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid)))))));
    bufp->chgBit(oldp+2779,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->chgCData(oldp+2780,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                ? ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                    ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (3U 
                                                & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                        ? (IData)(
                                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                                   >> 1U))
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                       : 0U)))
                                             : 0U))
                                : 0U)),2);
    bufp->chgCData(oldp+2781,(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                ? ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (3U 
                                                & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
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
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                       : 0U)))
                                             : 0U))
                                : 0U)),2);
    bufp->chgCData(oldp+2782,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                ? ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                    ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (3U 
                                                & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                        ? (IData)(
                                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                                   >> 1U))
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                       : 0U)))
                                             : 0U))
                                : 0U)),2);
    bufp->chgCData(oldp+2783,(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                ? ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (3U 
                                                & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
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
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                       : 0U)))
                                             : 0U))
                                : 0U)),2);
    bufp->chgCData(oldp+2784,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                         ? (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                       ? (IData)(
                                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                                  >> 1U))
                                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                      : 0U)))
                                         : 0U))),2);
    bufp->chgCData(oldp+2785,(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? (3U & ((
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
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
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                      : 0U)))
                                         : 0U))),2);
    bufp->chgBit(oldp+2786,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type)) 
                             & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__state)) 
                                & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__next_state))))));
    bufp->chgBit(oldp+2787,(((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__state)) 
                             & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__next_state)))));
    bufp->chgCData(oldp+2788,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_IFU__DOT__next_state),3);
    bufp->chgCData(oldp+2789,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__next_state),3);
    bufp->chgBit(oldp+2790,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+2791,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x16U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->chgCData(oldp+2792,((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready))
                                ? (0x20U | ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen)) 
                                            << 4U))
                                : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready))
                                    ? 0x10U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                                << 5U) 
                                               | (((0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+2793,(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->chgBit(oldp+2794,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->chgBit(oldp+2795,(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->chgBit(oldp+2796,(vlSelfRef.ysyxSoCFull__DOT___bitrev_miso));
    bufp->chgBit(oldp+2797,((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                   | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->chgCData(oldp+2798,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->chgIData(oldp+2799,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->chgIData(oldp+2800,(((0xfffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->chgIData(oldp+2801,(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->chgBit(oldp+2802,(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    bufp->chgBit(oldp+2803,(((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid)))))));
    bufp->chgCData(oldp+2804,((vlSelfRef.ysyxSoCFull__DOT__psram__DOT____VdfgRegularize_h95f21b40_0_1 
                               >> 0x1cU)),4);
    bufp->chgBit(oldp+2805,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->chgIData(oldp+2806,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->chgIData(oldp+2807,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->chgIData(oldp+2808,(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->chgIData(oldp+2809,((((vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | (0xff0000U 
                                              & (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data 
                                                 << 8U))) 
                               | ((0xff00U & (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data 
                                              >> 8U)) 
                                  | (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data 
                                     >> 0x18U)))),32);
    bufp->chgBit(oldp+2810,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)))));
    bufp->chgBit(oldp+2811,((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)))));
    bufp->chgCData(oldp+2812,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                : 0U)),4);
    bufp->chgCData(oldp+2813,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                : 0U)),4);
    bufp->chgCData(oldp+2814,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgRegularize_h865e5b43_1_0)
                                : 0U)),4);
    bufp->chgCData(oldp+2815,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
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
    while ((__Vilp1 <= 0x3aU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
