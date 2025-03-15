#include <am.h>
#include <klib-macros.h>
#include <riscv/riscv.h>
#include <string.h>

#define SERIAL_PORT     (0x10000000 + 0x0000000)

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (0xfff)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

extern char _data_lma_start,_data_vma_start,_bss_start;

Area heap = RANGE(&_heap_start, &_heap_start + 0xfff);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while (1);
}

void _trm_init() {
  memcpy(&_data_vma_start,&_data_lma_start,&_bss_start-&_data_vma_start);
  int ret = main(mainargs);
  halt(ret);
}
