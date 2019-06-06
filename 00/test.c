#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
/*   char str[256];
   fgets(str,256,stdin);
   for (size_t i = 65; i < 91; i++) {
     printf("%c\n",i);
   }*/
   int calificacion=4;
   char num[30];
   calificacion = atoi(fgets(num,30,stdin));
   printf("%d\n",1/2 );
  // printf("%s\n", calificacion>=4 ? "aprobado" : "desaprobado");
   return(0);
}
