#include <stdio.h>
#include <stdint.h>
#include <limits.h> // CHAR_BIT: Cantidad de bits en un byte.
#include <stdbool.h>


bool escribir_little_endian(uint32_t n, FILE *f) {
	// En little endian 0xAABBCCDD se almacena DD CC BB AA

	for(size_t i = 0; i < sizeof(uint32_t); i++) {
		unsigned char byte = (n >> i * CHAR_BIT) & 0xFF;
		fwrite(&byte, 1, 1, f);
	}

	return true;
}

bool es_little_endian() {
	uint32_t n = 1;
	char *p = (char *)&n;

	// Según lo anterior 0x00000001 se almacena 01 00 00 00
	return p[0] == 1;
}


int main(void) {
	printf("La plataforma esta %ses little endian\n", es_little_endian() ? "" : "no ");

	return 0;
}

