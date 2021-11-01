CC = gcc
CFLAGS =
LIB =

all: main
sgs_clib_strlen:
	$(CC) $(CFLAGS) -c strlen.c

main:sgs_clib_strlen
	$(CC) $(CFLAGS) strlen.o main.c -o main

run:
	./main
