#include <stdio.h>

#include "imagen.h"
#include "mensajes.h"

int stat() {
	static int i = 0;
	return i++;
}

int main() {
	printf("%s", mensajes[MSG_HOLA]);
	imagen_t *im;
	im = imagen_crear(640, 480);
#ifdef DEBUG
	printf("La imagen fue creada\n");
#endif
	/* ... */

	imagen_destruir(im);

	printf("%d\n", stat());
	printf("%d\n", stat());
	printf("%d\n", stat());
	printf("%d\n", stat());

	printf("%s", mensajes[MSG_GRACIAS]);

	return 0;
}

