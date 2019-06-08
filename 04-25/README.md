Estimados,

   Les adjunto los fuentes de la clase de hoy.

   Ya se encuentra publicado el enunciado del EJ3 en https://algoritmos9511.gitlab.io/tps/ej3.html , fecha de entrega el próximo jueves.

   Sobre las herramientas que vimos hoy:


GCC:
Compilar con -g


Valgrind:
$ valgrind ./programa
$ valgrind --leak-check=full ./programa

Si imprime algo onda:
==3078== HEAP SUMMARY:
==3078==     in use at exit: 0 bytes in 0 blocks
==3078==   total heap usage: 11 allocs, 11 frees, 1,244 bytes allocated
==3078==
==3078== All heap blocks were freed -- no leaks are possible
es porque todo está bien.


GDB:
$ gdb ./programa

b: breakpoint (ejemplo "b main" para poner breakpoint en main, "b 13" para la línea 13) (se borra con "clear main", etc.)
r: run (corre hasta el primer breakpoint o que el programa termine o se muera)
s: step (ejecuta una instrucción más)
n: next (ejecuta una instrucción más, pero si fuera una llamada a función no se mete adentro)
p: print (imprime variable, ejemplo "p v[0]", "p *a", "p &x0")
c: continue (sigue la ejecución hasta el próximo breakpoint)
watch ("sigue" el valor de una variable, me avisa cuando alguien la modifica, ejemplo "watch i")

Siempre puede imprimirse la ayuda con help.


   Entre hoy y mañana les mando las instrucciones para instalar la biblioteca gráfica para el TP1 y el TP2.


