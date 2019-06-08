#ifndef _LISTA_H_
#define _LISTA_H_

#include <stdbool.h>

struct lista;
typedef struct lista lista_t;

lista_t *lista_crear();
void lista_destruir(lista_t *l, void (*destruir_dato)(void *d));
bool lista_es_vacia(const lista_t *l);
bool lista_insertar_comienzo(lista_t *l, void *d);
bool lista_insertar_final(lista_t *l, void *d);
void *lista_extraer_primero(lista_t *l);
void *lista_buscar(const lista_t *l, const void *d, int (*cmp)(const void *a, const void *b));

#endif
