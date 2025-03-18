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
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (0xfff)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

extern char _data_lma_start,_data_vma_start,_bss_start;

extern char _ssbl_origin,_ssbl_ram_start,_ssbl_ram_end;
extern char _test_origin,_text_ram_start,_data_ram_end;
extern char _bss_start,_bss_end;

Area heap = RANGE(&_heap_start, &_heap_start + 0xfff);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

#pragma GCC push_options
#pragma GCC optimize("O0")

void putch(char ch) {
  while (!(inb(UART_REG_LSR) & 0x20)) {
  }
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while (1);
}
void fsbl(){
  // boot_memcpy((uint32_t)&_ssbl_origin,(uint32_t)&_ssbl_ram_start,(uint32_t)&_ssbl_ram_end);
  volatile uint32_t *src = (volatile uint32_t *)&_ssbl_origin;
  volatile uint32_t *dst = (volatile uint32_t *)&_ssbl_ram_start;
  while((uint32_t) dst < (uint32_t) &_ssbl_ram_end){
    *dst++ = *src++;
  }
  
}
void ssbl(){
  // boot_memcpy((uint32_t)&_test_origin,(uint32_t)&_text_ram_start,(uint32_t)&_data_ram_end);
  volatile uint32_t *src = (volatile uint32_t *)&_test_origin;
  volatile uint32_t *dst = (volatile uint32_t *)&_text_ram_start;
  while((uint32_t) dst < (uint32_t) &_data_ram_end){
    *dst++ = *src++;
  }
}
void bss_init(){
  volatile uint32_t *src = (volatile uint32_t *)&_bss_start;
  while((uint32_t) src < (uint32_t) &_bss_end){
    *src++ = 0;
  }
}
void _trm_init() {
  //memcpy(&_data_vma_start,&_data_lma_start,&_bss_start-&_data_vma_start);
  fsbl();
  ssbl();
  bss_init();
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
