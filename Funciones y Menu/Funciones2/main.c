#include <stdio.h>
#include <stdlib.h>

// familia 2

void sumar (int num1, int num2);

int main()
{
    int a;
    int b;

    printf("Ingrese un numero: ");
    scanf("%d", &a);

    printf("Ingrese otro numero: ");
    scanf("%d", &b);

    sumar(a, b);

    return 0;
}

void sumar(int num1, int num2) {

int resultado;
resultado = num1 + num2;

printf("El resultado es %d\n", resultado);

}
