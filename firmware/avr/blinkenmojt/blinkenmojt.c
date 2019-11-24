/*
 * blinkmojt.c
 *
 * Created: 2019-11-11 20:34:19
 *  Author: ETF
 */ 


#include "blinkenmojt.h"
#include "fonts.h"

char bitmap[MAX_MSG_LEN*6 + 10];

led_struct blinkenmojt_conv_msg(unsigned char *rx_msg) 
{	
	memset(bitmap, 0, strlen(bitmap));
	led_struct led_bitmap;

	uint8_t msg_size = strlen(rx_msg);	
	uint16_t letter_index;

	for (int i = 0; i < msg_size; i++)
	{
		/* Make 10 empty columns at the start */
		if (i == 0)
		for (int k = 0; k < 10; k++)
		{
			bitmap[k] = 0x00;
		}
		
		letter_index = (rx_msg[i] - 32)*5;
		/* Inserts letter's LED display values in to array */
		for (int j = 0; j < 5; j++) {
			bitmap[10 + i*(5+1) + j] = font[letter_index + j];
		}
		/* End with spacing */
		bitmap[10 + i*(5+1) + 5] = 0x00;
	}

	led_bitmap.array_len = ((msg_size+1)*5)+10;
	led_bitmap.led_msg = bitmap;

	return led_bitmap;
}

void blinkenmojt_display_msg(led_struct led_bitmap, volatile uint8_t col_0) 
{				
	uint16_t cols = led_bitmap.array_len;
	static uint8_t row = 0;
	/* Set all of the Slave's PORTA (GPA) and PORTB (GPB) pins as input */
	spi_master_transmit(IODIRA, 0xff);
	spi_master_transmit(IODIRB, 0xff);
	/* Set value for Slave's PORTA and PORTB pins */
	spi_master_transmit(GPIOA,(((led_bitmap.led_msg[col_0 % cols] & (1 << row))/(1 << row)) << 0)
							 |(((led_bitmap.led_msg[(col_0 + 1)   % cols] & (1 << row))/(1 << row)) << 1)
							 |(((led_bitmap.led_msg[(col_0 + 2)   % cols] & (1 << row))/(1 << row)) << 2)
							 |(((led_bitmap.led_msg[(col_0 + 3)   % cols] & (1 << row))/(1 << row)) << 3)
							 |(((led_bitmap.led_msg[(col_0 + 4)   % cols] & (1 << row))/(1 << row)) << 4)
							 |(((led_bitmap.led_msg[(col_0 + 5)   % cols] & (1 << row))/(1 << row)) << 5)
							 |(((led_bitmap.led_msg[(col_0 + 6)   % cols] & (1 << row))/(1 << row)) << 6)
							 |(((led_bitmap.led_msg[(col_0 + 7)   % cols] & (1 << row))/(1 << row)) << 7));

	spi_master_transmit(GPIOB,(((led_bitmap.led_msg[(col_0 + 8)  % cols] & (1 << row))/(1 << row)) << 0)
							 |(((led_bitmap.led_msg[(col_0 + 9)  % cols] & (1 << row))/(1 << row)) << 1)
							 |(((led_bitmap.led_msg[(col_0 + 10) % cols] & (1 << row))/(1 << row)) << 2)
							 |(((led_bitmap.led_msg[(col_0 + 11) % cols] & (1 << row))/(1 << row)) << 3)
							 |(((led_bitmap.led_msg[(col_0 + 12) % cols] & (1 << row))/(1 << row)) << 4)
							 |(((led_bitmap.led_msg[(col_0 + 13) % cols] & (1 << row))/(1 << row)) << 5)
							 |(((led_bitmap.led_msg[(col_0 + 14) % cols] & (1 << row))/(1 << row)) << 6));
	/* Open one row only */
	ROW_PORT = (1 << row);
	/* Set all of the Slave's PORTA (GPA) and PORTB (GPB) pins as output */
	spi_master_transmit(IODIRA, 0x00);
	spi_master_transmit(IODIRB, 0x00);
	/* Increment row by 1 if it isn't 7th row */
	row = (row + 1) % 7;
	/* Reset column if it has reached its end */
	col_0 = col_0 % cols;
}