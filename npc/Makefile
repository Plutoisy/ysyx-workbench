TOPNAME = ysyx_24120011_top

# rules for verilator
VERILATOR = verilator
VERILATOR_CFLAGS += -cc --trace 
INCFLAGS = $(addprefix -I, $(INC_PATH))

# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator

# rules for src
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")


# LOADLIBES += -lreadline
# LDFLAGS += -L$(NEMU_HOME)/build
# LDFLAGS += $(NEMU_HOME)/build/lriscv32-nemu-interpreter

sim:$(VSRCS) $(CSRCS)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	rm -rf ./obj_dir
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		--timescale-override 2ps/1ps \
		-CFLAGS "-I $(NPC_HOME)/tools/capstone/repo/include" \
		-LDFLAGS "-L$(NEMU_HOME)/build -L$(NPC_HOME)/tools/capstone/repo -lriscv32-nemu-interpreter -lcapstone -lreadline -Wl,-rpath,$(NEMU_HOME)/build"\
		--exe main.cpp
	make -C obj_dir -f Vysyx_24120011_top.mk Vysyx_24120011_top
	./obj_dir/Vysyx_24120011_top $(IMG)
clean:
	rm -rf ./build
	rm -rf ./dump.vcd
	
include ../Makefile
