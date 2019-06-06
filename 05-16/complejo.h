#ifndef COMPLEJO_H
#define COMPLEJO_H

struct complejo:
typedef struct complejo complejo_t;

complejo_t *complejo_crear(float real, float imag);

complejo_t *complejo_desde_mod_arg(float mod, float arg);

void complejo_destruir(complejo_t *c);

float complejo_modulo(const complejo_t *c);

float complejo_argumento(const complejo_t *c);

complejo_t *complejo_conjugado(const complejo_t *c);

float complejo_real(const complejo_t *c);

float complejo_imag(const complejo_t *c);

complejo_t *complejo_inverso(const complejo_t *c);

complejo_t *complejo_sumar(const complejo_t *a, const complejo_t *b);

#endif
