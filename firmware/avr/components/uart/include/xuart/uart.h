#ifndef UART_H_
#define UART_H_

#include <avr/io.h>

void uart0_init(uint32_t);
void uart0_enable_rx_int();
void uart1_init(uint32_t);
void uart1_enable_rx_int();

void uart1_transmit(char data);
char uart1_receive();
void uart1_transmit_string(char *);

void uart0_transmit(char data);
char uart0_receive();
void uart0_transmit_string(char *);

#endif