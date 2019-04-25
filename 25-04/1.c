#include <stdio.h>
#include <stdlib.h>

struct intervalo{
  char c,d,e,f,g;
  int x,y;
};

int main() {
  printf("%zu\n",sizeof(struct intervalo) );
  return 0;
}
