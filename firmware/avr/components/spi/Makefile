
CC = avr-gcc
CFLAGS = -mmcu=$(MCU) -Os -Wall -Wextra -std=gnu99 -I"include/" -DF_CPU=8000000

MCU = atmega1284

LIB = spi

.PHONY: all clean

all: $(LIB).a

$(LIB).a: $(LIB).o
	avr-ar -rc $@ $^
	avr-ranlib $@
	mv $(LIB).a lib$(LIB).a

clean:
	rm -f *.o *.a