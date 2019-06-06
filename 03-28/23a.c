#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool es_bisiesto(int agno) {
	if(agno % 4)
		return false;

	if(! agno % 400)
		return true;

	return agno % 100 != 0; // Notar un detalle: No puede hacerse "return agno % 100;" porque si bien cualquier entero tiene un valor de verdad, sÃ³lo 1 es la etiqueta true del tipo bool.
	/*if(agno % 100 != 0)
		return true;
	return false;*/
}

int dias_en_mes(int mes, int agno) {
	if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
		return 31;

	if(mes == 2) {
/*		if(es_bisiesto(agno))
			return 29;
		return 28;*/
		return es_bisiesto(agno) ? 29 : 28;
	}

	return 30;
}

int dias_en_mes_(int mes, int agno) {
	int dias[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if(mes == 2)
		return es_bisiesto(agno) ? 29 : 28;

	return dias[mes - 1];
}

bool es_fecha_valida(int dia, int mes, int agno) {
	if(mes < 1 || mes > 12)
		return false;

	if(dia < 1 || dia > dias_en_mes(mes, agno))
		return false;

	return true;
}
