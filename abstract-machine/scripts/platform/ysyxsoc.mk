AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
           riscv/ysyxsoc/ioe.c \
           riscv/ysyxsoc/timer.c \
           riscv/ysyxsoc/input.c \
           riscv/ysyxsoc/cte.c \
           riscv/ysyxsoc/gpu.c \
           riscv/ysyxsoc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections

LDFLAGS   += -T $(AM_HOME)/am/src/riscv/ysyxsoc/linker.ld
LDFLAGS   += --defsym=_stack_size=1K
LDFLAGS   += --gc-sections -e _start
# LDFLAGS   += --print-map
LDFLAGS   += -Map out.map
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/ysyxsoc/trm.c

insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) "$(MAINARGS_PLACEHOLDER)" "$(mainargs)"
	
image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: insert-arg
	$(MAKE) -C $(NPC_HOME) nvboard IMG=$(IMAGE).bin
    # $(MAKE) -C $(NPC_HOME) nvboard_bs IMG=$(IMAGE).bin
    # $(MAKE) -C $(NPC_HOME) nvboard IMG=$(IMAGE).bin\
