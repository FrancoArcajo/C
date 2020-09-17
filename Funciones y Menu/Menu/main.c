#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char menu();

int main()
{
    char confirmacion;
    char seguir = 's';
    int flagA = 0;
    int flagB = 0;

    do
    {
        system("cls");

        switch(menu())
        {
        case 'a':
            printf("Hola\n\n");
            flagA = 1;
            break;
        case 'b':
            if(flagA == 0)
            {
                printf("Primero tendrias que saludarme\n\n");
            }
            else
            {
                printf("Chin chin...\n\n");
                flagB = 1;
            }
            break;
        case 'c':
            if(flagA == 0)
            {
                printf("Primero tendrias que saludarme\n\n");
            }
            else if(flagB == 0)
            {
                printf("Te vas sin brindar\n\n?");
            }
            else
            {
                printf("Chau nos vemos\n\n");
                flagA = 0;
                flagB = 0;
            }

            break;
        case 'd':
            printf("Realmente quiere salir?");
            fflush(stdin);
            scanf("%c",&confirmacion);
            /*while(confirmacion != 's' && confirmacion != 'n'){
                printf("Opcion invalida. Realmente quiere salir?");
                fflush(stdin);
                scanf("%c",&confirmacion);
            }*/
            if(confirmacion == 's')
            {
                printf("Adiooos\n\n");
                seguir = 'n';
            }
            break;
        default:
            printf("Ingrese un caracter valido\n\n");
        }

        system("pause");

    }
    while(seguir == 's');
    return 0;
}

char menu()
{

    char opcion;
    system("cls");

    printf(" **Menu de opciones** \n\n");
    printf("a Saludar\n");
    printf("b Brindar\n");
    printf("c Despedir\n");
    printf("d Salir\n");
    printf("Ingrese la opcion: ");
    fflush(stdin);
    scanf("%c",&opcion);
}
