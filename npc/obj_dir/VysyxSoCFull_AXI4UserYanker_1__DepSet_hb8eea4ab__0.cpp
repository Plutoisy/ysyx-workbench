// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AXI4UserYanker_1.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_AXI4UserYanker_1___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__0(VysyxSoCFull_AXI4UserYanker_1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_AXI4UserYanker_1___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__Queue17_BundleMap__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 = 0;
    // Body
    __VdlySet__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__Queue17_BundleMap__DOT__enq_ptr_value = vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap__DOT__deq_ptr_value = vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value;
    if (vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_1__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_1__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_2__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_2__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_3__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_3__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_4__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_4__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_5__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_5__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_6__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_6__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_8__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_8__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_9__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_9__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_10__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_10__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_11__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_11__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_12__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_12__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_13__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_13__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_7__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_7__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdly__Queue17_BundleMap__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__full = 0U;
        vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__full = 0U;
        __Vdly__Queue17_BundleMap__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full = 0U;
    } else {
        if (vlSelfRef.__PVT__Queue17_BundleMap__DOT__do_enq) {
            __Vdly__Queue17_BundleMap__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value))));
            vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__unnamedblk1__DOT__do_deq = 0U;
        if (vlSelfRef.__PVT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
            vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap__DOT__unnamedblk1__DOT__do_deq = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__unnamedblk1__DOT__do_deq = 0U;
    }
    if (vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    if (__VdlySet__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__full = 
        ((IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match) 
         & (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_AXI4UserYanker_1___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__0(VysyxSoCFull_AXI4UserYanker_1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_AXI4UserYanker_1___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
            << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                       << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                       >> 4U))));
    vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
            << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                       << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                       >> 4U))));
}

