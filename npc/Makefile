TOPNAME = ysyxSoCFull
NXDC_FILES = $(YSYXSOC_HOME)/constr/ysyxSoCFull.nxdc
# rules for verilator
VERILATOR = verilator
VERILATOR_CFLAGS += -cc --trace 
INCFLAGS = $(addprefix -I, $(INC_PATH))

# constraint file
SRC_AUTO_BIND = $(YSYXSOC_HOME)/constr/auto_bind.cpp
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator

# rules for src
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
VSRCS += $(shell find $(abspath $(YSYXSOC_HOME)/perip) -name "*.v")
VSRCS += $(YSYXSOC_HOME)/build/ysyxSoCFull.v
VSRCS_bs = $(shell find $(abspath ./vsrc_bs) -name "*.v")
VSRCS_bs += $(shell find $(abspath $(YSYXSOC_HOME)/perip) -name "*.v")
VSRCS_bs += $(YSYXSOC_HOME)/build/ysyxSoCFull.v
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)
CSRCS_NPC = $(shell find $(abspath ./csrc_npc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
VSRCS_NPC = $(shell find $(abspath ./vsrc) -name "*.v" -not -name "ysyx_24120011.v" -not -name "ysyx_24120011_PCProcessor.v" -not -name "ysyx_24120011_Xbar.v" -not -name "ysyx_24120011_Uart.v" -not -name "ysyx_24120011_Clint.v" -not -name "ysyx_24120011_LSU.v")
VSRCS_NPC += $(shell find $(abspath ./npc_specific) -name "*.v")

# LOADLIBES += -lreadline
# LDFLAGS += -L$(NEMU_HOME)/build
# LDFLAGS += $(NEMU_HOME)/build/lriscv32-nemu-interpreter

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

npc:$(VSRCS_NPC) $(CSRCS_NPC)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	rm -rf ./obj_dir
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module ysyx_24120011 $^ \
		--timescale "1ns/1ns" \
		--no-timing \
		-CFLAGS "-I $(NPC_HOME)/tools/capstone/repo/include" \
		-LDFLAGS "-L$(NEMU_HOME)/build -L$(NPC_HOME)/tools/capstone/repo -lriscv32-nemu-interpreter -lcapstone -lreadline -Wl,-rpath,$(NEMU_HOME)/build"\
		--exe main.cpp
	make -C obj_dir -f Vysyx_24120011.mk Vysyx_24120011
	./obj_dir/Vysyx_24120011 $(IMG)
	
sim:$(VSRCS) $(CSRCS)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	rm -rf ./obj_dir
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		--timescale "1ns/1ns" \
		--no-timing \
		--autoflush \
		-CFLAGS "-I $(NPC_HOME)/tools/capstone/repo/include"\
		-I$(YSYXSOC_HOME)/perip/uart16550/rtl\
		-I$(YSYXSOC_HOME)/perip/spi/rtl\
		-LDFLAGS "-L$(NEMU_HOME)/build -L$(NPC_HOME)/tools/capstone/repo -lriscv32-nemu-interpreter -lcapstone -lreadline -Wl,-rpath,$(NEMU_HOME)/build"\
		--exe main.cpp
	make -C obj_dir -f V$(TOPNAME).mk V$(TOPNAME)
	./obj_dir/V$(TOPNAME) $(IMG)

nvboard:$(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	rm -rf ./obj_dir
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		--timescale "1ns/1ns" \
		--no-timing \
		--autoflush \
		-CFLAGS "-I $(NPC_HOME)/tools/capstone/repo/include"\
		-I$(YSYXSOC_HOME)/perip/uart16550/rtl\
		-I$(YSYXSOC_HOME)/perip/spi/rtl\
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		-LDFLAGS "-L$(NEMU_HOME)/build -L$(NPC_HOME)/tools/capstone/repo -lriscv32-nemu-interpreter -lcapstone -lreadline -Wl,-rpath,$(NEMU_HOME)/build"\
		--exe main.cpp
	make -C obj_dir -f V$(TOPNAME).mk V$(TOPNAME)
	./obj_dir/V$(TOPNAME) $(IMG)
	
nvboard_bs:$(VSRCS_bs) $(CSRCS) $(NVBOARD_ARCHIVE)
	rm -rf ./obj_dir
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		--timescale "1ns/1ns" \
		--no-timing \
		--autoflush \
		-CFLAGS "-I $(NPC_HOME)/tools/capstone/repo/include"\
		-I$(YSYXSOC_HOME)/perip/uart16550/rtl\
		-I$(YSYXSOC_HOME)/perip/spi/rtl\
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		-LDFLAGS "-L$(NEMU_HOME)/build -L$(NPC_HOME)/tools/capstone/repo -lriscv32-nemu-interpreter -lcapstone -lreadline -Wl,-rpath,$(NEMU_HOME)/build"\
		--exe main.cpp
	make -C obj_dir -f V$(TOPNAME).mk V$(TOPNAME)
	./obj_dir/V$(TOPNAME) $(IMG)

perf:
	rm -rf ~/yosys-sta/npc && \
	cp -r ./vsrc_pipe ~/yosys-sta/npc && \
	python3 ./tools/remove_dpic.py && \
	rm -rf ~/yosys-sta/result/* && \
	cd ~/yosys-sta && \
	make sta && \
	cd $(YSYX_HOME)/am-kernels/benchmarks/microbench && \
	make ARCH=riscv32e-ysyxsoc run mainargs=test && \
	cd $(YSYX_HOME)/npc && \
	python3 ./tools/perf.py
	
perfhalf:
	rm -rf ~/yosys-sta/npc && \
	cp -r ./vsrc_pipe ~/yosys-sta/npc && \
	python3 ./tools/remove_dpic.py && \
	rm -rf ~/yosys-sta/result/* && \
	cd ~/yosys-sta && \
	make sta
	
clean:
	rm -rf ./build
	rm -rf ./dump.vcd
include ../Makefile
