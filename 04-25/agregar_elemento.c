#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/*
Recibe un puntero v a un vector dinámico ordenado de n elementos e
inserta el elemento nuevo quedando ordenado actualizando
el valor de n. Si la función
puede insertar devuelve true, false en caso contrario.
*/
bool agregar_elemento(int **v, size_t *n, int nuevo) {
	int *aux;

	aux = realloc(*v, sizeof(int) * (*n + 1));
	if(aux == NULL)
		return false;
	*v = aux;

	size_t i;
	for(i = 0; i < *n; i++)
		if(nuevo < (*v)[i])
			break;

	for(size_t j = *n; j > i; j--) {
		(*v)[j] = (*v)[j - 1];
	}

	(*v)[i] = nuevo;
	(*n)++;

	return true;
}

/*
Libera un vector dinámico de n elementos.
*/
void destruir_vector(int *v, size_t n) {
	free(v);
}

int main() {
	int *v = NULL;
	size_t n = 0;

	for(size_t i = 0; i < 10; i++) {
		int elem = rand() % 1000;
		printf("Agregamos %d\n", elem);
		agregar_elemento(&v, &n, elem);
	}

	for(size_t i = 0; i < n; i++)
		printf("v[%zd] = %d\n", i, v[i]);

	destruir_vector(v, n);

	return 0;
}

