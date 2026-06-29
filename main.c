#include <stdio.h>
#include <stdlib.h>

struct persona{
    char nombre[50];
    int edad;
    char genero;
    char fn[20];
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

#include "menu.h"
#include "altas.h"
#include "bajas.h"
#include "mostrar.h"

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
                Mostrar(ptr);
                break;

            case 3:
                printf("bajas \n");
                int op;

                        printf("\nBAJAS\n");
                        printf("1.- Una persona\n");
                        printf("2.- Varias personas\n");
                        printf("3.- Todas las personas\n");
                        printf("eliga una opcion");
                        scanf("%d",&op);

                        switch(op)
                        {
                            case 1:
                                bajaUna(&ptr);
                                break;

                            case 2:
                                bajaVarias(&ptr);
                                break;

                            case 3:
                                bajaTodas(&ptr);
                                break;

                            default:
                                printf("Opcion no valida\n");
                        }
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