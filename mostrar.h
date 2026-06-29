#include <stdio.h>


void Mostrar(struct persona *ptr);

//para mostrar todos los datos 
void Mostrar(struct persona *ptr){
    int opcion;
    if(ptr == NULL){
        printf("La lista esta vacia.\n");
        return;
    } else {
        opcion = menuMostrar();
        switch(opcion){
            case 1:
                int i = 1;
                printf("\nLISTA DE PERSONAS\n");

                while(ptr != NULL){
                
                    printf("\n%d. Persona\n", i);
                    printf("Nombre: %s\n", ptr->nombre);
                    printf("Edad: %d\n", ptr->edad);
                    printf("Genero: %c\n", ptr->genero);
                    printf("Fecha de nacimiento: %s\n", ptr->fn);
                
                    printf("\n ALUMNO\n");
                    printf("Matricula: %s\n", ptr->ptrAlum->matricula);
                    printf("Carrera: %s\n", ptr->ptrAlum->carrera);
                    printf("Semestre: %d\n", ptr->ptrAlum->semestre);
                    printf("Correo: %s\n", ptr->ptrAlum->correo);
                
                    printf("\n  Calificaciones:\n");
                
                    for(int j = 0; j < 5; j++){
                        printf("  Materia %d: ", j + 1);
                    
                        for(int k = 0; k < 3; k++){
                            printf("%.1f ", ptr->ptrAlum->calif[j][k]);
                        }
                        printf("\n");
                    }
                
                    ptr = ptr->ptrsig;
                    i++;
                }
                break;
            case 2:
                break;
            case 3:
                 break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                printf("Opcion no valida\n");
        }
    }
}

//mostrar carrera seleccionada