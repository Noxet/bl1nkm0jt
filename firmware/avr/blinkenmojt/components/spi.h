#ifndef SPI_H_
#define SPI_H_

#include "mcp23s17.h"
#include <avr/io.h>

// SPI
#define SPI_DDR		DDRB
#define SPI_PORT	PORTB
#define SS			PINB4
#define MOSI		PINB5
#define SCK			PINB7

void spi_master_init();
void spi_slave_init();
void spi_master_transmit(unsigned char, unsigned char);

#endif