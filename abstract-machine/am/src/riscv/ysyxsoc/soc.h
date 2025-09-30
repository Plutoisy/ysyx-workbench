#define UART_BASE 0x10000000L
#define UART_TX   0
#define UART_RX   0
#define SERIAL_PORT     (UART_BASE + UART_TX)
#define KBD_ADDR         0x10011000L
#define UART_REG_LSR     0x10000005L

#define UART_REG_RB_TH (UART_BASE + 0x0) // Receive buffer
#define UART_REG_IE    (UART_BASE + 0x1) // Interrupt enable
#define UART_REG_II_FC (UART_BASE + 0x2) // Interrupt identification
#define UART_REG_LC    (UART_BASE + 0x3) // Line control
#define UART_REG_MC    (UART_BASE + 0x4) // Modem control
#define UART_REG_LS    (UART_BASE + 0x5) // Line status
#define UART_REG_MS    (UART_BASE + 0x6) // Modem status
#define UART_REG_SR    (UART_BASE + 0x7) // Scratch

#define FB_ADDR          0x21000000L
