#include <stdio.h>
#include <stdlib.h>

void altas(struct persona **);
int nuevapersona();
void nuevoAlumno();

void altas(struct persona **ptr){
    struct persona *ptraux;

    printf("inglesa una nueva persona");

//Prototipo
//int Altas (struct Persona **);

/*int Altas (struct Persona **ptr){
    struct Persona *P=NULL;
    struct Alumno *A=NULL;
    int b=1;
    //P=nuevaPersona();
    A=(struct Alumno  *)malloc(sizeof(struct Alumno));
    P=(struct Persona *)malloc(sizeof(struct Persona));
    if(P==NULL){
        b = 0;
    }else{
        //A=nuevoAlumno();
        if(A==NULL){
            b = 0;
            free(P);
        }else{
            P->ptrAlum=A;
            P->ptrsig=*ptr;
            *ptr=P;
        }
    }
    return b;
}*/

}