#include <am.h>
#include <riscv/riscv.h>
#include "soc.h"

#define KEYDOWN_MASK 0x0008

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t kbd_out = inl(KBD_ADDR) ;
  if(kbd_out == 0x000000f0){
    kbd->keydown = false;
    kbd->keycode = 0x00000011;
  }
  else {
    kbd->keydown = true;
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