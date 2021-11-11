CC = gcc
CFLAGS =
LIB =

all: main
strlen:
	$(CC) $(CFLAGS) -c strlen.c

main:strlen
	$(CC) $(CFLAGS) strlen.o main.c -o main

run:
	./main
