#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void destruir_vector(int *v){
  free(v);
}

/*
Recibe un puntero v a un vector dinamico ordenado  de n elementos e
inserta el elemento nuevo quedando ordenado. Si la funcion
puede insertar devuelve true, false en caso contrario.
*/
bool agregar_elemento(int **v,size_t *n, int nuevo){
  int *aux;
  aux = realloc(*v, sizeof(int) * (*n+1));
  if (aux == NULL) {
    return false;
  }
  size_t i;
  for (i = 0; i < *n; i++) {
    if (nuevo < (*v)[i]) {
      break;
    }
  }
  for (size_t j = *n; j > i; j++) {
    (*v)[j] = (*v)[j-1];
  }
  (*n)++;
  (*v)[i]=nuevo;
  return true;

}

int main() {
  int *v;
  size_t n=0;

  agregar_elemento(&v,&n,1);

  for (size_t i = 0; i < n; i++) {
    printf("%d\n",v[i]);
  }
  destruir_vector(v);
  return 0;
}
