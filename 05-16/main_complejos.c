#include <stdio.h>
#include "complejo.h"

int main(int argc, char const *argv[]) {
    complejo_t *a, *b, *c;

    a = complejo_crear(0, 1);
    b = complejo_crear(1, 0);

    c = complejo_sumar(a, b);

    printf("%f %f\n", complejo_modulo(c), complejo_argumento(c));

    complejo_destruir(a);
    complejo_destruir(b);
    complejo_destruir(c);

    return 0;
}
