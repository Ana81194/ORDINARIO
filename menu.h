#include <stdio.h>

int menuPrincipal(void);

int menuPrincipal(void){

    int opcion;

    printf("\n===== MENU PRINCIPAL =====\n");
    printf("1.- Crear nuevo dato\n");
    printf("2.- Mostrar todos los datos\n");
    printf("3.- Liberar el ultimo dato\n");
    printf("4.- Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}