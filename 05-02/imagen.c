#include "imagen.h"
#include "pixel.h"
#include <stdlib.h>
#include <stdio.h>

const char *imagen_formatos[] = {"PNG", "JPG", "TIFF", "GIF"};

struct imagen {
	pixel_t **c;
	size_t h, w;
};

static void foo() {
	printf("Holaaaa\n");
}


bool imagen_salvar(const imagen_t *im, const char *filename, const char *fmt);

imagen_t *imagen_crear(size_t h, size_t w) {
	imagen_t *im;
	im = malloc(sizeof(imagen_t));
	if(im == NULL)
		return NULL;

	im->h = h;
	im->w = w;

	im->c = malloc(h * sizeof(pixel_t *));
	if(im->c == NULL) {
		free(im);
		return NULL;
	}

	for(size_t i = 0; i < h; i++) {
		im->c[i] = malloc(w * sizeof(pixel_t));
		if(im->c[i] == NULL) {
			/*while(i--) {
				free(im->c[i]);
			}
			free(im->c);
			free(im);*/
			im->h = i;
			imagen_destruir(im);
			return NULL;
		}
	}

	return im;
}

void imagen_destruir(imagen_t *im) {
	for(size_t i = 0; i < im->h; i++)
		free(im->c[i]);

	free(im->c);
	free(im);
}


