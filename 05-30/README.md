 Estimados,


   Les adjunto las cosas que elaboramos durante la clase de hoy. Pasé a prolijo y expliqué varias de las cosas que dijimos oralmente.

   Para los defensores acérrimos de implementar el TDA conjunto permitiendo elementos repetidos les dejo la tarea de implementar la función que recorre cada uno de los elementos. De más está decir que no pueden imprimirse duplicados.

   Y esa es una primitiva que planteamos, menos mal que nuestro TDA no tiene una primitiva:

size_t conjunto_cantidad_de_elementos(const conjunto_t *c);

   (A veces el ahorrarse algo tan sencillo como hacer una búsqueda al insertar trae muchos dolores de cabeza después.)

   En todos los casos tienen los fuentes de MarkDown o de Octave que usamos en clase (son todos archivos de texto) y la versión PDF.


   Sobre el programita que usamos para ver los ordenamientos se llama "Sound of Sorting" (porque ya lo dije, hace unos ruiditos horribles mientra ordena). Lo pueden descargar de acá:

http://panthema.net/2013/sound-of-sorting/

   En la página también tienen un par de videos, o sea, no hace falta que se lo instalen.


   A ver si con esto les queda claro el burbujeo: https://www.youtube.com/watch?v=lyZQPjUT5B4

   (Busquen los videos de los métodos que sí vimos, están subidos todos creo.)


   Cosa que no mencioné, la stdlib.h implementa la búsqueda binaria y quick sort:

void *bsearch(const void *key, const void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
void qsort(void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *));

lean las páginas de manual para ver cómo se usan. Ojo: Sirven para ordenar tanto arreglos de punteros a cosas como arreglos de cosas, no se dejen llevar por los "void *" de la función de comparación. (Y ya que estamos @Manuel: El ejercicio 5 de la guía de TDA por el que preguntaste pide implementar el vector de elementos desconocidos según esta idea.)


