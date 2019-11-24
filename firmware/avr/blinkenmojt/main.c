/*
 * BlinkTest3.c
 *
 * Created: 2019-11-06 03:48:49
 * Author : ETF
 */ 


#include <avr/io.h>
#include <avr/interrupt.h>
#include <string.h>
#include "blinkenmojt.h"
#include "components/timer0.h"
#include "components/spi.h"
#include "mcp23s17.h"
#include "components/uart.h"

// Receive msg to display
#define STX		0x02	// Start of text
#define ETX		0x03	// End of text
#define ACK		0x06	// Acknowledgment

#define RX_MSG	0xAA
#define RX_DONE	0xBB
#define IDLE	0xCC

volatile uint16_t ovf_cnt;
volatile uint8_t timer0_flag;
volatile uint8_t col0;

unsigned char *disp_msg;

volatile unsigned char rx0_data;
volatile uint8_t state = IDLE;
volatile uint8_t msg_index = 0;
volatile uint8_t new_msg = FALSE;
volatile unsigned char the_msg[MAX_MSG_LEN];

led_struct led_data;

int main(void)
{
	spi_master_init();
	spi_slave_init();
	timer0_init();
	uart0_init(9600);
	uart0_enable_rx_int();
	initial_message();

	/* Pins towards ULN2004 as output */
	ROW_DDR = 0xff;
	/* Enable global interrupt */
	sei();	

    while (1) 
    {	
		if (new_msg == TRUE) {
			new_msg = FALSE;
			/* Reset index of the first column */
			col0 = 0;
			memset(led_data.led_msg,0,(MAX_MSG_LEN*6 + 10));
			led_data = blinkenmojt_conv_msg((unsigned char *)the_msg);		// FIXED (unsigned char *)	
			// Has to reset the_msg array when done with it
			memset((unsigned char *)the_msg, 0, strlen(the_msg));
		}
		if (timer0_flag == 1) { 
			timer0_flag = 0;
			blinkenmojt_display_msg(led_data, col0);
		}
    }
}


ISR(TIMER0_OVF_vect) 
{
	ovf_cnt++;

	if (ovf_cnt % 1 == 0)
		timer0_flag = 1;

	if (ovf_cnt % 30 == 0) {
		ovf_cnt = 0;
		col0++;
	}
}

ISR(USART0_RX_vect) {

	rx0_data = UDR0;
	
	switch (state) {
		case IDLE:
			if (rx0_data == STX) {
				state = RX_MSG;
				msg_index = 0;
			}
			break;
		
		case RX_MSG:
			if (rx0_data == STX) {
				msg_index = 0;
			} else if (rx0_data == ETX) {
				state = IDLE;
				the_msg[msg_index] = '\0';
				new_msg = TRUE;
				uart0_transmit_string(the_msg);
			} else if (msg_index < 63) {
				the_msg[msg_index++] = rx0_data;
			} else {
				// To not write data outside of array.
			}
			break;

	}
}

void initial_message()
{	
	unsigned char initial_msg[6] = {'P', 'W', 'N', 'E', 'D','\0'};	// WHY '\0'???? ASK NOXET

	col0 = 0;
	led_data = blinkenmojt_conv_msg(initial_msg);
}