#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VALORES 10
#define MAX_STR	256

int main(void) {
	int contadores[VALORES] = {0};

	srand(time(NULL));

	char aux[MAX_STR];
	printf("Ingrese un valor: ");
	fgets(aux, MAX_STR, stdin);
	int n = atoi(aux);

	for(int i = 0; i < n; i++) {
		int r = rand() % VALORES;

		contadores[r]++;
	}

	for(int i = 0; i < VALORES; i++) {
		printf("%ds: %4d (%.4f)\n", i, contadores[i], (float)contadores[i] / n);
	}

	return 0;
}
