#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool es_primo(int n);

bool es_primo(int n) {
	int i = 2;
	int max = sqrt(n);
	while(i <= max) {
		if(n % i == 0)
			return false;
		i++;
	}
	return true;
}

int main(void) {
	for(int i = 1; i < 100; i++)
		if(es_primo(i))
			printf("%d\n", i);

	return 0;
}
