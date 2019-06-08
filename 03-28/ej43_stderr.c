#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main(void) {
	int segundos;

	char cadena[MAX];
	printf("Ingrese un numero de segundos: ");
	fgets(cadena, MAX, stdin);
	segundos = atoi(cadena);

	if(segundos < 0) {
		fprintf(stderr, "El numero no puede ser negativo\n");
		return EXIT_FAILURE;
	}

	int s = segundos % 60;
	segundos /= 60;
	int m = segundos % 60;
	int h = segundos / 60;

	printf("%dh %d' %d\"\n", h, m, s);

	return EXIT_SUCCESS;
}
