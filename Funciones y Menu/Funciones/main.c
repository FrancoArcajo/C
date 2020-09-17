#include <stdio.h>
#include <stdlib.h>

// funciones se hacen cuando veo que en mi programa estoy haciendo muchas veces lo mismo.
// familia 1 recibe algo y devuelve algo
// familia 2 recibe algo y no devuelve nada
// familia 3 no recibe nada y devuelve algo
// familia 4 recibe nada y no devuelve nada

// funcion familia 1

sumar (int num1, int num2);

int main()
{
    int a;
    int b;
    int rdo;

    printf("Ingrese un numero: ");
    scanf("%d", &a);

    printf("Ingrese otro numero: ");
    scanf("%d", &b);

    rdo = sumar(a, b);
    printf("Resultado: %d\n", rdo);



    return 0;
}
sumar (int num1, int num2)
{

    int resultado;
    resultado = num1 + num2;

    return resultado;
// version corta return num1 + num2

}

