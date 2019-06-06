/*int --->    fwrite()
            fread()

*/

#include <stdio.h>
typedef int(*pf_t)(int);

int cuadrado(int n);

int main(int argc, char const *argv[]) {
    //pf_t vpf[] = {cuadrado};
    int(*vpf[])(int)={cuadrado};
    printf("%d\n",vpf[0](5));
    return 0;
}

int cuadrado(int n){
    return n * n;
}
