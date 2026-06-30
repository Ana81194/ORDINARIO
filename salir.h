#include <stdio.h>
#include <stdlib.h>

void salir(struct persona **ptr);

void salir(struct persona **ptr)
{
    struct persona *aux;

    while(*ptr != NULL)
    {
        aux = *ptr;
        *ptr = (*ptr)->ptrsig;

        free(aux->ptrAlum);
        free(aux);
    }

    printf("\nse ha eliminado toda la base de datosn\n");
    printf("Saliendo del programa...\n");
}