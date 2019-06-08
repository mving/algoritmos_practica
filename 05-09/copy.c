#include <stdio.h>


int main(int argc, char *argv[]) {
	FILE *fi, *fo;

	if(argc != 3) {
		fprintf(stderr, "Uso:\n\t%s <entrada> <salida>\n", argv[0]);

		return 1;
	}

	fi = fopen(argv[1], "rb");
	if(fi == NULL) {
		fprintf(stderr, "No se pudo abrir archivo %s\n", argv[1]);
		return 1;
	}

	fo = fopen(argv[2], "wb");
	if(fo == NULL) {
		fclose(fi);
		fprintf(stderr, "No se pudo abrir el archivo %s\n", argv[2]);
		return 1;
	}

	int c;
	while((c = fgetc(fi)) != EOF) {
		fputc(c, fo);
	}

	fclose(fi);
	fclose(fo);

	return 0;
}

