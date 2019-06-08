Estimados,

Adjunto los ejercicios resueltos hoy en clase.

Avisos parroquiales:

*) Ya está disponible el enunciado del ejercicio obligatorio número 2
en la web. Se entrega el próximo jueves.

*) Les recuerdo que se fijó como fecha del primer parcialito el
jueves 11/4 de 14:00 a 15:30 horas. Los temas son los de la guía de
introducción a C, los de arreglos, matrices y cadenas (que todavía no
vimos). Ese día hay práctica de 15:30 a 17:00 como de costumbre.

*) El jueves que viene vamos a tener el taller de control de
versiones con Git.

*) Con lo que vimos hasta el momento ya pueden hacer todos los
ejercicios de la guía de introducción al lenguaje C y los ejercicios de la
guía de arreglos y matrices. Al respecto de la parte de entrada cuando se
dice "hasta el ingreso de EOF" significa "hasta que el usuario ingrese ^D",
para testear eso pueden preguntar por el valor booleano de fgets() como
hicimos hoy en clase (fgets() no devuelve un bool, qué devuelve fgets() lo
vamos a ver en dos clases). Al respecto de la guía de arreglos y matrices
donde diga "size_t" hagan de cuenta que dice "int", vamos a ver el
significado de size_t la clase que viene.

*) Por si se olvidaron con:

$ ./programa < archivo

el sistema operativo manda el contenido del archivo por stdin de mi
programa. Les recomiendo usar esto para hacerse pruebas cuando desarrollen
el EJ2, va a resultarle más cómodo poder correr siempre las mismas pruebas
con resultados conocidos y además poder correr muchas pruebas cada vez sin
necesidad de tipear a mano cada valor.

---------------------------------------------------------------------------

Gente,

Envío la otra versión del EJ43 de la guía de introducción que hicimos en
clase. Es el que tiene la parte de interacción con el usuario, validación,
impresión de errores y aborta el programa.

Ya que estamos, para mandar el contenido del stderr de un programa a un
archivo:

$ ./prog 2> archivo

Esto es bastante útil porque supongo que se imaginarán que los que
programaron el GCC sabían programar bien C entonces los mensajes de error
van por stderr. Pero, oh, momento, el GCC es un copado que si no es para
mandarme errores ni siquiera me dice nada, así que TODO en el GCC sale por
stderr.

Acá viene la pregunta multiple-choice...

Cuando tengan que mandar a la lista un error de compilación van a:
1) Redirigir la salida de stderr y copiar los caracteres (¡bieeeeeeeeen!)
2) Hacer una captura de pantalla del error (¡maaaaaaallll!)
3) Sacarle una foto a la pantalla ([cries in centennial])

Hagan sus apuestas de por cuál de las 3 no los vamos a retar :).

Por otro lado, si quieren saber el valor de retorno del main:

$ echo $?

Ejemplo con ambas cosas:

santisis@hp:~/9511/test$ ls
soy_un_archivo.txt
santisis@hp:~/9511/test$ echo $?
0
santisis@hp:~/9511/test$ ls archivoquenoexiste
ls: no se puede acceder a 'archivoquenoexiste': No existe el archivo o el
directorio
santisis@hp:~/9511/test$ echo $?
2
santisis@hp:~/9511/test$ ls > lista_de_archivos.txt
santisis@hp:~/9511/test$ ls archivoquenoexiste > lista_de_archivos.txt
ls: no se puede acceder a 'archivoquenoexiste': No existe el archivo o el
directorio
santisis@hp:~/9511/test$ ls archivoquenoexiste 2> errores.txt
santisis@hp:~/9511/test$

Y no, nadie dijo que había que devolver 1, había que devolver distinto
de 0. Del man de ls:

Exit status:
0 if OK,
1 if minor problems (e.g., cannot access subdirectory),
2 if serious trouble (e.g., cannot access command-line
argument).

