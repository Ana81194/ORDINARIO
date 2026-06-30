#include <stdio.h>
#include <string.h>


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
            {
                char carrera[5];
                int encontrado = 0;

                printf("Ingrese la carrera: ");
                scanf("%s", carrera);

                struct persona *aux = ptr;

                while(aux != NULL)
                {
                    if(strcmp(aux->ptrAlum->carrera, carrera) == 0)
                    {
                        printf("\nNombre: %s\n", aux->nombre);
                        printf("Edad: %d\n", aux->edad);
                        printf("Genero: %c\n", aux->genero);
                        printf("Fecha de nacimiento: %s\n", aux->fn);

                        printf("Matricula: %s\n", aux->ptrAlum->matricula);
                        printf("Carrera: %s\n", aux->ptrAlum->carrera);
                        printf("Semestre: %d\n", aux->ptrAlum->semestre);
                        printf("Correo: %s\n", aux->ptrAlum->correo);

                        encontrado = 1;
                    }

                    aux = aux->ptrsig;
                }

                if(encontrado == 0)
                {
                    printf("No se encontraron alumnos.\n");
                }
                }
                break;

            case 3:

                {
                    int semestre;
                    int encontrado = 0;

                    printf("Ingrese el semestre: ");
                    scanf("%d",&semestre);

                    struct persona *aux = ptr;

                    while(aux != NULL)
                    {
                        if(aux->ptrAlum->semestre == semestre)
                        {
                            printf("\nNombre: %s\n", aux->nombre);
                            printf("Matricula: %s\n", aux->ptrAlum->matricula);
                            printf("Carrera: %s\n", aux->ptrAlum->carrera);
                            printf("Semestre: %d\n", aux->ptrAlum->semestre);

                            encontrado = 1;
                        }

                        aux = aux->ptrsig;
                    }

                    if(encontrado == 0)
                    {
                        printf("No se encontraron alumnos.\n");
                    }
                    }
                 break;

            case 4:
                {
                    char carrera[5];
                    int semestre;
                    int encontrado = 0;

                    printf("Carrera: ");
                    scanf("%s",carrera);

                    printf("Semestre: ");
                    scanf("%d",&semestre);

                    struct persona *aux = ptr;

                    while(aux != NULL)
                    {
                        if(strcmp(aux->ptrAlum->carrera,carrera)==0 &&
                        aux->ptrAlum->semestre==semestre)
                        {
                            printf("\nNombre: %s\n",aux->nombre);
                            printf("Matricula: %s\n",aux->ptrAlum->matricula);

                            encontrado = 1;
                        }

                        aux = aux->ptrsig;
                    }

                    if(encontrado==0)
                    {
                        printf("No se encontraron alumnos.\n");
                    }
                }
                break;

            case 5:
            {
                char nombre[50];
                int encontrado = 0;

                printf("Nombre: ");
                scanf(" %[^\n]",nombre);

                struct persona *aux = ptr;

                while(aux != NULL)
                {
                    if(strcmp(aux->nombre,nombre)==0)
                    {
                        printf("\nNombre: %s\n",aux->nombre);
                        printf("Matricula: %s\n",aux->ptrAlum->matricula);

                        encontrado = 1;
                        break;
                    }

                    aux = aux->ptrsig;
                }

                if(encontrado==0)
                {
                    printf("Persona no encontrada.\n");
                }
            }
                break;

            case 6:
                {
                    char matricula[10];
                    int encontrado = 0;

                    printf("Matricula: ");
                    scanf("%s",matricula);

                    struct persona *aux = ptr;

                    while(aux != NULL)
                    {
                        if(strcmp(aux->ptrAlum->matricula,matricula)==0)
                        {
                            printf("\nNombre: %s\n",aux->nombre);
                            printf("Matricula: %s\n",aux->ptrAlum->matricula);

                            encontrado = 1;
                            break;
                        }

                        aux = aux->ptrsig;
                    }

                    if(encontrado==0)
                    {
                        printf("Matricula no encontrada.\n");
                    }

            
                }
                break;
            case 7:
                 printf("\nRegresando al menu principal...\n");
                 return;
                break;
            default:
                printf("Opcion no valida\n");
        }
    }
}
