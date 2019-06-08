#include "lista.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comparar_enteros(const void *a, const void *b) {
	int *ia = (int *)a;
	int *ib = (int *)b;

	return *ia - *ib;
}

int comparar_cadenas(const void *a, const void *b) {
	return strcmp((const char *)a, (const char *)b);
}

int comparar_primera_letra(const void *a, const void *b) {
	return strncmp((const char *)a, (const char *)b, 1);
}

int main(void) {
	lista_t *l;

	// No chequeamos ningún pedido de memoria para hacer más legible el ejemplo.

	puts("Ej1: Lista de punteros a enteros estaticos");

	int vector[] = {1, 2, 3, 4, 5};

	l = lista_crear();

	for(size_t i = 0; i < 5; i++)
		lista_insertar_comienzo(l, vector + i);

	int b = 6;
	printf("Busco el %d...\n", b);
	int *d = lista_buscar(l, &b, comparar_enteros);
	if(d != NULL)
		printf("Se encontro: %d\n", *d);
	else
		puts("No lo encontro");

	lista_destruir(l, NULL);


	puts("Ej2: Lista de cadenas estaticas");

	l = lista_crear();

	lista_insertar_final(l, "hola");
	lista_insertar_final(l, "que");
	lista_insertar_final(l, "tal");
	lista_insertar_final(l, "trompeta");

	puts("Busco 't' como primera letra...");
	char *s = lista_buscar(l, "t", comparar_primera_letra);
	if(s)
		printf("Lo encontro: %s\n", s);
	else
		puts("No lo encontro");

	puts("Busco \"hola\"...");
	s = lista_buscar(l, "hola", comparar_cadenas);
	if(s)
		printf("Lo encontro: %s\n", s);
	else
		puts("No lo encontro");


	lista_destruir(l, NULL);


	puts("Ej3: Lista de punteros a enteros dinamicos");

	l = lista_crear();

	int *pi;
	for(size_t i = 0; i < 10; i++) {
		pi = malloc(sizeof(int));
		*pi = i;
		lista_insertar_comienzo(l, pi);
	}

	pi = lista_extraer_primero(l);
	printf("Saque el %d\n", *pi);
	free(pi);

	pi = lista_extraer_primero(l);
	printf("Saque el %d\n", *pi);
	free(pi);

	lista_destruir(l, free);


	return 0;
}

