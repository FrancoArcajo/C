#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>


#define TAM 6

void mostrarVectorEnteros(int vec[], int tam );

int main()
{
    int numeros [TAM];
    int acumulador = 0;

    // cargo los primeros 5 elementos
    for(int i=0; i < TAM -1; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }
    // acumulo las posiciones cargadas y asigno al ultimo elemento el total
    for(int i=0; i < TAM; i++)
    {
        if (i != 5){
            acumulador += numeros[i];
        }
        else{
            numeros[i] = acumulador;
        }
    }

    mostrarVectorEnteros(numeros, TAM );

    return 0;
}


void mostrarVectorEnteros (int vec[], int tam) {

for(int i=0; i < tam; i++){
    printf("%d ",  vec[i]);
 }
 printf("\n\n");

}
