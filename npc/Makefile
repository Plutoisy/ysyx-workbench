TOPNAME = ysyx_24120011_top

# rules for verilator
VERILATOR = verilator
VERILATOR_CFLAGS += -cc --trace 
INCFLAGS = $(addprefix -I, $(INC_PATH))

# rules for src
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

sim:$(VSRCS) $(CSRCS)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	rm -rf ./obj_dir
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		--exe main.cpp
	make -C obj_dir -f Vysyx_24120011_top.mk Vysyx_24120011_top LOADLIBES+=-lreadline
	./obj_dir/Vysyx_24120011_top
clean:
	rm -rf ./build
	rm -rf ./dump.vcd
	
include ../Makefile
