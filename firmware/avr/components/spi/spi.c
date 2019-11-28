#include "xspi/spi.h"


void spi_master_init(void)
{
	/* Set MOSI, SCK, SS as output */
	SPI_DDR |= (1<<MOSI)|(1<<SCK)|(1<<SS);
	/* Enable SPI, Master */
	SPCR = (1<<SPE)|(1<<MSTR);
	/* Set clock rate f_osc/2 */
	SPCR &= ~((1<<SPR0)|(1<<SPR1));
	SPCR |= (1<<SPI2X);
}


void spi_master_transmit(unsigned char addr, unsigned char data)
{
	/* Start communication */
	SPI_PORT &=~ (1<<SS);
	/* Tell slave to write data in to register */
	SPDR = 0x40 | 0x0;
	/* Wait for transmission complete */
	while(!(SPSR & (1<<SPIF)));
	/* Select register */
	SPDR = addr;
	/* Wait for transmission complete */
	while(!(SPSR & (1<<SPIF)));
	/* Send data */
	SPDR = data;
	/* Wait for transmission complete */
	while(!(SPSR & (1<<SPIF)));
	/* Stop communication */
	SPI_PORT |= (1<<SS);
}

void spi_master_transmit_byte(char data){

	SPDR = data;
	while(!(SPSR & (1<<SPIF)));
	
}

void spi_set_cs_low() {
	
	SPI_PORT &=~ (1<<SS);	
	
}

void spi_set_cs_high() {
	
	SPI_PORT |= (1<<SS);
	
}