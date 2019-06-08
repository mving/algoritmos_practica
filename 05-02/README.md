 Gente,


   Les envío el proyecto desarrollado hoy en clase.

   Para compilar cada uno de los .c:

gcc -Wall -pedantic -std=c99 -c imagen.c

   Luego se pueden enlazar todos los .o, por ejemplo, para la versión en castellano:

gcc main.o imagen.o pixel.o spanish.o -o aplicacion_es

   Si quisieran compilar definiendo el modo debug:

gcc -Wall -pedantic -std=c99 -c main.c -DDEBUG

   Como ya dijimos, la clase que viene vamos a automatizar el proceso de compilación utilizando Makefile.

   En la web de la materia tienen otro ejemplo similar que hice hace 10 años y no revisé de vuelta (y soy poco creativo, también era sobre imágenes), está como "ejemplo de makefile" en la sección de material y en esa misma sección tienen el apunte que cubre TODO lo que pueden necesitar saber alguna vez en la vida sobre cómo compilar bibliotecas que se llama "fases de compilación".


   Está colgado el enunciado del TP1 en el sitio de la materia (última edición hace un par de minutos, nada importante, cambios cosméticos).

   La fecha de entrega del TP1 será el domingo 19/5.

   Por razones obvias los ejercicios obligatorios son correlativos al TP, así que tienen que tenerlos aprobados a todos antes para que les corrijamos el trabajo práctico.


   El parcialito 2 lo vamos a tomar el lunes 13/5 en el horario de la teórica. Van a entrar los temas de punteros, memoria dinámica  y estructuras. De más está decir que es imposible que excluyamos los temas del parcialito 1, así que van a tener que saber hacer funciones, estructurar la lógica de control, cadenas de caracteres, etc. No vamos a hacer ejercicios puntuales de eso pero obviamente va a verse de forma tangencial.


