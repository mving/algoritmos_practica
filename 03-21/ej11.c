#include <stdio.h>

#define TABLA_DEL 5
#define CANTIDAD 10

int main(void) {
	for(int i = 1; i <= CANTIDAD; i++) {
		printf("%d;%d\n", i, i * TABLA_DEL);
	}

	return 0;
}
