#ifndef COMPLEJO_H
#define COMPLEJO_H

struct complejo;
typedef struct complejo complejo_t;

complejo_t *complejo_crear(float real, float imag);
// Crea un complejo desde su modulo y su argumento en radianes.
complejo_t *complejo_desde_mod_arg(float mod, float arg);
void complejo_destruir(complejo_t *c);

// Devuelve el modulo del complejo c.
float complejo_modulo(const complejo_t *c);
float complejo_argumento(const complejo_t *c);

//void complejo_conjugar(complejo_t *c);
complejo_t *complejo_conjugado(const complejo_t *c);

float complejo_real(const complejo_t *c);
float complejo_imag(const complejo_t *c);

complejo_t *complejo_inverso(const complejo_t *c);

complejo_t *complejo_sumar(const complejo_t *a, const complejo_t *b);
//void complejo_sumar(c_t *a, const c_t *b);

#endif

