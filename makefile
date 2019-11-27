CC			= gcc
CFLAGS	= -Wall -std=gnu99 -lm -I.
DEPS 		= include/header.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

gen_character: roll_utils.o character_driver.o io_utils.o basic_info.o latex_utils.o
	$(CC) -o gen_character character_driver.o roll_utils.o io_utils.o basic_info.o latex_utils.o
