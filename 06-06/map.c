#include <stdio.h>

int potencia(int a) {
	return a*a;
}

void map_enteros(int *v, size_t n, int (*f)(int)) {
	for(size_t i = 0; i < n; i++)
		v[i] = f(v[i]);
}

int main(void) {
	int v[] = {1, 2, 3, 4};

	map_enteros(v, 4, potencia);

	for(size_t i = 0; i < 4; i++)
		printf("%d\n", v[i]);

	return 0;
}
