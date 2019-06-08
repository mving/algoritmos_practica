#include "vectores.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(int argc, char *argv[]) {
	FILE *fi = stdin;
	FILE *fo = stdout;

	// Uso:
	if(argc == 2 && !strcmp(argv[1], "-h")) {
		printf("Uso:\n\t%s [[entrada] salida]\n", argv[0]);
		return 0;
	}

	// Si hay 3 entonces el primero es entrada:
	if(argc == 3) {
		if((fi = fopen(argv[1], "r")) == NULL) {
			fprintf(stderr, "No se pudo abrir el archivo de entrada %s\n", argv[1]);
			return 1;
		}
	}

	// Si hay al menos 1 el último es salida:
	if(argc > 1) {
		if((fo = fopen(argv[argc-1], "w")) == NULL) {
			if(fi != stdin)
				fclose(fi);
			fprintf(stderr, "No se pudo abrir el archivo de salida %s\n", argv[argc-1]);
			return 1;
		}
	}


	size_t n;
	int *v = leer_vector_texto(&n, fi);

	// No lo necesitamos más.
	if(fi != stdin)
		fclose(fi);

	if(v == NULL) {
		if(fo != stdout)
			fclose(fo);

		fprintf(stderr, "No hay memoria suficiente\n");
		return 1;
	}

	escribir_vector_texto(v, n, fo);

	if(fo != stdout)
		if(fclose(fo) == EOF) {
			fprintf(stderr, "Hubo algun error escribiendo archivo de salida\n");
			return 1;
		}

	free(v);


	/*
	Preferimos manejar primero los argumentos, luego cargar el vector en
	memoria y finalmente escribirlo.

	Esto separa: Entrada, procesamiento, salida.

	Para evitar pisar el archivo de salida si no hubiera memoria podría
	reordenarse en 1) Abrir archivo entrada, 2) Leer entrada, 3) Abrir
	salida, 4) Escribir salida.
	*/


	return 0;
}

