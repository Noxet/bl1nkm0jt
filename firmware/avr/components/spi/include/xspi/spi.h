#ifndef SPI_H_
#define SPI_H_

#include <avr/io.h>
// SPI
#define SPI_DDR		DDRB
#define SPI_PORT	PORTB
#define SS			PINB4
#define MOSI		PINB5
#define SCK			PINB7

void spi_master_init();
void spi_master_transmit_byte(char data);
void spi_master_transmit(unsigned char addr, unsigned char data);
void spi_set_cs_low();
void spi_set_cs_high();

#endif