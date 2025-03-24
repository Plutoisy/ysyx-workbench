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

extern char _heap_start,_heap_end,_rodata_end,_bss_end,_text_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE 0x0fffffff
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, &_heap_end);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;


extern char _ssbl_origin,_ssbl_ram_start,_ssbl_ram_end;
extern char _test_origin,_text_ram_start,_data_ram_end;
extern char _bss_start,_bss_end;


void putch(char ch) {
  while (!(inb(UART_REG_LSR) & 0x20)) {
  }
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while (1);
}

void device_init() {
  int divisor = 1;
  outb(UART_REG_LC, inb(UART_REG_LC) | 0x80);
  outb(UART_REG_DL2, (divisor >> 8) & 0xFF);
  outb(UART_REG_DL1, divisor & 0xFF);
  outb(UART_REG_LC, inb(UART_REG_LC) & ~0x80);

  uint32_t mvendorid, marchid;
  asm volatile ("csrr %0, mvendorid" : "=r" (mvendorid): : );
  asm volatile ("csrr %0, marchid" : "=r" (marchid) : : );
  printf("mvendorid = %c%c%c%c\n",
    (char)(mvendorid >> 24),
    (char)(mvendorid >> 16),
    (char)(mvendorid >> 8),
    (char)mvendorid);
  printf("marchid   = %d\n", marchid);

  int ret = main(mainargs);
  halt(ret);
}

void ssbl(){
  // copy text rodata data 
  volatile uint32_t *src = (volatile uint32_t *)&_test_origin;
  volatile uint32_t *dst = (volatile uint32_t *)&_text_ram_start;
  while((uint32_t) dst < (uint32_t) &_data_ram_end){
    *dst++ = *src++;
  }
  // init_bss
  src = (volatile uint32_t *)&_bss_start;
  while((uint32_t) src < (uint32_t) &_bss_end){
    *src++ = 0;
  }
  device_init();
}

void fsbl(){
  // boot_memcpy((uint32_t)&_ssbl_origin,(uint32_t)&_ssbl_ram_start,(uint32_t)&_ssbl_ram_end);
  volatile uint32_t *src = (volatile uint32_t *)&_ssbl_origin;
  volatile uint32_t *dst = (volatile uint32_t *)&_ssbl_ram_start;
  while((uint32_t) dst < (uint32_t) &_ssbl_ram_end){
    *dst++ = *src++;
  }
  ssbl();
}

void _trm_init() {
  fsbl();
}
