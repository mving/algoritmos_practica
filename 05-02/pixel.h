#ifndef PIXEL_H
#define PIXEL_H

typedef unsigned char color_t;

struct pixel {
	color_t r, g, b;
};

typedef struct pixel pixel_t;

void pixel_aclarar(pixel_t *p, float cantidad);
pixel_t pixel_mezclar(const pixel_t *a, const pixel_t *b);

#endif
