/**
 * @file main.c
 * @author Geo
 * @author Knalle
 * @date 6 November 2019
 */ 


#include <avr/io.h>
#include <avr/interrupt.h>
#include <string.h>
#include "blinkenmojt.h"
#include "xtimer/timer0.h"
#include "xspi/spi.h"
#include "mcp23s17.h"
#include "xuart/uart.h"

/** UART: Start of text. */
#define STX		0x02
/** UART: End of text. */
#define ETX		0x03
/** UART: Message-receiving state. */
#define RX_MSG	0xAA
/** UART: Idle state. */
#define IDLE	0xCC

/** The counter for timer overflow interrupt. */
volatile uint16_t ovf_cnt;
/** The flag that triggers update of the next row. */
volatile uint8_t timer0_flag;
/** The index for the bitmap column which
*	is to be displayed in the first row of the physical LED matrix. */
volatile uint8_t col0;

unsigned char *disp_msg;		// IS IT USED?
/** Received data (UART). */
volatile unsigned char rx0_data;
/** Communication state (UART). */
volatile uint8_t state = IDLE;
volatile uint8_t msg_index = 0;		// MOVE inside ISR?
/** The flag that says whether new message has arrived or not. */
volatile uint8_t new_msg = FALSE;
/** Placeholder for the received new message. */
volatile unsigned char the_msg[MAX_MSG_LEN];
/** The LED bitmap data storage. */
led_struct led_data;

int main(void)
{
	spi_master_init();
	mcp23s17_init();
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
			led_data = blinkenmojt_conv_msg((unsigned char *)the_msg);
			/* Has to reset the_msg array when done with it */
			memset((unsigned char *)the_msg, 0, strlen(the_msg));
		}
		if (timer0_flag == 1) { 
			timer0_flag = 0;
			blinkenmojt_display_msg(led_data, col0);
		}
    }
}


/** @brief	TODO.
 *
 *  @param	TIMER0_OVF_vect
 */
ISR(TIMER0_OVF_vect) 
{
	ovf_cnt++;
	
	// Refresh rate
	if (ovf_cnt % 5 == 0)
		timer0_flag = 1;

	// Text speed
	if (ovf_cnt == 250) {
		ovf_cnt = 0;
		col0++;
		if (led_data.bitmap_len < col0) {
			col0 = 0;
		}
	}
}


/** @brief	TODO.
 *
 *  @param	USART0_RX_vect
 */
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

/** @brief	Displays initial message.
 *
 */
void initial_message()
{	
	unsigned char initial_msg[10] = {'O','K',',','B','O','O','M','E','R','\0'};
	/* Reset index of the first column */
	col0 = 0;
	led_data = blinkenmojt_conv_msg(initial_msg);
}