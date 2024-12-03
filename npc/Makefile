all:
	@echo "Write this Makefile by your self."

simvcd:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall ./vsrc/top.v ./csrc/sim_main.cpp --cc --trace --exe --build
	obj_dir/Vtop
	
simfst:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall ./vsrc/top.v ./csrc/sim_main.cpp --cc --trace-fst --exe --build
	obj_dir/Vtop
	
wavevcd:
	gtkwave waveform.vcd
	
wavefst:
	gtkwave waveform.fst
	
clean:
	rm -rf ./obj_dir
include ../Makefile
