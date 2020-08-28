#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float temperatura;
    float maxTemp;
    float promedioEdad;
    char sexo;
    char inicial;
    char inicialMaxT;
    int edad;
    int contM = 0;
    int contF = 0;
    int acumEdad = 0;


    for(int i = 0; i < 5; i++)
    {

        printf("Ingrese temperatura: ");
        scanf("%f", &temperatura);
        while ( temperatura > 45 || temperatura < 33)
        {
            printf("Temperatura invalida. Ingrese otra temperatura: ");
            scanf("%f", &temperatura);
        }
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &sexo);
        sexo = tolower(sexo);

        while(sexo != 'f' && sexo != 'm')
        {
            printf("Incorrecto. Ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &sexo);
            sexo = tolower(sexo);

        }

        printf("Ingrese edad: ");
        scanf("%d", &edad);
        while ( edad > 90 || edad < 15)
        {
            printf("Edad invalida. Ingrese edad: ");
            scanf("%d", &edad);
        }

        printf("Ingrese inicial del nombre: ");
        fflush(stdin);
        scanf("%c", &inicial);

        if ( sexo == 'f' )
        {

            if( contF == 0 || temperatura > maxTemp);
            {
                maxTemp = temperatura;
                inicialMaxT = inicial;
            }

            contF++;
        }

        else
        {
            contM++;
        }

        acumEdad += edad;
        // acumEdad = acumEdad + edad;

    }

    promedioEdad = (float) acumEdad / 5;

    printf("Cantidad de mujeres: %d\n", contF);
    printf("Cantidad de varones: %d\n", contM);
    printf("Promedio de edad: %.2f\n", promedioEdad);
    if (contF == 0)
    {
        printf("No se registraron mujeres");
    }
    else
    {
        printf("Mujer con mayor temperatura inicial %c y tuvo %.2f grados\n", inicialMaxT, maxTemp);
    }


    return 0;

}







