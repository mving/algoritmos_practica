#include "vectores.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ARCHIVO_BINARIO "vector.bin"

int main() {
	FILE *f;

	// Leemos un archivo de stdin:
	size_t n;
	int *v = leer_vector_texto(&n, stdin);
	if(v == NULL)
		return 1;


	// Escribimos en binario:
	if((f = fopen(ARCHIVO_BINARIO, "wb")) == NULL) {
		free(v);
		return 1;
	}

	escribir_vector_binario(v, n, f);

	fclose(f);


	free(v);


	// Leemos en binario:
	if((f = fopen(ARCHIVO_BINARIO, "rb")) == NULL)
		return 1;

	v = leer_vector_binario(&n, f);

	fclose(f);

	if(v == NULL)
		return 1;


	// Imprimimos en modo texto:
	escribir_vector_texto(v, n, stdout);

	free(v);


	return 0;
}

