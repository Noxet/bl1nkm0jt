/**
 * @file blinkmojt.c
 * @author Geo, Knalle
 * @date 11 November 2019
 */ 


#include "blinkenmojt.h"
#include "mcp23s17.h"	/* for mcp_write_to_reg() */
#include "fonts.h"

char bitmap[MAX_MSG_LEN*6 + 10];

extern volatile uint8_t col0;

/** @brief	Converts given ASCII string to bitmap for
 *			7x15 LED array matrix.
 *
 *  @param	*rx_msg The pointer to message
 *			(char array in ASCII) address.
 *  @return	led_bitmap The data map for LED display.
 */
led_struct blinkenmojt_conv_msg(unsigned char *rx_msg) 
{	
	memset(bitmap, 0, strlen(bitmap));
	led_struct led_bitmap;

	uint8_t msg_size = strlen(rx_msg);	
	uint16_t letter_index;

	for (int i = 0; i < msg_size; i++)
	{

		letter_index = (rx_msg[i] - 32)*5;
		
		/* Create 10 columns filled with 0s (empty) at the start */
		if (i == 0)
		for (int k = 0; k < 10; k++)
		{
			bitmap[k] = 0x00;
		}
		
		/* Inserts letter's LED display values in to array */
		for (int j = 0; j < 5; j++) {
			bitmap[10 + i*(5+1) + j] = font[letter_index + j];
		}
		/* End with spacing */
		bitmap[10 + i*(5+1) + 5] = 0x00;
	}

	led_bitmap.bitmap_len = ((msg_size)*6)+10;
	led_bitmap.led_msg = bitmap;

	return led_bitmap;
}


/** @brief	Turns on LEDs in a given row and column for a brief time.
 *
 *  @param	led_bitmap Bitmap of LED message.
 *  @param	col_0 The index for the column in led_bitmap which will
 *			be placed at the first column in the physical LED array matrix.
 *  @return Void.
 */
void blinkenmojt_display_msg(led_struct led_bitmap, volatile uint8_t col_0) 
{				
	uint16_t cols = led_bitmap.bitmap_len;
	static uint8_t row = 0;
	/* Set all of the MCP's PORTA (GPA) and PORTB (GPB) pins as input */
	mcp_write_to_reg(IODIRA, 0xff);
	mcp_write_to_reg(IODIRB, 0xff);
	
	/* Set column values for a selected row, changes 15 bits */
	mcp_write_to_reg(GPIOA,	  (((led_bitmap.led_msg[col_0 % cols] & (1 << row))/(1 << row)) << 0)
							 |(((led_bitmap.led_msg[(col_0 + 1)   % cols] & (1 << row))/(1 << row)) << 1)
							 |(((led_bitmap.led_msg[(col_0 + 2)   % cols] & (1 << row))/(1 << row)) << 2)
							 |(((led_bitmap.led_msg[(col_0 + 3)   % cols] & (1 << row))/(1 << row)) << 3)
							 |(((led_bitmap.led_msg[(col_0 + 4)   % cols] & (1 << row))/(1 << row)) << 4)
							 |(((led_bitmap.led_msg[(col_0 + 5)   % cols] & (1 << row))/(1 << row)) << 5)
							 |(((led_bitmap.led_msg[(col_0 + 6)   % cols] & (1 << row))/(1 << row)) << 6)
							 |(((led_bitmap.led_msg[(col_0 + 7)   % cols] & (1 << row))/(1 << row)) << 7));
							 
							 
	mcp_write_to_reg(GPIOB,(((led_bitmap.led_msg[(col_0 + 8)  % cols] & (1 << row))/(1 << row)) << 0)
							 |(((led_bitmap.led_msg[(col_0 + 9)  % cols] & (1 << row))/(1 << row)) << 1)
							 |(((led_bitmap.led_msg[(col_0 + 10) % cols] & (1 << row))/(1 << row)) << 2)
							 |(((led_bitmap.led_msg[(col_0 + 11) % cols] & (1 << row))/(1 << row)) << 3)
							 |(((led_bitmap.led_msg[(col_0 + 12) % cols] & (1 << row))/(1 << row)) << 4)
							 |(((led_bitmap.led_msg[(col_0 + 13) % cols] & (1 << row))/(1 << row)) << 5)
							 |(((led_bitmap.led_msg[(col_0 + 14) % cols] & (1 << row))/(1 << row)) << 6));
							 
	/* Turns on selected row, by opening 1 port at once for ULN2004 */
	ROW_PORT = (1 << row);
	
	/* Set all of the MCP23S17 PORTA (GPA) and PORTB (GPB) pins as output */
	mcp_write_to_reg(IODIRA, 0x00);
	mcp_write_to_reg(IODIRB, 0x00);
	
	/* Increment row by 1 (mod 7)*/
	row = (row + 1) % 7;
}