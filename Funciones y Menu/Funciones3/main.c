#include <stdio.h>
#include <stdlib.h>

//familia 3

int sumar();

int main()
{
    int respuesta;

    respuesta = sumar();int a;

    printf("El resultado es %d\n", respuesta);

    return 0;
}

int sumar ()
{
    int a;
    int b;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &a);

    printf("Ingrese otro numero: ");
    scanf("%d", &b);

    resultado = a + b;

    return resultado;
}
