#include <stdio.h>
#include <stdlib.h>

// pedir dos numeros y mostrar el promedio de los mismos

int main()
{
    int num1;
    int num2;
    int suma;
    float promedio;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    promedio = (float) suma / 2;
    // promedio = suma / 2.;
    // promedio = (float) (num1 + num2) / 2;

    printf("El promedio es %.2f",promedio);



    return 0;



}
