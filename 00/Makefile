CC=gcc
CFLAGS=-Wall -std=c99 -pedantic -c
LFLAGS=
DEBUG=-g

all: c
hola.o: hola.c
	$(CC) $(CFLAGS) hola.c
c: hola.o 
	$(CC) $(DEBUG) hola.c -o c $(LFLAGS)
clean:
	rm *.o
cleanall: clean
	rm c
run: c
	./c
gdb: c
	gdb ./c
valgrind: c
	valgrind ./c
