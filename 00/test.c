#include <string.h>
#include <stdio.h>

int main () {
/*   char str[256];
   fgets(str,256,stdin);
   for (size_t i = 65; i < 91; i++) {
     printf("%c\n",i);
   }*/
   int calificacion=4;
   printf("%s\n", calificacion>=4 ? "aprobado" : "desaprobado");
   return(0);
}
