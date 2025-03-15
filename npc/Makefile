TOPNAME = ysyxSoCFull

# rules for verilator
VERILATOR = verilator
VERILATOR_CFLAGS += -cc --trace 
INCFLAGS = $(addprefix -I, $(INC_PATH))

# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator

# rules for src
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
VSRCS += $(shell find $(abspath $(YSYXSOC_HOME)/perip) -name "*.v")
VSRCS += $(YSYXSOC_HOME)/build/ysyxSoCFull.v
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")


# LOADLIBES += -lreadline
# LDFLAGS += -L$(NEMU_HOME)/build
# LDFLAGS += $(NEMU_HOME)/build/lriscv32-nemu-interpreter

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
clean:
	rm -rf ./build
	rm -rf ./dump.vcd
	
include ../Makefile
