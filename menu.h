#include <stdio.h>

int menuPrincipal(void);

//menu principal
int menuPrincipal(void){
    int opcion;

    printf("MENU PRINCIPAL\n");
    printf("1.- cear nuevo dato\n");
    printf("2.- mostrar todos los datos\n");
    printf("3.- liberar el ultumo dato\n");
    printf("4.- salir");
    printf("selecione una opcion:");
    scanf("%d",&opcion);

    return opcion;
}