#include "vector.h"

struct vector {
	void **v;
	size_t n;
};

vector_t *vector_crear(size_t n) {
	vector_t *v;

	v = malloc(sizeof(vector_t));
	if(v == NULL)
		return NULL;

	v->v = calloc(n, sizeof(void *));
	if(v->v == NULL) {
		//free(v);
		v->n = 0;
		vector_destruir(v, NULL);
		return NULL;
	}

	v->n = n;

	return v;
}

void vector_destruir(vector_t *v, void (*destructor)(void *)) {
	if(destructor != NULL)
		for(size_t i = 0; i < v->n; i++)
			if(v->v[i] != NULL)
				destructor(v->v[i]);

	free(v->v);
	free(v);
}

bool vector_guardar(vector_t *v, size_t i, void *val) {
	if(i >= v->n)
		return false;

	v->v[i] = val;
	return true;
}

void *vector_leer(const vector_t *v, size_t i) {
	if(i >= v->n)
		return NULL;

	return v->v[i];
}

/*

FIXME: ¿Qué pasa si la redimensión es para arriba?, ¿no debería poner los v->v[i] en NULL?
FIXME: ¿Qué pasa si la redimensión es para abajo?, ¿quién libera los v->v[i]?

*/
bool vector_redimensionar(vector_t *v, size_t n) {
	void **aux = realloc(v->v, n * sizeof(void *));
	if(aux == NULL)
		return false;

	v->v = aux;
	v->n = n;

	return true;
}

size_t vector_tamagno(const vector_t *v) {
	return v->n;
}