VL_INLINE_OPT void VysyxSoCFull_AXI4UserYanker_1___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__0(VysyxSoCFull_AXI4UserYanker_1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_AXI4UserYanker_1___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_6;
    __PVT__unnamedblk1__DOT___GEN_6 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_7;
    __PVT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap__DOT__full;
    __Vdly__Queue1_BundleMap__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_1__DOT__full;
    __Vdly__Queue1_BundleMap_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_2__DOT__full;
    __Vdly__Queue1_BundleMap_2__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_3__DOT__full;
    __Vdly__Queue1_BundleMap_3__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_4__DOT__full;
    __Vdly__Queue1_BundleMap_4__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_5__DOT__full;
    __Vdly__Queue1_BundleMap_5__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_6__DOT__full;
    __Vdly__Queue1_BundleMap_6__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_7__DOT__full;
    __Vdly__Queue1_BundleMap_7__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_8__DOT__full;
    __Vdly__Queue1_BundleMap_8__DOT__full = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value = 0;
    CData/*4:0*/ __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_9__DOT__full;
    __Vdly__Queue1_BundleMap_9__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_10__DOT__full;
    __Vdly__Queue1_BundleMap_10__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_11__DOT__full;
    __Vdly__Queue1_BundleMap_11__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_12__DOT__full;
    __Vdly__Queue1_BundleMap_12__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_13__DOT__full;
    __Vdly__Queue1_BundleMap_13__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_14__DOT__full;
    __Vdly__Queue1_BundleMap_14__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_15__DOT__full;
    __Vdly__Queue1_BundleMap_15__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_16__DOT__full;
    __Vdly__Queue1_BundleMap_16__DOT__full = 0;
    CData/*0:0*/ __Vdly__Queue1_BundleMap_17__DOT__full;
    __Vdly__Queue1_BundleMap_17__DOT__full = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyVal__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 = 0;
    // Body
    __Vdly__Queue17_BundleMap__DOT__enq_ptr_value = vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value;
    __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value;
    __VdlySet__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__Queue1_BundleMap__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap__DOT__full;
    __Vdly__Queue1_BundleMap_1__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__full;
    __Vdly__Queue1_BundleMap_2__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__full;
    __Vdly__Queue1_BundleMap_3__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__full;
    __Vdly__Queue1_BundleMap_4__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__full;
    __Vdly__Queue1_BundleMap_5__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__full;
    __Vdly__Queue1_BundleMap_6__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__full;
    __Vdly__Queue1_BundleMap_7__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__full;
    __Vdly__Queue1_BundleMap_8__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__full;
    __Vdly__Queue1_BundleMap_9__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__full;
    __Vdly__Queue1_BundleMap_10__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__full;
    __Vdly__Queue1_BundleMap_11__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__full;
    __Vdly__Queue1_BundleMap_12__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__full;
    __Vdly__Queue1_BundleMap_13__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__full;
    __Vdly__Queue1_BundleMap_14__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__full;
    __Vdly__Queue1_BundleMap_15__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__full;
    __Vdly__Queue1_BundleMap_16__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__full;
    __Vdly__Queue1_BundleMap_17__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__full;
    __Vdly__Queue17_BundleMap__DOT__deq_ptr_value = vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value;
    __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value 
        = vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value;
    __PVT__unnamedblk1__DOT___GEN_6 = ((((((IData)(vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__full) 
                                           << 0xfU) 
                                          | ((IData)(vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__full) 
                                             << 0xeU)) 
                                         | (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__full) 
                                             << 0xdU) 
                                            | ((IData)(vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__full) 
                                               << 0xcU))) 
                                        | ((((IData)(vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__full) 
                                             << 0xbU) 
                                            | ((IData)(vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__full) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__full) 
                                               << 9U) 
                                              | ((IData)(vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__full) 
                                                 << 8U)))) 
                                       | (((((IData)(vlSelfRef.__PVT__Queue1_BundleMap__DOT__full) 
                                             << 7U) 
                                            | (0x40U 
                                               & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__empty)) 
                                                  << 6U))) 
                                           | ((0x20U 
                                               & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__empty)) 
                                                  << 5U)) 
                                              | (0x10U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__empty)) 
                                                    << 4U)))) 
                                          | (((8U & 
                                               ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__empty)) 
                                                << 3U)) 
                                              | (4U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__empty)) 
                                                    << 2U))) 
                                             | ((2U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__empty)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__empty)))))));
    __PVT__unnamedblk1__DOT___GEN_7 = ((((((IData)(vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__full) 
                                           << 0xfU) 
                                          | ((IData)(vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__full) 
                                             << 0xeU)) 
                                         | (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__full) 
                                             << 0xdU) 
                                            | ((IData)(vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__full) 
                                               << 0xcU))) 
                                        | ((((IData)(vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__full) 
                                             << 0xbU) 
                                            | ((IData)(vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__full) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__full) 
                                               << 9U) 
                                              | ((IData)(vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__full) 
                                                 << 8U)))) 
                                       | (((((IData)(vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__full) 
                                             << 7U) 
                                            | (0x40U 
                                               & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__empty)) 
                                                  << 6U))) 
                                           | ((0x20U 
                                               & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__empty)) 
                                                  << 5U)) 
                                              | (0x10U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__empty)) 
                                                    << 4U)))) 
                                          | (((8U & 
                                               ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__empty)) 
                                                << 3U)) 
                                              | (4U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__empty)) 
                                                    << 2U))) 
                                             | ((2U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__empty)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__empty)))))));
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty) 
                                  | ((IData)(__PVT__unnamedblk1__DOT___GEN_6) 
                                     >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:18072: Assertion failed in %NysyxSoCFull.fpga.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:69\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 18072, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:18074: Assertion failed in %NysyxSoCFull.fpga.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 18074, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bvalid)) 
                                  | ((IData)(__PVT__unnamedblk1__DOT___GEN_7) 
                                     >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:18078: Assertion failed in %NysyxSoCFull.fpga.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:98\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 18078, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:18080: Assertion failed in %NysyxSoCFull.fpga.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 18080, "", false);
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_1__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_1__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_2__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_2__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_3__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_3__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_4__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_4__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_5__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_5__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_6__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_6__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_7__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_7__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_8__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_8__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_9__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_9__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_10__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_10__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_11__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_11__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_12__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_12__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__do_enq) {
        vlSelfRef.Queue17_BundleMap_13__DOT__ram_ext__DOT____Vlvbound_h83af5404__0 
            = vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value))) {
            __VdlyVal__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.Queue17_BundleMap_13__DOT__ram_ext__DOT____Vlvbound_h83af5404__0;
            __VdlyDim0__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 
                = vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value;
            __VdlySet__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 7U));
    if (vlSelfRef.__PVT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 8U));
    if (vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 9U));
    if (vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 0xaU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 0xbU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 0xcU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 0xdU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 0xeU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 0xfU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 7U));
    if (vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 8U));
    if (vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 9U));
    if (vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 0xaU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 0xbU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 0xcU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 0xdU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 0xeU));
    if (vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 0xfU));
    if (vlSymsp->TOP.reset) {
        __Vdly__Queue17_BundleMap__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value = 0U;
        __Vdly__Queue17_BundleMap__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full = 0U;
        __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full = 0U;
        __Vdly__Queue1_BundleMap__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_1__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_2__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_3__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_4__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_5__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_6__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_7__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_8__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_9__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_10__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_11__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_12__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_13__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_14__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_15__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_16__DOT__full = 0U;
        __Vdly__Queue1_BundleMap_17__DOT__full = 0U;
    } else {
        if (vlSelfRef.__PVT__Queue17_BundleMap__DOT__do_enq) {
            __Vdly__Queue17_BundleMap__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value))));
        }
        if (vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__do_enq) {
            __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value))));
        }
        vlSelfRef.__PVT__Queue17_BundleMap__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT___GEN_3) & 
                (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast))) 
               & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__empty)));
        if (vlSelfRef.__PVT__Queue17_BundleMap__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__unnamedblk1__DOT__do_deq 
            = ((((IData)(vlSelfRef.__PVT___GEN_3) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                  >> 1U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__unnamedblk1__DOT__do_deq 
            = ((((IData)(vlSelfRef.__PVT___GEN_3) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                  >> 2U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__unnamedblk1__DOT__do_deq 
            = ((((IData)(vlSelfRef.__PVT___GEN_3) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                  >> 3U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__unnamedblk1__DOT__do_deq 
            = ((((IData)(vlSelfRef.__PVT___GEN_3) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                  >> 4U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__unnamedblk1__DOT__do_deq 
            = ((((IData)(vlSelfRef.__PVT___GEN_3) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                  >> 5U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__unnamedblk1__DOT__do_deq 
            = ((((IData)(vlSelfRef.__PVT___GEN_3) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                  >> 6U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT___GEN_11) & 
                ((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid))) 
               & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__empty)));
        if (vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT___GEN_11) & 
                (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                  >> 1U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT___GEN_11) & 
                (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                  >> 2U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT___GEN_11) & 
                (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                  >> 3U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT___GEN_11) & 
                (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                  >> 4U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT___GEN_11) & 
                (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                  >> 5U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__do_enq;
        }
        vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT___GEN_11) & 
                (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__empty))) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                  >> 6U));
        if (vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value 
                = ((0x10U == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value))));
        }
        if (((IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__do_enq) 
             != (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full 
                = vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT___GEN_3) 
                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                    >> 7U)))) {
            __Vdly__Queue1_BundleMap__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT___GEN_3) 
                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                    >> 8U)))) {
            __Vdly__Queue1_BundleMap_1__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT___GEN_3) 
                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                    >> 9U)))) {
            __Vdly__Queue1_BundleMap_2__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT___GEN_3) 
                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                    >> 0xaU)))) {
            __Vdly__Queue1_BundleMap_3__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT___GEN_3) 
                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                    >> 0xbU)))) {
            __Vdly__Queue1_BundleMap_4__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT___GEN_3) 
                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                    >> 0xcU)))) {
            __Vdly__Queue1_BundleMap_5__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT___GEN_3) 
                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                    >> 0xdU)))) {
            __Vdly__Queue1_BundleMap_6__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT___GEN_3) 
                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                    >> 0xeU)))) {
            __Vdly__Queue1_BundleMap_7__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT___GEN_3) 
                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_rid)) 
                    >> 0xfU)))) {
            __Vdly__Queue1_BundleMap_8__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                    >> 7U)))) {
            __Vdly__Queue1_BundleMap_9__DOT__full = vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                    >> 8U)))) {
            __Vdly__Queue1_BundleMap_10__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                    >> 9U)))) {
            __Vdly__Queue1_BundleMap_11__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                    >> 0xaU)))) {
            __Vdly__Queue1_BundleMap_12__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                    >> 0xbU)))) {
            __Vdly__Queue1_BundleMap_13__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                    >> 0xcU)))) {
            __Vdly__Queue1_BundleMap_14__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                    >> 0xdU)))) {
            __Vdly__Queue1_BundleMap_15__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                    >> 0xeU)))) {
            __Vdly__Queue1_BundleMap_16__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bid)) 
                    >> 0xfU)))) {
            __Vdly__Queue1_BundleMap_17__DOT__full 
                = vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    if (vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__ram 
            = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
                << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                           << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                           >> 4U))));
    }
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_1__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_2__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_3__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_4__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_5__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_6__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_7__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_8__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_9__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_10__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_11__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_12__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value 
        = __Vdly__Queue17_BundleMap_13__DOT__enq_ptr_value;
    if (__VdlySet__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory[__VdlyDim0__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_1__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_2__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_3__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_4__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_5__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_6__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_7__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_8__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_9__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_10__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_11__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_12__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value 
        = __Vdly__Queue17_BundleMap_13__DOT__deq_ptr_value;
    vlSelfRef.__PVT__Queue1_BundleMap__DOT__full = __Vdly__Queue1_BundleMap__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__full 
        = __Vdly__Queue1_BundleMap_1__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__full 
        = __Vdly__Queue1_BundleMap_2__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__full 
        = __Vdly__Queue1_BundleMap_3__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__full 
        = __Vdly__Queue1_BundleMap_4__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__full 
        = __Vdly__Queue1_BundleMap_5__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__full 
        = __Vdly__Queue1_BundleMap_6__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__full 
        = __Vdly__Queue1_BundleMap_7__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__full 
        = __Vdly__Queue1_BundleMap_8__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__full 
        = __Vdly__Queue1_BundleMap_9__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__full 
        = __Vdly__Queue1_BundleMap_10__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__full 
        = __Vdly__Queue1_BundleMap_11__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__full 
        = __Vdly__Queue1_BundleMap_12__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__full 
        = __Vdly__Queue1_BundleMap_13__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__full 
        = __Vdly__Queue1_BundleMap_14__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__full 
        = __Vdly__Queue1_BundleMap_15__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__full 
        = __Vdly__Queue1_BundleMap_16__DOT__full;
    vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__full 
        = __Vdly__Queue1_BundleMap_17__DOT__full;
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__enq_ptr_value));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT___ram_ext_R0_data 
        = ((0x10U >= (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value))
            ? vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__deq_ptr_value]
            : 0U);
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__full = 
        ((IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__ptr_match) 
         & (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__maybe_full));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__full 
        = ((IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_AXI4UserYanker_1___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__1(VysyxSoCFull_AXI4UserYanker_1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_AXI4UserYanker_1___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_3 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeOut_rready) 
                               & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)));
    vlSelfRef.__PVT___GEN_11 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeOut_bready) 
                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_in_bvalid));
}

