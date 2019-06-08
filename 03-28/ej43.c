#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main(void) {
	int segundos;

	char cadena[MAX];
	while(fgets(cadena, MAX, stdin)) {
		segundos = atoi(cadena);

		if(segundos >= 0) {
			int s = segundos % 60;
			segundos /= 60;
			int m = segundos % 60;
			int h = segundos / 60;

			printf("%dh %d' %d\"\n", h, m, s);
		}
	}

	return EXIT_SUCCESS;
}
