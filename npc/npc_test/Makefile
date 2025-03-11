all:
	riscv64-linux-gnu-gcc -std=gnu11 -MMD -Wall -Werror -fno-asynchronous-unwind-tables -fno-builtin -fno-stack-protector -Wno-main -U_FORTIFY_SOURCE -fvisibility=hidden -fno-pic -march=rv64g -mcmodel=medany -mstrict-align -march=rv32e_zicsr -mabi=ilp32e   -static -fdata-sections -ffunction-sections -c -o char_test.o char_test.c
	riscv64-linux-gnu-ld -m elf32lriscv -Ttext=0x80000000 -o char_test.elf char_test.o
	riscv64-linux-gnu-objdump -m riscv:rv32 -d char_test.elf > char_test.txt
	riscv64-linux-gnu-objcopy -S --set-section-flags .bss=alloc,contents -O binary char_test.elf char_test.bin								
