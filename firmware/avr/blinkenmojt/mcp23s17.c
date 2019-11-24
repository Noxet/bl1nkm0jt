#include "mcp23s17.h"
#include "xspi/spi.h"


void mcp23s17_init(void)
{
	
	/* Set all of the Slave's PORTA (GPA) pins as output */
	spi_master_transmit_byte(MCP_OPCODE | MCP_WRITE);
	spi_master_transmit_byte(IODIRA);
	spi_master_transmit_byte(0x00);

	/* Set all of the Slave's PORTB (GPB) pins as output */
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


void mcp_write_to_reg(char reg_addr, char data) {
	
	spi_set_cs_low();
	spi_master_transmit_byte(MCP_OPCODE | MCP_WRITE);
	spi_master_transmit_byte(reg_addr);
	spi_master_transmit_byte(data);
	spi_set_cs_high();
	
}
