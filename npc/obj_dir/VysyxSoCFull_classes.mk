# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VysyxSoCFull.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VysyxSoCFull \
	VysyxSoCFull___024root__DepSet_h4d156741__0 \
	VysyxSoCFull___024root__DepSet_h4d156741__1 \
	VysyxSoCFull___024root__DepSet_h4d156741__2 \
	VysyxSoCFull___024root__DepSet_h4d156741__3 \
	VysyxSoCFull___024root__DepSet_h4d156741__4 \
	VysyxSoCFull___024root__DepSet_h4d156741__5 \
	VysyxSoCFull___024root__DepSet_h4d156741__6 \
	VysyxSoCFull___024root__DepSet_h4d156741__7 \
	VysyxSoCFull___024root__DepSet_h0188974b__0 \
	VysyxSoCFull___024root__DepSet_h0188974b__1 \
	VysyxSoCFull___024unit__DepSet_h308b0958__0 \
	VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u__DepSet_h8b2b6912__0 \
	VysyxSoCFull_TLError__DepSet_had81924e__0 \
	VysyxSoCFull_TLError__DepSet_hf0dee885__0 \
	VysyxSoCFull_TLFIFOFixer__DepSet_h4a3fce16__0 \
	VysyxSoCFull_AXI4UserYanker_1__DepSet_hb8eea4ab__0 \
	VysyxSoCFull_TLToAXI4__DepSet_h087bf761__0 \
	VysyxSoCFull_TLToAXI4__DepSet_h087bf761__1 \
	VysyxSoCFull_TLBusBypass__DepSet_he70ca409__0 \
	VysyxSoCFull_TLMonitor_7__DepSet_haa7e09c8__0 \
	VysyxSoCFull_RX__DepSet_h6d7792de__0 \
	VysyxSoCFull_RX__DepSet_h27aa8c31__0 \
	VysyxSoCFull_RX__DepSet_hf088044a__0 \
	VysyxSoCFull_AsyncQueueSink_UInt32__DepSet_h6c7912d6__0 \
	VysyxSoCFull_AsyncQueueSink_UInt32__DepSet_h66846e3b__0 \
	VysyxSoCFull_TX__DepSet_h6593a597__0 \
	VysyxSoCFull_TX__DepSet_h2a7b744a__0 \
	VysyxSoCFull_AsyncQueueSource_UInt32__DepSet_h77d16205__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VysyxSoCFull__ConstPool_0 \
	VysyxSoCFull___024root__Slow \
	VysyxSoCFull___024root__DepSet_h4d156741__0__Slow \
	VysyxSoCFull___024root__DepSet_h4d156741__1__Slow \
	VysyxSoCFull___024root__DepSet_h0188974b__0__Slow \
	VysyxSoCFull___024unit__Slow \
	VysyxSoCFull___024unit__DepSet_h460a3d32__0__Slow \
	VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u__Slow \
	VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u__DepSet_hb8d0b4b7__0__Slow \
	VysyxSoCFull_TLError__Slow \
	VysyxSoCFull_TLError__DepSet_had81924e__0__Slow \
	VysyxSoCFull_TLFIFOFixer__Slow \
	VysyxSoCFull_TLFIFOFixer__DepSet_h8f3e5de7__0__Slow \
	VysyxSoCFull_TLFIFOFixer__DepSet_h4a3fce16__0__Slow \
	VysyxSoCFull_AXI4UserYanker_1__Slow \
	VysyxSoCFull_AXI4UserYanker_1__DepSet_hd599da16__0__Slow \
	VysyxSoCFull_TLToAXI4__Slow \
	VysyxSoCFull_TLToAXI4__DepSet_h3d50f11e__0__Slow \
	VysyxSoCFull_TLToAXI4__DepSet_h087bf761__0__Slow \
	VysyxSoCFull_TLBusBypass__Slow \
	VysyxSoCFull_TLBusBypass__DepSet_hb161e941__0__Slow \
	VysyxSoCFull_TLBusBypass__DepSet_he70ca409__0__Slow \
	VysyxSoCFull_TLMonitor_7__Slow \
	VysyxSoCFull_TLMonitor_7__DepSet_h5c368195__0__Slow \
	VysyxSoCFull_RX__Slow \
	VysyxSoCFull_RX__DepSet_he83452fd__0__Slow \
	VysyxSoCFull_RX__DepSet_hf088044a__0__Slow \
	VysyxSoCFull_AsyncQueueSink_UInt32__Slow \
	VysyxSoCFull_AsyncQueueSink_UInt32__DepSet_h6c7912d6__0__Slow \
	VysyxSoCFull_AsyncQueueSink_UInt32__DepSet_h66846e3b__0__Slow \
	VysyxSoCFull_TX__Slow \
	VysyxSoCFull_TX__DepSet_h6593a597__0__Slow \
	VysyxSoCFull_TX__DepSet_h2a7b744a__0__Slow \
	VysyxSoCFull_AsyncQueueSource_UInt32__Slow \
	VysyxSoCFull_AsyncQueueSource_UInt32__DepSet_hf1dff04e__0__Slow \
	VysyxSoCFull_AsyncQueueSource_UInt32__DepSet_h77d16205__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VysyxSoCFull__Dpi \
	VysyxSoCFull__Trace__0 \
	VysyxSoCFull__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VysyxSoCFull__Syms \
	VysyxSoCFull__Trace__0__Slow \
	VysyxSoCFull__TraceDecls__0__Slow \
	VysyxSoCFull__Trace__1__Slow \
	VysyxSoCFull__Trace__2__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
