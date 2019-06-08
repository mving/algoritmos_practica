#ifndef VECTORES_H
#define VECTORES_H

#include <stdio.h>
#include <stdbool.h>

// Escribe el vector v de n elementos en el archivo de salida f en modo texto
bool escribir_vector_texto(int *v, size_t n, FILE *f);
// Lee y devuelve un vector de *n elementos del archivo de entrada f en modo texto
int *leer_vector_texto(size_t *n, FILE *f);

// Escribe el vector v de n elementos en el archivo de salida f en modo binario
bool escribir_vector_binario(int *v, size_t n, FILE *f);
// Lee y devuelve un vector de *n elementos del archivo de entrada f en modo binario
int *leer_vector_binario(size_t *n, FILE *f);

#endif
