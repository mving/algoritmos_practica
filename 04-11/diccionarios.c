#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 100


enum carreras {ELECTRONICA, CIVIL, ELECTRICISTA, MECANICA, NAVAL, SISTEMAS, INFORMATICA, QUIMICA, AGRIMENSURA, ALIMENTOS, INDUSTRIAL};
typedef enum carreras carreras_t;

// Diccionario nombre a carrera
const char *nombre_carreras[] = {"Electronica", "Civil", "Electricista", "Mecanica", "Naval y Mecanica", "Sistemas", "Informatica", "Quimica", "Agrimensura", "Alimentos", "Industrial"};

// Diccionario de codigo de carrera
// Ver: https://web.archive.org/web/20140214011812/http://intra.fi.uba.ar/insc/consultas/aclaraciones_cursos.jsp
const short codigo_carreras[] = {
    7,
    1,
    6,
    5,
    3,
    9,
    10,
    8,
    12,
    11,
    2,
};

// Otra forma de inicializar vectores en C99, me independiza del orden de los enums.
const short codigo_carreras_2[] = {
    [CIVIL] = 1,
    [INDUSTRIAL] = 2,
    [NAVAL] = 3,
    [MECANICA] = 5,
    [ELECTRICISTA] = 6,
    [ELECTRONICA] = 7,
    [QUIMICA] = 8,
    [SISTEMAS] = 9,
    [INFORMATICA] = 10,
    [ALIMENTOS] = 11,
    [AGRIMENSURA] = 12
};



void imprimir_carreras(enum carreras carrera) {
    printf("%s", nombre_carreras[carrera]);
}

void imprimir_carrera_guia1(enum carreras carrera) {
    switch(carrera) {
        case ELECTRONICA:
            printf("Electronica");
            break;
        case CIVIL:
            printf("Civil");
            break;
        case ELECTRICISTA:
            printf("Electricista");
            break;
        case MECANICA:
            printf("Mecanica");
            break;
        case NAVAL:
            printf("Naval y Mecanica");
            break;
        case SISTEMAS:
            printf("Sistemas");
            break;
        case INFORMATICA:
            printf("Informatica");
            break;
        case QUIMICA:
            printf("Quimica");
            break;
        case AGRIMENSURA:
            printf("Agrimensura");
            break;
        case ALIMENTOS:
            printf("Alimentos");
            break;
        case INDUSTRIAL:
            printf("Industrial");
            break;
    }
}


typedef enum {ANIMALIA, FUNGI, PLANTAE, PROTOZOA, CHROMISTA, ARCHAEA, BACTERIA} reino_t;


int main(void) {
    char aux[MAX_STR];

    printf("Ingrese su codigo de carrera: ");
    fgets(aux, MAX_STR, stdin);

    int codigo = atoi(aux);

    size_t i;
    for(i = 0; i < sizeof(codigo_carreras) / sizeof(codigo_carreras[0]); i++) {
        if(codigo_carreras[i] == codigo)
            break;
    }
    if(i == sizeof(codigo_carreras) / sizeof(codigo_carreras[0])) {
        fprintf(stderr, "El codigo de carrera no era valido\n");
        return EXIT_FAILURE;
    }

    // Conversion de int a enum carreras:
    enum carreras carrera = i; // Sabemos que i está en rango para el enum y lo representa.

    printf("Su carrera es: ");
    imprimir_carreras(carrera);
    printf("\n");

    return 0;
}

