TOPNAME = top
# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

all:
	@echo "Write this Makefile by your self."

		
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	mkdir -p build
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py ./constr/top.nxdc ./build/auto_bind.cpp
	verilator -Wall $(abspath ./vsrc/top.v) $(abspath ./csrc/sim.cpp) $(abspath ./build/auto_bind.cpp) $(NVBOARD_HOME)/build/nvboard.a --cc  $(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) --Mdir ./build/obj_dir --exe --build -o $(abspath ./build/top)
	./build/top
	


	
clean:
	rm -rf ./build
	
include ../../../Makefile
