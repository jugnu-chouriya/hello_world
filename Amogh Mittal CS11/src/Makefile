CC = gcc
CFLAGS =
LIB =

all: main

hello:
	$(CC) $(CFLAGS) -c hello.c

main:hello mymath
	$(CC) $(CFLAGS) hello.o main.c -o main.exe

run:
	./main.exe

clean:
	rm main.exe