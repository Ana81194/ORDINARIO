#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "altas.h"

struct alumno;

struct persona{
    char *nombre;
    int edad;
    char genero;
    char fn[8];
    struct alumno *ptrAlum;
    struct persona *ptrsig;
};

struct alumno{
    char matricula[10];
    char carrera[5];
    int semestre;
    char correo[23];
    float calif[5][5];
};

int main(){

    struct persona *ptrsig;
    int opcion;

    do{
        opcion = menuPrincipal();

        switch(opcion){

            case 1:
                altas(&ptr);
                break;

            case 2:
            
                break;

            case 3:
            
                break;

            case 4:
                printf("salir\n");
                break;
        }

    }while(opcion != 4);

    return 0;
}