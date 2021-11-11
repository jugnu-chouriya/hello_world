CC = gcc 
CFLAGS = 
LIB = 

all: main 

2darray:
	$(CC) $(CFLAGS) -c 2darray.c

main:2darray
	$(CC) $(CFLAGS) 2darray.o main.c -o main

run:
	./main.exe

clean:
	rm main.exe

