#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM_BLOQUE 10
#define TAM_INICIAL 5
#define FACT_CRECIMIENTO 1.5

/*
Recibe una cadena de caracteres s y devuelve una copia dinámica
de la misma o NULL en caso de falla.
*/
char *strdup(const char *s) {
	char *n = malloc(strlen(s) + 1);
	if(n == NULL)
		return NULL;

	strcpy(n, s);

	return n;
}

/*
Recibe una cadena de caracteres s y devuelve una copia dinámica
de la misma o NULL en caso de falla.
*/
char *strdup2(const char *s) {
	size_t len = strlen(s) + 1;

	char *n = malloc(len);

	if(n == NULL)
		return NULL;

	memcpy(n, s, len);

	return n;
}

/*
Lee de stdin hasta '\n' y retorna una cadena dinámica con el contenido.
En caso de falla devuelve NULL. No guarda el '\n' en la cadena.
*/
char *leer_cadena() {
	// Versión con pedido de memoria lineal.
	// Para una cadena de longitud n:
	//	Hace: n / TAM_BLOQUE pedidos de memoria.
	//	Derrocha: Hasta TAM_BLOQUE - 1 bytes.
	char *s;
	int c;
	size_t i = 0;
	size_t pedido = TAM_BLOQUE;

	// sizeof(char) == 1
	if((s = malloc(TAM_BLOQUE)) == NULL)
		return NULL;

	while((c = getchar()) != EOF && c != '\n') {
		if(i + 2 >= pedido) {
			// Necesitamos 2 bytes adicionales: Uno para c
			// otro para el '\0'
			char *aux = realloc(s, pedido + TAM_BLOQUE);
			if(aux == NULL) {
				free(s); // Debemos liberar s.
				return NULL;
			}
			s = aux;
			pedido += TAM_BLOQUE;
		}
		s[i++] = c;
	}
	s[i] = '\0';

	// Acá si quisiéramos podríamos reajustar s a i+1 bytes.

	return s;
}

/*
Lee de stdin hasta '\n' y retorna una cadena dinámica con el contenido.
En caso de falla devuelve NULL. No guarda el '\n' en la cadena.
*/
char *leer_cadena2() {
	// Versión con pedido de memoria exponencial.
	// Para una cadena de longitud n:
	//	Hace: log_f(n) pedidos de memoria (con f = FACT_CRECIMIENTO)
	//	Derrocha: Hasta n * FACT_CRECIMIENTO bytes
	//	(En en el peor momento, después los libera.)
	char *s;
	int c;
	size_t i = 0;
	size_t pedido = TAM_INICIAL;

	if((s = malloc(TAM_INICIAL)) == NULL)
		return NULL;

	while((c = getchar()) != EOF && c != '\n') {
		if(i + 2 >= pedido) {
			char *aux = realloc(s, pedido * FACT_CRECIMIENTO);
			if(aux == NULL) {
				free(s);
				return NULL;
			}
			s = aux;
			pedido *= FACT_CRECIMIENTO;
		}
		s[i++] = c;
	}
	s[i] = '\0';

	// Liberamos la memoria que pedimos de más:
	char *aux = realloc(s, i + 1);
	if(aux == NULL) {
		// No había memoria para aux, pero todavía tenemos s:
		return s;
	}
	s = aux;

	return s;
}

int main() {
	char *s;

	s = strdup("Ingrese dos cadenas: ");
	printf("%s", s);
	free(s);

	s = leer_cadena();
	puts(s);
	free(s);

	s = leer_cadena2();
	puts(s);
	free(s);

	return 0;
}

