/*
 * timer0.c
 *
 * Created: 2019-11-04 23:15:23
 *  Author: ETF
 */ 


#include "timer0.h"

 void timer0_init() {
	TCCR0B  |= (1 << CS01) | (1 << CS00);	// (64/8e6) * 256 s = 2 ms
	TIMSK0  |= (1 << TOIE0);				// Enable timer overflow interrupt
 }