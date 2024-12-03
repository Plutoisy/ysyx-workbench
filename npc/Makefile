all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall ./vsrc/top.v ./csrc/sim_main.cpp --cc --trace --exe --build
	./obj_dir/Vtop 
clean:
	rm -rf ./obj_dir
include ../Makefile
