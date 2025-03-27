#include <am.h>
#include <riscv/riscv.h>
#include "soc.h"
#include <stdio.h>

#define KEYDOWN_MASK 0x0008
uint8_t up_recv = 0;

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t kbd_out = inl(KBD_ADDR) ;
  if(kbd_out == 0x000000f0){
    up_recv = 1;
  }
  else {
    if(up_recv){
      kbd->keydown = false;
      up_recv = 0;
    }
    else{
      kbd->keydown = true;
    }
    printf("%x\n",kbd_out&0xff);
    kbd->keycode = kbd_out;
  }
  
}

void __am_uart_rx(AM_UART_RX_T *rx) {
  if (!(inb(UART_REG_LSR) & 0x01)) {
    rx->data = 0xff;
  }
  else{
    uint8_t rx_data = inb(SERIAL_PORT);
    if(rx_data){
      rx->data = rx_data;
    }
    else{
      rx->data = 0xff;
    }
  }
  
}