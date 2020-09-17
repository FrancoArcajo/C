#include <stdio.h>
#include <stdlib.h>

//familia 4

void sumar();

int main()
{
    sumar ();
    return 0;
}

void sumar () {

    int a;
    int b;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &a);

    printf("Ingrese otro numero: ");
    scanf("%d", &b);

    resultado = a + b;

    printf("El resultado es %d\n", resultado);

}