VL_INLINE_OPT void VysyxSoCFull_AXI4UserYanker_1___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__0(VysyxSoCFull_AXI4UserYanker_1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_AXI4UserYanker_1___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
            << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                       << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                       >> 4U))));
    vlSelfRef.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size) 
            << 8U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
                       << 1U) | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id) 
                                       >> 4U))));
    vlSelfRef.__VdfgRegularize_hb2c28821_2_0 = (1U 
                                                & ((((((0x8000U 
                                                        & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_8__DOT__full)) 
                                                           << 0xfU)) 
                                                       | (0x4000U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_7__DOT__full)) 
                                                             << 0xeU))) 
                                                      | ((0x2000U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_6__DOT__full)) 
                                                             << 0xdU)) 
                                                         | (0x1000U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_5__DOT__full)) 
                                                               << 0xcU)))) 
                                                     | (((0x800U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_4__DOT__full)) 
                                                             << 0xbU)) 
                                                         | (0x400U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_3__DOT__full)) 
                                                               << 0xaU))) 
                                                        | ((0x200U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_2__DOT__full)) 
                                                               << 9U)) 
                                                           | (0x100U 
                                                              & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_1__DOT__full)) 
                                                                 << 8U))))) 
                                                    | ((((0x80U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap__DOT__full)) 
                                                             << 7U)) 
                                                         | (0x40U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__full)) 
                                                               << 6U))) 
                                                        | ((0x20U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__full)) 
                                                               << 5U)) 
                                                           | (0x10U 
                                                              & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__full)) 
                                                                 << 4U)))) 
                                                       | (((8U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__full)) 
                                                               << 3U)) 
                                                           | (4U 
                                                              & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__full)) 
                                                                 << 2U))) 
                                                          | ((2U 
                                                              & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__full)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__full))))))) 
                                                   >> 
                                                   (0xfU 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelfRef.__VdfgRegularize_hb2c28821_0_0 = (1U 
                                                & ((((((0x8000U 
                                                        & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_17__DOT__full)) 
                                                           << 0xfU)) 
                                                       | (0x4000U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_16__DOT__full)) 
                                                             << 0xeU))) 
                                                      | ((0x2000U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_15__DOT__full)) 
                                                             << 0xdU)) 
                                                         | (0x1000U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_14__DOT__full)) 
                                                               << 0xcU)))) 
                                                     | (((0x800U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_13__DOT__full)) 
                                                             << 0xbU)) 
                                                         | (0x400U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_12__DOT__full)) 
                                                               << 0xaU))) 
                                                        | ((0x200U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_11__DOT__full)) 
                                                               << 9U)) 
                                                           | (0x100U 
                                                              & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_10__DOT__full)) 
                                                                 << 8U))))) 
                                                    | ((((0x80U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__Queue1_BundleMap_9__DOT__full)) 
                                                             << 7U)) 
                                                         | (0x40U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__full)) 
                                                               << 6U))) 
                                                        | ((0x20U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__full)) 
                                                               << 5U)) 
                                                           | (0x10U 
                                                              & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__full)) 
                                                                 << 4U)))) 
                                                       | (((8U 
                                                            & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__full)) 
                                                               << 3U)) 
                                                           | (4U 
                                                              & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__full)) 
                                                                 << 2U))) 
                                                          | ((2U 
                                                              & ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__full)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__full))))))) 
                                                   >> 
                                                   (0xfU 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_arvalid) 
                               & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awvalid) 
                                & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)));
    vlSelfRef.auto_out_arvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_arvalid) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_hb2c28821_2_0));
    vlSelfRef.auto_out_awvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awvalid) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_hb2c28821_0_0));
    vlSelfRef.__PVT__Queue17_BundleMap__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT___GEN_4) & ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id)))));
    vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_1__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 1U));
    vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_2__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 2U));
    vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_3__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 3U));
    vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_4__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 4U));
    vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_5__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 5U));
    vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_6__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_4)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
                                                   >> 6U));
    vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_7__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT___GEN_12) & ((IData)(1U) 
                                                   << 
                                                   (0xfU 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id)))));
    vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_8__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 1U));
    vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_9__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 2U));
    vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_10__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 3U));
    vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_11__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 4U));
    vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_12__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 5U));
    vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__Queue17_BundleMap_13__DOT__full)) 
            & (IData)(vlSelfRef.__PVT___GEN_12)) & 
           (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_id))) 
            >> 6U));
}
