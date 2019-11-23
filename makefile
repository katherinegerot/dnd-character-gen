CC=gcc
CFLAGS=-Wall -std=gnu99 -lm
DEPS = roll_utils.h output_utils.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

dndmake: roll_utils.o character_driver.o output_utils.o
	$(CC) -o dndmake character_driver.o roll_utils.o output_utils.o
