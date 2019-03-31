# CHEAT SHEEET Los secretos de printf

## Caracteres especiales por naturaleza

\         | escapar el siguiente caracter
--------- | ------------------------------
\\        | imprimir una barra invertida
"         | comienzo on de cadena
\"        | imprimir comillas dobles
'         | comienzo on de una constante de caracter
\'        | imprimir comilla simple
%         | comenzar especicación de formato
\%        |imprimir un signo de porcentaje


## Caracteres especiales alternativos

\a |alerta auditiva (campana -bell-)
-- | ----------------
\b |retroceso
\f |form feed
\n |nueva línea
\r |retorno de carro
\t |tabulación
\v |tabulación vertical

## Especificación de formato

%c |imprimir un caracter
-- | -----------------------
%d |un número decimal (base 10)
%e |un Nº de punto flotante exponencial
%f |un Nº de punto flotante
%g |un Nº de punto flotante en formato general
%i |un entero en base 10
%o |un Nº en octal (base 8)
%s |una cadena de caracteres
%u |un Nº decimal no signado (base 10)
%x |un Nº en hexadecimal (base 16)
%% |un signo porcentaje (también funciona \%)

## Relleno de espacios

printf |imprime
---- | ----------
justificado derecha
("%5d",0)| ····0
("%5d",-7)|  ···-7
justificado izquierda
("%-5d",0) | 0····    
("%-5d",-7) | -7···   
rellenar con ceros
("%05d",0)| 00000
("%05d",-7)| -0007
Imprimir con signo +
("%+5d",0) |···+0
("%+5d",-7)\···-7
("%+-5d",0) |+0···   
("%+-5d",-7) |-7···
("% -5d",0) | ·0···   
("% -5d",-7) |-7···      
("% 05d",0) | ·0000
("% 05d",-7) | -0007
("%+05d",0) |+0000
("%+05d",-7) |-0007

(· simboliza el espacio)
### Resumen

ninguna | alinea a derecha, con espacios
------  | ---------------------
- |justica a izquierda
0 |rellena con ceros
+ |con un signo más en números positivos
· |signo más invisible

## Precisión del número

printf| imprime
---- | ------
("%.0f",e)| 3
("%.0f.",e)| 3.
("%.1f",e) |2.7
("%.2f",e) |2.72
justificando
("%5.0f",e)  |   3
("%5.0f.",e)  |   3.
("%5.1f",e)  | 2.7
