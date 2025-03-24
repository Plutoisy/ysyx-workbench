#include <am.h>
#include <klib-macros.h>
#include <riscv/riscv.h>
#include <string.h>
#include <stdio.h>

#define UART_BASE 0x10000000L
#define UART_TX   0
#define SERIAL_PORT     (UART_BASE + UART_TX)
#define UART_REG_LC      0x10000003L
#define UART_REG_DL1     0x10000000L
#define UART_REG_DL2     0x10000001L
#define UART_REG_LSR     0x10000005L

extern char _heap_start;
extern char _psram_end;
extern char _bl_s[], _bl_s_load[], _ebl_s[];
extern char _text[], _text_load[], _etext[];
extern char _data[], _data_load[], _edata[];
extern char _data_extra[], _data_extra_load[], _edata_extra[];
extern char _bss_start[], _ebss[];

int main(const char *args);

extern char _sram_start;
#define SRAM_SIZE (8 * 1024)
#define SRAM_END ((uintptr_t)&_sram_start + SRAM_SIZE)

Area heap = RANGE(&_heap_start, &_psram_end);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;


void putch(char ch) {
  while (!(inb(UART_REG_LSR) & 0x20)) {
  }
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while (1);
}

void uart_init() {
  int divisor = 1;
  outb(UART_REG_LC, inb(UART_REG_LC) | 0x80);
  outb(UART_REG_DL2, (divisor >> 8) & 0xFF);
  outb(UART_REG_DL1, divisor & 0xFF);
  outb(UART_REG_LC, inb(UART_REG_LC) & ~0x80);
}

void print_csr() {
  uint32_t mvendorid, marchid;
  asm volatile ("csrr %0, mvendorid" : "=r" (mvendorid): : );
  asm volatile ("csrr %0, marchid" : "=r" (marchid) : : );
  printf("mvendorid = %c%c%c%c\n",
    (char)(mvendorid >> 24),
    (char)(mvendorid >> 16),
    (char)(mvendorid >> 8),
    (char)mvendorid);
  printf("marchid   = %d\n", marchid);
}

void ssbl() {
  char *dest;
  char *src;
  unsigned int size;
  // 复制.text段
  dest = _text;
  src = _text_load;
  size = (unsigned int)(_etext - _text);
  
  for (unsigned int i = 0; i < size; i += 4) {
      *((unsigned int*)(dest + i)) = *((unsigned int*)(src + i));
  }
    
  // 复制.data段
  dest = _data;
  src = _data_load;
  size = (unsigned int)(_edata - _data);
  for (unsigned int i = 0; i < size; i += 4) {
    *((unsigned int*)(dest + i)) = *((unsigned int*)(src + i));
  }
  
  // 复制额外数据段
  dest = _data_extra;
  src = _data_extra_load;
  size = (unsigned int)(_edata_extra - _data_extra);
  for (unsigned int i = 0; i < size; i += 4) {
    *((unsigned int*)(dest + i)) = *((unsigned int*)(src + i));
  }
  
  // 初始化.bss段(清零)
  unsigned int bss_size = (unsigned int)(_ebss - _bss_start);
  for (unsigned int i = 0; i < bss_size; i += 4) {
      *((unsigned int*)(_bss_start + i)) = 0;
  }

  uart_init();
  print_csr();
  int ret = main(mainargs);
  halt(ret);
}

void fsbl() {
  char *dest = _bl_s;
  char *src = _bl_s_load;
  unsigned int size = (unsigned int)(_ebl_s - _bl_s);
  
  for (unsigned int i = 0; i < size; i += 4) {
      *((unsigned int*)(dest + i)) = *((unsigned int*)(src + i));
  }

  ssbl();
}

void _trm_init() {
  fsbl();
}
