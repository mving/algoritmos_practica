#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
//
#define MAX 100
#define VALORES 10

int no_atoi(const char s[]);

int main() {
  printf("Ingrese cadena\n");
  char input[MAX];
  fgets(input,MAX,stdin);
  //char palabra[MAX] = input;
//  printf("%d %c\n",'a','a');
  printf("%d\n",no_atoi(input));
  return 0;
}


int no_atoi(const char s[]){
  int digito = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (isdigit(s[i]))
    digito = digito * 10 + s[i] - '0';
  }
  return digito;
}
