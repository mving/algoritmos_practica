otra forma de "if"
return es_bisiesto(year) ? 29 : 28;

ejercicio 23 con vectores

int dias_en_mes(int mes, int year){

int dias[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
if (mes == 2)
  return es_bisiesto(year) ? 29 : 28;

return dias[mes -1];
}

etiquetas definidas en la libreria stdlib.h
return EXIT_SUCCESS;

./file > et.txt guarda la salida del stdout

fprintf(stderr,"numero invalido")
return EXIT_FAILURE;

./programa < num.txt ingresa por stdin lo que esta en num.txt


ctrl d terminar programa
ctrl c matar programa
.
