#include <stdio.h>
#include <stdlib.h>

int contarVocal (char vec[], int tam, char vocal);

int main()
{
    char vocales[6];
    int cantidad;
    char x = 'i';

    for(int i=0; i < 6; i++){
        printf("Ingrese una vocal: ");
        fflush(stdin);
        scanf("%c", &vocales[i]);
    }
    cantidad = contarVocal( vocales,6,x);

    printf("La vocal %c aparece %d de veces\n", x, cantidad);

    return 0;
}
int contarVocal (char vec[], int tam, char vocal) {
  int contador = 0;
       for(int i=0; i < tam; i++) {
        if( vec[i] == vocal) {
            contador++;
        }
       return contador;
    }

}

