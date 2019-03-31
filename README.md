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
("%5d",0)| ____0
("%5d",-7)|  ___-7
("%5d",1560133635)| 1560133635
("%5d",-2035065302)| -2035065302
justificado izquierda
("%-5d",0) | 0____    
("%-5d",-7) | -7___   
("%-5d",1560133635) | 1560133635
("%-5d",-2035065302)| -2035065302
