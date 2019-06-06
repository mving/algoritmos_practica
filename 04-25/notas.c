rotar(float v[][2], int n, double c);
rotar(float *v[2], int n, double c);
//son lo mismo
v[0] apunta al primer par (o sea la primer fila)

v+1 = &*(v+1) = &v[1] //apunta al segundo par

v[2][1] = *(*(v+2)+1) //apunta al segundo numero del tercer par

*(i*2+j) //es el calculo que hace C para acceder a la metriz

p = malloc(10); me asigna un lugar en memoria de 10 bytes y me devuelve su posicion inicial

void swap(int *a, int *b){
  int c = *a;
  *a = *b;
  *b = c;
}
gdb ./1
r para ejecutarlo
b para un breakpoint: b main
s step
p print
n next


char *leer_cadena(){
  char *s;
  int c;
  size_t i;
  s = malloc(1 * sizeof(char));
  while ((c = getchar()) != '/n' && c != EOF) {
    s[i++] = c;
    s = realloc(s,(i+2) * sizeof(char));
  }
  s[i]= '/0';
}

indent para tabular
