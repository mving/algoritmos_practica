CC := gcc
CFLAGS := -Wall -c -pedantic -std=c99 -g -O3
LFLAGS := -lm
INSTALL_DIR := /usr/sbin # Voy a tener que ser admin para instalar ahi

all: programa_es programa_en

main.o: main.c imagen.h mensajes.h
	$(CC) $(CFLAGS) main.c

imagen.o: imagen.c imagen.h pixel.h
	$(CC) $(CFLAGS) imagen.c

pixel.o: pixel.c pixel.h
	$(CC) $(CFLAGS) pixel.c

imagen.h: pixel.h

spanish.o: spanish.c mensajes.h
	$(CC) $(CFLAGS) spanish.c

english.o: english.c mensajes.h
	$(CC) $(CFLAGS) english.c

programa_es: main.o pixel.o imagen.o spanish.o
	$(CC) $(LFLAGS) $^ -o programa_es

programa_en: main.o pixel.o imagen.o english.o
	$(CC) $(LFLAGS) main.o pixel.o imagen.o english.o -o programa_en

clean:
	rm *.o

install: programa_es programa_en
	cp $^ $(INSTALL_DIR)

valgrind: programa_es
	valgrind --leak-check=full ./programa_es
