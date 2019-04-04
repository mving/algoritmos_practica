#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100
#define VALORES 10

int main() {
  int contadores[VALORES]={0};

  printf("Ingrese valores a generar\n");
  char input[MAX];
  fgets(input,MAX,stdin);
  float n = atoi (input);

  for (size_t i = 0; i < n; i++) {
    int r = rand() % VALORES;
    contadores[r]++;
  }
  for (size_t i = 0; i < VALORES; i++) {
    printf("%ds: %5d (%.4f)\n",i,contadores[i],(float)contadores[i] / n);
  }

  return 0;
}
