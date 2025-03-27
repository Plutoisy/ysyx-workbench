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
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# LOADLIBES += -lreadline
# LDFLAGS += -L$(NEMU_HOME)/build
# LDFLAGS += $(NEMU_HOME)/build/lriscv32-nemu-interpreter

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

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

clean:
	rm -rf ./build
	rm -rf ./dump.vcd
	
include ../Makefile
