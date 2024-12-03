all: simfst
	@echo "Write this Makefile by your self."

simvcd:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	mkdir -p build
	verilator -Wall ./vsrc/top.v ./csrc/sim_main.cpp --cc --trace --Mdir ./build/obj_dir --exe --build
	./build/obj_dir/Vtop
	
simfst:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	mkdir -p build
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py ./constr/top.nxdc ./build/auto_bind.cpp
	verilator -Wall $(abspath ./vsrc/top.v) $(abspath ./csrc/sim_main.cpp) $(abspath ./build/auto_bind.cpp) $(NVBOARD_HOME)/build/nvboard.a --cc --trace-fst --Mdir ./build/obj_dir --exe --build -o $(abspath ./build/top)
	./build/obj_dir/Vtop
	
wavevcd:
	gtkwave waveform.vcd
	
wavefst:
	gtkwave waveform.fst

pinbind:
	mkdir -p build
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py ./constr/top.nxdc ./build/auto_bind.cpp
	
clean:
	rm -rf ./build
	
include ../Makefile
