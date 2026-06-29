#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void bajaUna(struct persona **ptr);
void bajaVarias(struct persona **ptr);
void bajaTodas(struct persona **ptr);

//solo para dar de baja a una persna la primera que se registro 

void bajaUna(struct persona **ptr)
{
    struct persona *aux;

    if(*ptr == NULL)
    {
        printf("\nNo hay personas registradas.\n");
        return;
    }

    aux = *ptr;
    *ptr = aux->ptrsig;

    free(aux->ptrAlum);
    free(aux);

    printf("\nSe elimino la primera persona.\n");
}

//para dar de baja mas personas 

void bajaVarias(struct persona **ptr)
{
    char op;

    if(*ptr == NULL)
    {
        printf("\nNo hay personas registradas.\n");
        return;
    }

    do
    {
        bajaUna(ptr);

        if(*ptr == NULL)
        {
            printf("\nYa no quedan personas.\n");
            break;
        }

        printf("\n¿Desea eliminar otra persona? (s/n): ");
        scanf(" %c",&op);

    }while(op == 's' || op == 'S');
}

//eliminar todas las personas 

void bajaTodas(struct persona **ptr)
{
    while(*ptr != NULL)
    {
        bajaUna(ptr);
    }

    printf("\nTodas las personas fueron eliminadas.\n");
}