#include <stdlib.h>
#include <stdio.h>

int main()
{
    int edad;
    float peso;
    char sexo;
    char nombre[21];

    printf("Ingrese edad: ");
    scanf("%d", &edad);

    printf("La edad es: %d", edad);
    return 0;
}

/*
    tipoDeDato nombreDeVariable;
    Ejemplos:
        int edad;
        float peso;
        char sexo;


    máscaras:
        %d, entero
        %f, flotante
        %c, caracter
        %s, cadena

    Declarar la variable: int edad;
    Inicializar la variable: edad = 20;

    Se puede declarar e inicializar en la misma linea: int edad = 20;

    Una variable puede no necesitar ser inicializada.
*/
