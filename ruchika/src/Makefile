CC =gcc
CFLAGS=
LIB=

main: main.o code.o
	gcc main.o code.o -o main

main.o:
	gcc -c main.c

code.o: code.c
	gcc -c code.c

run:
	./main