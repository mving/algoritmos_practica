// 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_STR 256

int main(void) {
	char aux[MAX_STR];

	printf("Ingrese un numero positivo: ");
	fgets(aux, MAX_STR, stdin);

	float n = atof(aux);

	if(n < 0) {
		fprintf(stderr, "Numero invalido\n");
		return 1;
	}

	double raiz = sqrt(n);
	printf("La raiz de %f es %f\n", n, raiz);

	return 0;
}
