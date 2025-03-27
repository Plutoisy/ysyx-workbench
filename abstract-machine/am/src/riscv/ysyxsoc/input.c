#include <am.h>
#include <riscv/riscv.h>
#include "soc.h"

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = 0;
  kbd->keycode = AM_KEY_NONE;
}

void __am_uart_rx(AM_UART_RX_T *rx) {
  uint8_t rx_data = inb(SERIAL_PORT);
  if(rx_data){
    rx->data = rx_data;
  }
  else{
    rx->data = 0xff;
  }
}