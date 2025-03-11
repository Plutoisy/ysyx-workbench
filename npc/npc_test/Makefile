CC = riscv64-linux-gnu-gcc
LD = riscv64-linux-gnu-ld
OBJDUMP = riscv64-linux-gnu-objdump
OBJCOPY = riscv64-linux-gnu-objcopy

CFLAGS = -std=gnu11 -MMD -Wall -Werror -fno-asynchronous-unwind-tables \
         -fno-builtin -fno-stack-protector -Wno-main -U_FORTIFY_SOURCE \
         -fvisibility=hidden -fno-pic -march=rv32e_zicsr -mabi=ilp32e \
         -static -fdata-sections -ffunction-sections

LDFLAGS = -m elf32lriscv -Ttext=0x20000000
OBJDUMPFLAGS = -m riscv:rv32 -d
OBJCOPYFLAGS = -S --set-section-flags .bss=alloc,contents -O binary

BUILD_DIR = ./build
SRC = char_test.c
OBJ = $(BUILD_DIR)/char_test.o
ELF = $(BUILD_DIR)/char_test.elf
BIN = $(BUILD_DIR)/char_test.bin
DUMP = $(BUILD_DIR)/char_test.txt

all: $(BIN)

$(OBJ): $(SRC) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(ELF): $(OBJ)
	$(LD) $(LDFLAGS) -o $@ $<

$(DUMP): $(ELF)
	$(OBJDUMP) $(OBJDUMPFLAGS) $< > $@

$(BIN): $(ELF)
	$(OBJCOPY) $(OBJCOPYFLAGS) $< $@

$(BUILD_DIR):
	mkdir -p $@

clean:
	rm -rf $(BUILD_DIR)

