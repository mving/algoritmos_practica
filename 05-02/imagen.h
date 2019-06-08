#ifndef IMAGEN_H
#define IMAGEN_H

#include <stdio.h>
#include <stdbool.h>

extern const char *imagen_formatos[];

struct imagen;
typedef struct imagen imagen_t;

imagen_t *imagen_crear(size_t h, size_t w);
void imagen_destruir(imagen_t *im);

bool imagen_salvar(const imagen_t *im, const char *filename, const char *fmt);

#endif
