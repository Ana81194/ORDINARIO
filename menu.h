#include <stdio.h>

int menuPrincipal(void);
int menuMostrar(void);

int menuPrincipal(void){

    int opcion;

    printf("\n===== MENU PRINCIPAL =====\n");
    printf("1.- Dar de alta \n");
    printf("2.- Mostrar todos los datos\n");
    printf("3.- Dar de baja\n");
    printf("4.- Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}

int menuMostrar(void){

    int opcion;

    printf("\n===== MENU =====\n");
    printf("1.- Todas: Muestra a todas las personas\n");
    printf("2.- Carrera: Muestra a todos los alumnos de la carrera seleccionada\n");
    printf("3.- Semestre: Muestra a los alumnos del semestre seleccionado\n");
    printf("4.- Carrera y semestre: Muestra a los alumnos de la carrera y semestre seleccionado\n");
    printf("5.- Nombre: Busca una persona por nombre\n");
    printf("6.- Matricula: Busca un alumno por su matrícula\n");
    printf("7.- Salir");
    scanf("%d",&opcion);

    return opcion;
}