#include "spi.h"


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

void spi_slave_init(void)
{
	/* Enable the MCP23S17 address pins. Disable sequential operation */
	spi_master_transmit(IOCONA, (1<<HAEN)|(1<<SEQOP));
	/* Set all of the Slave's PORTA (GPA) pins as output */
	spi_master_transmit(IODIRA, 0x00);
	/* Set all of the Slave's PORTB (GPB) pins as output */
	spi_master_transmit(IODIRB, 0x00);
	/* Reset output values */
	spi_master_transmit(GPIOA, 0x00);
	spi_master_transmit(GPIOB, 0x00);
}


void spi_master_transmit(unsigned char addr, unsigned char data)
{
	/* Start communication */
	SPI_PORT &=~ (1<<SS);
	/* Tell slave to write data in to register */
	SPDR = SPI_SLAVE_ADDR | SPI_SLAVE_WRITE;
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