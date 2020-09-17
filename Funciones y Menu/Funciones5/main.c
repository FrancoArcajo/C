#include <stdio.h>
#include <stdlib.h>
#include "arcajo.h"


int main()
{
    int a;
    int b;

    printf("Ingrese un numero: ");
    scanf("%d", &a);

    printf("Ingrese otro numero: ");
    scanf("%d", &b);
    printf("Promedio: %.2f\n", calcularPromedio(a, b) );

    return 0;
}





