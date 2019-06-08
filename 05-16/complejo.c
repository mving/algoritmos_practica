#include <math.h>
#include <stdlib.h>

#include "complejo.h"

struct complejo {
	float real, imag;
};

complejo_t *complejo_crear(float real, float imag) {
	complejo_t *c = malloc(sizeof(complejo_t));
	if(c == NULL)
		return NULL;

	c->real = real;
	c->imag = imag;

	return c;
}

complejo_t *complejo_desde_mod_arg(float mod, float arg) {
	return complejo_crear(mod * cos(arg), mod * sin(arg));
}

void complejo_destruir(complejo_t *c) {
	free(c);
}

complejo_t *complejo_sumar(const complejo_t *a, const complejo_t *b) {
	return complejo_crear(a->real + b->real, a->imag + b->imag);
}

/*
complejo_t *complejo_multiplicar(const complejo_t *a, const complejo_t *b) {
	return complejo_desde_mod_arg(
		complejo_modulo(a) * complejo_modulo(b),
		complejo_argumento(a) + complejo_argumento(b)
	);
}*/

complejo_t *complejo_multiplicar(const complejo_t *a, const complejo_t *b) {
	return complejo_crear(a->real * b->real - a->imag * b->imag, a->real * b->imag + a->imag * b->real);
}

float complejo_modulo(const complejo_t *c) {
	return sqrt(c->real * c->real + c->imag * c->imag);
}

float complejo_argumento(const complejo_t *c) {
	return atan2(c->imag, c->real);
}
