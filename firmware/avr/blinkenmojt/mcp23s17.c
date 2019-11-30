/** @file mcp23s17.c
 * @author Geo
 * @author Knalle
 * @date 11 November 2019
 */ 

#include "mcp23s17.h"

/** @brief	Initializes MCP23S17 by reseting and
 *			setting 16 IO pins as output.
 */
void mcp23s17_init(void)
{
	
	/* Set all of the MCP23S17's PORTA (GPA) pins as output */
	spi_master_transmit_byte(MCP_OPCODE | MCP_WRITE);
	spi_master_transmit_byte(IODIRA);
	spi_master_transmit_byte(0x00);

	/* Set all of the MCP23S17's PORTB (GPB) pins as output */
	spi_master_transmit_byte(MCP_OPCODE | MCP_WRITE);
	spi_master_transmit_byte(IODIRB);
	spi_master_transmit_byte(0x00);
	
	/* Reset output on port A */
	spi_master_transmit_byte(MCP_OPCODE | MCP_WRITE);
	spi_master_transmit_byte(GPIOA);
	spi_master_transmit_byte(0x00);
	
	/* Reset output on port B */
	spi_master_transmit_byte(MCP_OPCODE | MCP_WRITE);
	spi_master_transmit_byte(GPIOB);
	spi_master_transmit_byte(0x00);

}

/** @brief	Writes in to MCP23S17's register.
 *	@param	reg_addr Writes to selected register.
 *	@param	data	The byte written in to register.
 */
void mcp_write_to_reg(char reg_addr, char data) {
	
	spi_set_cs_low();
	spi_master_transmit_byte(MCP_OPCODE | MCP_WRITE);
	spi_master_transmit_byte(reg_addr);
	spi_master_transmit_byte(data);
	spi_set_cs_high();
	
}
