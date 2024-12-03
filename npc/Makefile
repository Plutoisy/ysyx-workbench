all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall ./vsrc/top.v ./csrc/sim_main.cpp --cc --trace-fst --exe --build
	./obj_dir/Vtop 
include ../Makefile
