#include "xuart/uart.h"

void uart0_init(uint32_t baud) {
	
	uint16_t b_rate = (F_CPU/(16*baud)) - 1;
	UCSR0B |= (1 << RXCIE0) | (1 << TXEN0) | (1 << RXEN0);
	UBRR0	= b_rate;
	
}

void uart0_enable_rx_int(){
	
	UCSR0B |= (1 << RXCIE0); 
	
}

void uart1_init(uint32_t baud) {
	
	uint16_t b_rate = (F_CPU/(16*baud)) - 1;
	UCSR1B |= (1 << RXCIE1) | (1 << TXEN1) | (1 << RXEN1);
	UBRR1	= b_rate;
	
}

void uart1_enable_rx_int(){
	
	UCSR1B |= (1 << RXCIE1);
	
}

void uart1_transmit(char data) {
	
	while (!(UCSR1A & (1 << UDRE1)));
	
	UDR1 = data;
	
}

void uart1_transmit_string(char *str) {
	
	while(*str) uart1_transmit(*str++);
	
	
}

char uart1_receive() {
	
	while (!(UCSR1A & (1 << RXC1)));
	
	return UDR1;
	
}

void uart0_transmit(char data) {
	
	while (!(UCSR0A & (1 << UDRE0)));
	
	UDR0 = data;
	
}

char uart0_receive() {
	
	while (!(UCSR0A & (1 << RXC0)));

	return UDR0;
	
}

void uart0_transmit_string(char *str) {
	
	while(*str) uart0_transmit(*str++);
	
	
}