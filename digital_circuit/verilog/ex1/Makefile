TOPNAME = top
NXDC_FILES = constr/top.nxdc
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert
				
$(shell mkdir -p ./build)
				
# constraint file
SRC_AUTO_BIND = $(abspath ./build/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
	
# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

all:
	@echo "Write this Makefile by your self."

		
sim:$(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	rm -rf ./build/obj_dir
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir ./build/obj_dir --exe -o $(abspath ./build/top)
	./build/top

vcd:$(VSRCS) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	mkdir -p build
	$(VERILATOR) -Wall \
		--top-module $(TOPNAME)\
		$^ $(abspath ./simcsrc/sim.cpp)\
		--cc --trace\
		--Mdir ./build/obj_dir --exe --build -o $(abspath ./build/top_vcd)
	./build/top_vcd

wave:
	gtkwave dump.vcd

clean:
	rm -rf ./build
	
include ../../../Makefile
