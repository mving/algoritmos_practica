#include <string.h>
#include <stdio.h>

int main () {
   char str[256];
   fgets(str,256,stdin);
   while( token != NULL ) {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }

   return(0);
}
