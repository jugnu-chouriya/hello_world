CC= gcc
CFLAGS=
LIB=

all:main

stringlen:
	$(CC) $(CFLAGS) -c stringlen.c

main:stringlen
	$(CC) $(CFLAGS) stringlen.o main.c -o main

run:
	.\main.exe