#include <stdio.h>
#include <stdlib.h>

#define MAX_STR	1000

size_t strlen(const char s[]) {
	size_t i;

	for(i = 0; s[i]; i++);

	return i;
}

char *strcpy(char dest[], const char orig[]) {
	size_t i;
	for(i = 0; orig[i]; i++)
		dest[i] = orig[i];

	dest[i] = '\0';
	return dest;
}

char *strcpy_2(char dest[], const char orig[]) {
	for(size_t i = 0; (dest[i] = orig[i]); i++);
	return dest;
}

char *strncpy(char dest[], const char orig[], size_t n) {
	// OJO! Puede devolver una cadena mal formada!!!
	for(size_t i = 0; i < n && (dest[i] = orig[i]); i++);
	return dest;
}

char *strcat(char *dest, const char *orig) {
	size_t i;
	for(i = 0; dest[i]; i++);

	for(size_t j = 0; (dest[i] = orig[j]); i++, j++);

	return dest;
}

int main(void) {
	char dest[MAX_STR] = "hola";

	printf("strlen(%s): %zd\n", dest, strlen(dest));

	strcpy(dest, "mundo");
	printf("%s\n", dest);

	char desto[MAX_STR];
	strncpy(dest, "hola", 2);
	printf("%s\n", dest);

	strcpy(dest, "hola ");
	strcat(dest, "mundo");
	printf("%s\n", dest);

	return 0;
}
