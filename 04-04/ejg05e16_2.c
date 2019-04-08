#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR 256

int atoi(const char s[]) {
	// FIXME: Esta función sólo anda para positivos
	int n = 0;
	for(int i = 0; s[i] != '\0' && isdigit(s[i]); i++) {
		int digito = s[i] - '0';

		n *= 10;
		n += digito;
	}
	return n;
}


int main() {
	char aux[MAX_STR];
	while(fgets(aux, MAX_STR, stdin))
		printf("%d\n", atoi(aux));

	return 0;
}
