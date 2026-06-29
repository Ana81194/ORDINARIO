#include <stdio.h>
#include <stdlib.h>

void altas(struct persona **ptr);
int nuevapersona();
void nuevoAlumno();

void altas(struct persona **ptr){

    struct persona *nuevo;

    printf("Ingresa una nueva persona\n");

    nuevo = (struct persona*)malloc(sizeof(struct persona));

    nuevo->ptrAlum = (struct alumno*)malloc(sizeof(struct alumno));

    if(nuevo->ptrAlum == NULL){

    printf("No se pudo reservar memoria para el alumno\n");
    free(nuevo);
    return;

}
    if(nuevo == NULL){
        printf("No se reservo memoria\n");
        return;
    }

    nuevo->edad = 0;
    nuevo->genero = ' ';
    nuevo->ptrAlum = NULL;

    nuevo->ptrsig = *ptr;
    *ptr = nuevo;

    printf("Persona agregada correctamente\n");
}
    //datos de la persona 
        printf("\nNombre: ");
        scanf(" %[^\n]", nuevo->nombre);

        printf("Edad: ");
        scanf("%d",&nuevo->edad);

        printf("Genero: ");
        scanf(" %c",&nuevo->genero);

        printf("Fecha de nacimiento: ");
        scanf("%s",nuevo->fn);

    //datos del alumnos 
        printf("\nMatricula: ");
        scanf("%s",nuevo->ptrAlum->matricula);

        printf("Carrera: ");
        scanf("%s",nuevo->ptrAlum->carrera);

        printf("Semestre: ");
        scanf("%d",&nuevo->ptrAlum->semestre);

        printf("Correo: ");
        scanf("%s",nuevo->ptrAlum->correo);
    //calificaciones 
        float calif[5][5];
        int i,j;

    printf("\nIngrese las calificaciones\n");

    for(i=0;i<5;i++){

        printf("\nMateria %d\n",i+1);

        for(j=0;j<5;j++){

            printf("Parcial %d: ",j+1);
            scanf("%f",&nuevo->ptrAlum->calif[i][j]);

        }

    }