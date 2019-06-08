
// 1.a
void reemplazar_caracter(char *destino, const char *origen, char viejo, char nuevo) {
	size_t i;
	for(i = 0; origen[i]; i++) {
		if(origen[i] == viejo)
			destino[i] = nuevo;
		else
			destino[i] = origen[i];
	}
	destino[i] = '\0';
}

// 1.a
void reemplazar_caracter(char *destino, const char *origen, char viejo, char nuevo) {
	for(size_t i = 0; destino[i] = origen[i]; i++)
		if(destino[i] == viejo)
			destino[i] = nuevo;
}

// 1.b
char destino[MAX_STR];
reemplazar_caracter(destino, "Los alumnos", 'o', 'e');
