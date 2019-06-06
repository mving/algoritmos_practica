% : and
| : or
~ : not
^ : xor

desplazamiento de bits:
>> << son shifts
a >> 1 desplaza hacia la derecha 01100101 >> 00110010 (si unsigned)
a << n desplaza n hacia la izquierda

%d decimal
%o octal        8
%x hexa         0x
%X hexa en mayuscula

usar fwrite

que es CLA gracias Facu (argumentos)

recursividad ayudita

1) solucion mas facil
2) Con la solucion del problema mas chico obtengo la memoria
3) tiene que haber convergencia de 2 a 1

en argumentos > solo toma la salida de stdout


para binario fread fwrite
para text fgets = NULL fgetc = EOF fputc  fprintf
int feof(FILE *);

fread(&n,sizeof(size_t),1,f);
v=malloc(n * sizeof(structura));
fread(v,sizeof(structura),n,f);

comprobar fgets y todos
