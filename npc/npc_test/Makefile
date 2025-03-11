all:
	riscv64-linux-gnu-gcc -c char_test.c -nostartfiles -march=rv32e_zicsr -mabi=ilp32e
	riscv64-linux-gnu-ld -m elf32lriscv -Ttext=0x20000000 -o char_test.elf char_test.o
	riscv64-linux-gnu-objdump -m riscv:rv32 -d char_test.elf > char_test.txt
	riscv64-linux-gnu-objcopy -S --set-section-flags .bss=alloc,contents -O binary char_test.elf char_test.bin								
