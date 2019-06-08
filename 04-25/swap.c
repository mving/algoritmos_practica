#include <stdio.h>

// La función swap recibe dos punteros a enteros a y b
// e invierte el contenido apuntado por a por el apuntado
// por b.
void swap(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main() {
	int x0 = 8;
	int x1 = 5;

	if(x0 > x1) {
		swap(&x0, &x1);
	}

	printf("%d %d\n", x0, x1);

	return 0;
}

