#include <stdio.h>
#include <string.h>

void Modificar(struct persona *ptr);
void modificarPersona(struct persona *aux);
void modificarAlumno(struct persona *aux);
void modificarParcial(struct persona *aux);
void modificarMateria(struct persona *aux);

void Modificar(struct persona *ptr)
{
    char matricula[10];
    struct persona *aux;
    int opcion;

    if(ptr == NULL)
    {
        printf("La lista esta vacia.\n");
        return;
    }

    printf("\ningresa la matricula del alumno: ");
    scanf("%s", matricula);

    aux = ptr;

    while(aux != NULL)
    {
        if(strcmp(aux->ptrAlum->matricula, matricula) == 0)
        {
            opcion = menuModificar();

            switch(opcion)
            {
                case 1:
                    modificarPersona(aux);
                    break;

                case 2:
                    modificarAlumno(aux);
                    break;

                case 3:
                    modificarParcial(aux);
                    break;

                case 4:
                    modificarMateria(aux);
                    break;

                case 5:
                    printf("\nRegresando al menu anterior...\n");
                    return;

                default:
                    printf("\nOpcion no valida.\n");
            }

            return;
        }

        aux = aux->ptrsig;
    }

    printf("\nMatricula no encontrada.\n");
}

void modificarPersona(struct persona *aux)
{
    printf("\ndatos nuevos de la persona a cambiar\n");

    printf("Nombre: ");
    scanf(" %[^\n]", aux->nombre);

    printf("Edad: ");
    scanf("%d", &aux->edad);

    printf("Genero: ");
    scanf(" %c", &aux->genero);

    printf("Fecha de nacimiento: ");
    scanf("%s", aux->fn);

    printf("\nse moodificaron los datos correctamente.\n");
}

void modificarAlumno(struct persona *aux)
{
    printf("\ndatos nuevos para el alumno\n");

    printf("Matricula: ");
    scanf("%s", aux->ptrAlum->matricula);

    printf("Carrera: ");
    scanf("%s", aux->ptrAlum->carrera);

    printf("Semestre: ");
    scanf("%d", &aux->ptrAlum->semestre);

    printf("Correo: ");
    scanf("%s", aux->ptrAlum->correo);

    printf("\nse modificaron los datos correctamente\n");
}

void modificarParcial(struct persona *aux)
{
    int materia;
    int parcial;

    printf("\nMateria (1-5): ");
    scanf("%d", &materia);

    printf("Parcial (1-3): ");
    scanf("%d", &parcial);

    if(materia >= 1 && materia <= 5 && parcial >= 1 && parcial <= 3)
    {
        printf("Nueva calificacion: ");
        scanf("%f", &aux->ptrAlum->calif[materia-1][parcial-1]);

        printf("\nse modifico la calificacion correctamente.\n");
    }
    else
    {
        printf("\nDatos incorrectos.\n");
    }
}

void modificarMateria(struct persona *aux)
{
    int materia;

    printf("\nMateria (1-5): ");
    scanf("%d", &materia);

    if(materia >= 1 && materia <= 5)
    {
        for(int i = 0; i < 3; i++)
        {
            printf("Parcial %d: ", i + 1);
            scanf("%f", &aux->ptrAlum->calif[materia-1][i]);
        }

        printf("\nse modifico la materia correctamente.\n");
    }
    else
    {
        printf("\nNumero de materia incorrecto.\n");
    }
}