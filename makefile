CC=gcc
CFLAGS=-Wall -std=gnu99 -lm
DEPS = header.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

dndmake: roll_utils.o character_driver.o io_utils.o basic_info.o
	$(CC) -o a character_driver.o roll_utils.o io_utils.o basic_info.o
