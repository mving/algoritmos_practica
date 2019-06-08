#include "vectores.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_STR 100
#define PAQUETE 100

bool escribir_vector_texto(int *v, size_t n, FILE *f) {
	for(size_t i = 0; i < n; i++)
		fprintf(f, "%d\n", v[i]);

	// Podríamos verificar que fprintf() > 0 mientras iteramos.
	return true;
}

int *leer_vector_texto(size_t *n, FILE *f) {
	char aux[MAX_STR];

	int *v = NULL;
	*n = 0;

	while (fgets(aux, MAX_STR, f) != NULL) {
		int *auxv = realloc(v, sizeof(int) * (*n+1));
		if(auxv == NULL) {
			free(v);
			return NULL;
		}
		v = auxv;

		char *p;
		v[(*n)++] = strtol(aux, &p, 10);
		if(*p != '\n') {
			free(v);
			return NULL;
		}
	}

	return v;
}

bool escribir_vector_binario(int *v, size_t n, FILE *f) {
	return fwrite(v, sizeof(int), n, f) == n;
}

int *leer_vector_binario(size_t *n, FILE *f) {
	int *v = malloc(sizeof(int) * PAQUETE);
	*n = 0;

	size_t leidos;
	while((leidos = fread(v + *n, sizeof(int), PAQUETE, f)) == PAQUETE) {
		*n += PAQUETE;

		int *aux = realloc(v, sizeof(int) * (*n + PAQUETE));
		if(aux == NULL) {
			free(aux);
			return NULL;
		}
		v = aux;
	}

	*n += leidos;
	return v;
}

