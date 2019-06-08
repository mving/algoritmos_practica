#include <stdio.h>

#define CANTIDAD 10

int main(void) {
	// Otra forma: for(int num = 1; num <= 10; num++);
	int num = 1;
	while(num <= 10) {
		printf("Tabla del %d\n", num);
		for(int i = 1; i <= CANTIDAD; i++) {
			printf("%d;%d\n", i, i * num);
		}
		num++;
	}

	return 0;
}
