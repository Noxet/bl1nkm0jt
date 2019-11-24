/*
 * mcp23s17.h
 *
 * Created: 2019-11-10 00:27:12
 *  Author: Christoffer
 */ 


#ifndef MCP23S17_H_
#define MCP23S17_H_

// MCP23S17 REGISTERS
#define IODIRA  0x00
#define IODIRB  0x01
#define IOCONA  0x0A
#define GPPUA   0x0C
#define GPPUB   0x0D
#define GPIOA   0x12
#define GPIOB   0x13

// IOCON
#define HAEN	3
#define SEQOP	5


// MCP23S17
#define SPI_SLAVE_ADDR		0x40
#define SPI_SLAVE_WRITE		0x00
#define SPI_SLAVE_READ		0x01
// IOCON
#define HAEN	3
#define SEQOP	5// TEST pin
#define TEST PINA7

#endif /* MCP23S17_H_ */