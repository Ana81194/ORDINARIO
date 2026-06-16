#include <stdio.h>

struct persona{
    char *nombre;
    int edad;
    char genero;
    char fn[8];
    struct *alumno;
    struct *persona;
 };

 struct alumno{
    char matricula[10];
    char carrera[5];
    int semestre;
    char genero[23];
    float calif[5][5];
 };


//mwnu principal 
int menu(void){
    int opcion;

    printf("MENU PRINCIPAL\n");
    printf("1.- nombre \n");
    printf("2.- edad\n");
    printf("3.- genero\n");
    printf("4.- fecha de nacimiento\n ");
    printf("5.- alumno\n ");
    printf("6.- salir");
    printf("selecione una opcion:");
    scanf("%d",&opcion);

    return opcion;
}
//submenu
int submenu(void){
    int opcion;

    printf("submenu de alumno \n");
    printf("1.- matricula\n");
    printf("2.- carrera\n");
    printf("3.- semestre \n");
    printf("4.- genero \n");
    printf("4.- calificacion \n");
    printf("5.- Salir\n");
    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);
    return opcion;
}

int main(void){
    struct persona

    do{
        opcion= menu();

        switch{

                case 1:
                    printf("nombre de la persona\n");
                break;

                case 2:
                     printf("edad de la persona");
                break;

                case 3:
                    printf("genero de la persona");
                break;

                case 4:
                     printf("fecha de nacimiento de la perona");
                break;

                case 5:
                    do{
                       subopcion = submenu();

                        switch(subopcion){

                            case 1:
                                 printf("ingrese su matricula");
                            break;

                            case 2:
                                printf("ingrese su carrera");
                            break;

                            case 3:
                                 printf("ingrese su semestre");
                            break;

                            case 4:
                                printf("ingrese su genero");
                            break;

                            case 5:
                                 printf("ingrese su calificacion");
                            break;

                            default:
                                printf("opcion no valida");

                        }
                    }while(subopcion ! = 4);
                break;

                case 6:
                        printf("Saliendo...\n");
                break;

                default:
                    printf("Opcion invalida.\n");
            }
    }while(opcion ! = 6);
        return o;
}