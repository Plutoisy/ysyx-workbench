#include <am.h>
#include <klib-macros.h>
#include <riscv/riscv.h>
#include <string.h>

#define UART_BASE 0x10000000L
#define UART_TX   0
#define SERIAL_PORT     (UART_BASE + UART_TX)
#define UART_REG_LC      0x10000003L
#define UART_REG_DL1     0x10000000L
#define UART_REG_DL2     0x10000001L

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
  int divisor = 150;
  outb(UART_REG_LC, inb(UART_REG_LC) | 0x80);
  outb(UART_REG_DL2, (divisor >> 8) & 0xFF);
  outb(UART_REG_DL1, divisor & 0xFF);
  outb(UART_REG_LC, inb(UART_REG_LC) & ~0x80);

  int ret = main(mainargs);
  halt(ret);
}
