#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>
#include <stdbool.h>

struct vector;
typedef struct vector vector_t;

typedef void (*vector_destructor_t)(void *);

vector_t *vector_crear(size_t n);

//void vector_destruir(vector_t *v, void (*destructor)(void *));
void vector_destruir(vector_t *v, vector_destructor_t destructor);

bool vector_guardar(vector_t *v, size_t i, void *val);
void *vector_leer(const vector_t *v, size_t i);
bool vector_redimensionar(vector_t *v, size_t n);
size_t vector_tamagno(const vector_t *v);

#endif
