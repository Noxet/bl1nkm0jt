/*
 *blinkm0jt.h
 *
 * Created: 2019-11-09 20:25:21
 *  Author: Christoffer
 */ 


#ifndef BLINKM0JT_H_
#define BLINKM0JT_H_

#include "spi.h"

#include <string.h>

#define MAX_MSG_LEN		64

// Generic stuff
#define TRUE	1
#define FALSE	0

// TEST pin
#define TEST PINA7

// ROWS (ULN2004)
#define ROW_DDR DDRA
#define ROW_PORT PORTA
#define ROW0 PINA0	// TEMP
#define ROW1 PINA1	// TEMP
#define ROW2 PINA2	// TEMP
#define ROW3 PINA3	// TEMP
#define ROW4 PINA4	// TEMP
#define ROW5 PINA5	// TEMP
#define ROW6 PINA6	// TEMP





// ROWS (ULN2004)
#define ROW_DDR DDRA
#define ROW_PORT PORTA
#define ROW0 PINA0	// TEMP
#define ROW1 PINA1	// TEMP
#define ROW2 PINA2	// TEMP
#define ROW3 PINA3	// TEMP
#define ROW4 PINA4	// TEMP
#define ROW5 PINA5	// TEMP
#define ROW6 PINA6	// TEMP

typedef struct led_struct{
	uint8_t array_len;
	unsigned char *led_msg;
} led_struct;


led_struct blinkenmojt_conv_msg(unsigned char*);
void blinkenmojt_display_msg(led_struct, volatile uint8_t);
void initial_message();

#endif /* BLINKM0JT_H_ */



