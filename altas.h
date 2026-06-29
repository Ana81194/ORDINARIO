#include <stdio.h>
#include <stdlib.h>

void altas(struct persona **ptr);

void altas(struct persona **ptr){
    int p = 0;

    printf("Cuantas personas desea registrar: ");
    scanf("%d", &p);
    if(p == 1){
        struct persona *nuevo;

        printf("Ingresa una nueva persona\n");

        // Reservar memoria para la persona
        nuevo = (struct persona *)malloc(sizeof(struct persona));

        if(nuevo == NULL){
            printf("No se pudo reservar memoria para la persona.\n");
            return;
        }

        // Reservar memoria para el alumno
        nuevo->ptrAlum = (struct alumno *)malloc(sizeof(struct alumno));

        if(nuevo->ptrAlum == NULL){
            printf("No se pudo reservar memoria para el alumno.\n");
            free(nuevo);
            return;
        }

        // Inicializar datos
        nuevo->edad = 0;
        nuevo->genero = ' ';
        
        nuevo->ptrsig = NULL;

        if(*ptr == NULL){
            *ptr = nuevo;
        }
        else{
            struct persona *aux;
        
            aux = *ptr;
        
            while(aux->ptrsig != NULL)
            {
                aux = aux->ptrsig;
            }
        
            aux->ptrsig = nuevo;
        }

        printf("\nPersona agregada correctamente.\n");

        // los datos de perona 

        printf("\nNombre: ");
        scanf(" %[^\n]", nuevo->nombre);

        printf("Edad: ");
        scanf("%d", &nuevo->edad);

        printf("Genero: ");
        scanf(" %c", &nuevo->genero);  

        printf("Fecha de nacimiento: ");
        scanf(" %s", nuevo->fn);

        // los datos del alumno 

        printf("\nMatricula: ");
        scanf("%s", nuevo->ptrAlum->matricula);

        printf("Carrera: ");
        scanf("%s", nuevo->ptrAlum->carrera);

        printf("Semestre: ");
        scanf("%d", &nuevo->ptrAlum->semestre);

        printf("Correo: ");
        scanf("%s", nuevo->ptrAlum->correo);

        // calificacione s
        
        
        printf("\nIngrese las calificaciones:\n");
        
        for(int i = 0; i < 5; i++){
        
            printf("\nMateria %d\n", i + 1);
        
            for(int j = 0; j < 3; j++){
            
                printf("Parcial %d: ", j + 1);
                scanf("%f", &nuevo->ptrAlum->calif[i][j]);
            
            }
        }
    
        printf("\nRegistro guardado correctamente.\n");

    } else if (p > 1) {
        int i = 1;
        do{

        struct persona *nuevo;

        printf("Ingresa una nueva persona\n");

        // Reservar memoria para la persona
        nuevo = (struct persona *)malloc(sizeof(struct persona));

        if(nuevo == NULL){
            printf("No se pudo reservar memoria para la persona.\n");
            return;
        }

        // Reservar memoria para el alumno
        nuevo->ptrAlum = (struct alumno *)malloc(sizeof(struct alumno));

        if(nuevo->ptrAlum == NULL){
            printf("No se pudo reservar memoria para el alumno.\n");
            free(nuevo);
            return;
        }

        // Inicializar datos
        nuevo->edad = 0;
        nuevo->genero = ' ';
        nuevo->ptrsig = NULL;

        if(*ptr == NULL){
            *ptr = nuevo;
        }
        else{
            struct persona *aux;
        
            aux = *ptr;
        
            while(aux->ptrsig != NULL)
            {
                aux = aux->ptrsig;
            }
        
            aux->ptrsig = nuevo;
        }

        printf("\nPersona agregada correctamente.\n");

        // los datos de perona 

        printf("\nNombre: ");
        scanf(" %[^\n]", nuevo->nombre);

        printf("Edad: ");
        scanf("%d", &nuevo->edad);

        printf("Genero: ");
        scanf(" %c", &nuevo->genero);  

        printf("Fecha de nacimiento: ");
        scanf(" %s", nuevo->fn);

        // los datos del alumno 

        printf("\nMatricula: ");
        scanf("%s", nuevo->ptrAlum->matricula);

        printf("Carrera: ");
        scanf("%s", nuevo->ptrAlum->carrera);

        printf("Semestre: ");
        scanf("%d", &nuevo->ptrAlum->semestre);

        printf("Correo: ");
        scanf("%s", nuevo->ptrAlum->correo);

        // calificacione s
        
        
        printf("\nIngrese las calificaciones:\n");
        
        for(int i = 0; i < 5; i++){
        
            printf("\nMateria %d\n", i + 1);
        
            for(int j = 0; j < 3; j++){
            
                printf("Parcial %d: ", j + 1);
                scanf("%f", &nuevo->ptrAlum->calif[i][j]);
            
            }
        }
    
        printf("\nRegistro guardado correctamente.\n");
        
        i++;
        }while(i <= p);
    }

    
}
// codido para registrar mas personas 