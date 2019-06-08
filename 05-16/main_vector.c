#include "vector.h"

#include <stdio.h>

int main(void) {
	vector_t *v;

	v = vector_crear(3);

	vector_guardar(v, 0, "hola");
	vector_guardar(v, 1, "que");
	vector_guardar(v, 2, "tal");

	for(size_t i = 0; i < vector_tamagno(v); i++)
		printf("%s\n", (char*)vector_leer(v, i));

	vector_destruir(v, NULL);

	v = vector_crear(10);

	for(size_t i = 0; i < 10; i++) {
		int *pi = malloc(sizeof(int));
		*pi = i;
		vector_guardar(v, i, pi);
	}

	for(size_t i = 0; i < vector_tamagno(v); i++) {
		int *pi = vector_leer(v, i);
		printf("%d\n", *pi);
	}

	vector_destruir(v, free);

	return 0;
}
