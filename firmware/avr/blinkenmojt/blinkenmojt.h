/** @file blinkm0jt.h
 * @author Geo
 * @author Knalle
 * @date 11 November 2019
 */ 

#include "xspi/spi.h"
#include "mcp23s17.h"	/* for mcp_write_to_reg() */

#ifndef BLINKM0JT_H_
#define BLINKM0JT_H_

#include <string.h>
#include "fonts.h"

/** Maximal message length (in symbols) */
#define MAX_MSG_LEN		64

// ROWS (ULN2004)
/** Data direction register for pins connected to ULN2004. */
#define ROW_DDR DDRA
/** Port register for pins connected to ULN2004. */
#define ROW_PORT PORTA
#define ROW0 PINA0
#define ROW1 PINA1
#define ROW2 PINA2
#define ROW3 PINA3
#define ROW4 PINA4
#define ROW5 PINA5
#define ROW6 PINA6
/** This pin can be used for debugging. */
#define TEST PINA7

// Generic stuff
#define TRUE	1
#define FALSE	0

/** LED bitmap data structure*/
typedef struct led_struct{
	uint16_t bitmap_len;
	unsigned char *led_msg;
} led_struct;


led_struct blinkenmojt_conv_msg(unsigned char*);
void blinkenmojt_display_msg(led_struct, volatile uint8_t);
void initial_message();

#endif /* BLINKM0JT_H_ */



