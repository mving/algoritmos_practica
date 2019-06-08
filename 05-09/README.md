Estimados,


   Les mando:

      1) El Makefile del proyecto que armamos la semana pasada:

$ make
genera TODO el proyecto

$ make <depedencia>
genera esa dependencia

$ make clean
borra los .o

etc.

   Una cosa IMPORTANTE que me olvidé sobre el archivo Makefile es que las cosas tienen que tener este formato:

objetivo: <dependencias>
\t<accion>

Lo IMPORTANTE es que la tabulación TIENE que ser una tabulación. O sea, no 2 espacios, ni 4 espacios, ni 8 espacios, ¡tiene que ser el carácter de tabulación!, si no make no va a funcionar.


     2) Los códigos que desarrollamos "en clase".

     Los ejemplos del buffer y del copy son los mismos que hicimos en clase.

     Con el de los vectores como quería hacer dos aplicaciones distintas lo modularicé, en vectores.c tienen las funciones que hicimos en clase (la función que no testeé andaba bien al final) tal cual como las hicimos.

     La aplicación de vectores_texto.c lee y escribe archivos de texto, a esa aplicación le completé la parte de manejo de argumentos a algo más complejo, hay 3 formas de invocarla (y un menú de ayuda). Miren el fuente.

     Agregué una aplicación de binarios que hace todo el camino de leer de stdin, escribir binario, leer el binario y escribir por stdout. Si todo anda bien debería ser la misma entrada que la salida.

Miren lo que hace:

[santisis@ss]0509$ ./vectores_binarios
0
1
2
3
4
0
1
2
3
4
[santisis@ss]0509$ hd vector.bin
00000000  00 00 00 00 01 00 00 00  02 00 00 00 03 00 00 00  |................|
00000010  04 00 00 00                                       |....|
00000014
[santisis@ss]0509$

   hd es un programa que sirve para ver el contenido de un archivo binario en hexa. Les pregunto, ¿cuánto vale sizeof(int) en mi computadora?, ¿es big endian o little endian?


   Como ya se dijo en clase, el lunes a las 10 es el parcialito. Es en el aula 510. Los temas los tienen en el mail que mandé la semana pasada.


