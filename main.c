#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "altas.h"
#include "bajas.h"

struct alumno;

struct persona{

    char nombre[50];
    int edad;
    char genero;
    char fn[11];

    struct alumno *ptrAlum;
    struct persona *ptrsig;
};

struct alumno{
    char matricula[10];
    char carrera[5];
    int semestre;
    char correo[23];
    float calif[5][5];
    struct alumno *sigAlumno;
};

int main(){

    struct persona *ptr = NULL;
    int opcion;

    do{
        opcion = menuPrincipal();

        switch(opcion){

            case 1:
                altas(&ptr);
                break;

            case 2:
                printf("Mostrar datos\n");
                break;

            case 3:
                printf("Liberar ultimo dato\n");
                break;

            case 4:
                printf("Salir\n");
                break;

            default:
                printf("Opcion no valida\n");
        }

    }while(opcion != 4);

    return 0;
}