Estimados,

   Les mando los fuentes de la clase de ayer.


   Revisen las funciones que ofrece <ctype.h> y <string.h> (en la bibliografía las tienen, si no: https://en.cppreference.com/w/c/string/byte ). Más allá de los isalgo() de la ctype.h tienen toupper() y tolower() que tal vez las necesiten para algún ejercicio.


   Sobre el tema de imprimir en printf() alineando con una cantidad n variable de dígitos, veo que al amigo Don Colton lo le pareció suficiemente secreto porque no lo incluyó en su apunte... pero todos los númeritos que metemos en las cosas de printf se pueden reemplazar por * y parametrizarlas:

printf("%5.2f", f);
puede escribirse:
printf("%*.*f", 5, 2, f);

   Otra cosa que no nos dice Don Colton es que para imprimir un size_t usamos el modificador %z (si no tuviéramos %zd, caso de ISO-C90, lo que siempre podemos hacer es promover a unsigned long e imprimir como unsigned long: printf("%ul", (unsigned long)varsize_t)).


   Al respecto de lo que di de diff, me olvidé de una nota de aplicación importante. Ustedes ya saben que con < redirigen archivo a stdin y que con > redirigen stdout a archivo. Algo muy piola para hacer pruebas es generar archivos de entradas predefinidas (por ejemplo, una sucesión de muchos puntos que sabemos si están por encima o por debajo) y un archivo de respuestas predefinidas (si esos mismos puntos están por encima o por debajo). Entonces siempre podemos hacer:

$ ./programa_a_testear < entrada.txt > salida_programa.txt
$ diff salida_programa.txt salida_correcta.txt

y podemos detectar rápidamente si nuestro programa anda bien o no. Es muy práctico o armar estas pruebas antes de empezar a programar o ir construyendo estos archivos con resultados conocidos mientras desarrollamos. Nos van a servir para saber si algún cambio que introdujimos rompió cosas que antes se calculaban bien muy rápidamente.


   No se olviden de que el jueves es el parcialito de 14:00 a 15:30. Los temas son los de la guía de programas básicos, los de la guía de arreglos y los de la guía de cadenas hasta el 19.
