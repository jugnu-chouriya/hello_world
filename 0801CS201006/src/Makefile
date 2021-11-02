CC= gcc
CFLAGS=
LIB=

all: addition

my_addition:
	$(CC) $(CFLAGS) -c my_addition.c

addition:my_addition
	$(CC) $(CFLAGS) my_addition.o addition.c -o addition
