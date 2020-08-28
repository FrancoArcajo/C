#include <stdio.h>
#include <stdlib.h>

int main()
{
//para declarar variables
int edad;//en este let se puede guardar numeros enteros
float peso;//en este let se puede guardar numeros con coma
char sexo;//aca solamente puedo guardar una letra y va con comilla simple osea 'esta'
char nombre[20];//en esta puedo guardar un nombre completo porque pedi una cadena de 19 espacio y se guarda va entre comillas dobles
/*esto no se puede hacer
nombre="Juliana";ya no se  puede hacer
*/
//para pedir datos se hace asi
printf("Ingrese edad: ");
scanf("%d",&edad);//El & lo que hace es decirle donde esta la memoria en donde la tiene que guardar osea lo que dice el codigo es escañalo y guardalo en edad

printf("Ingrese peso: ");
scanf("%f",&peso);

printf("Ingrese sexo: ");
fflush(stdin);//Con esto hacemos que no nos tome el enter del teclado
scanf("%c",&sexo);

printf("Ingrese nombre: ");
fflush(stdin);
scanf("%s",nombre);

//para mostrar mensaje
printf("Edad :%d\n",edad); // barra n es el <br> la barra siempre tiene que ser esa
printf("Peso :%.2f\n",peso);
printf("Sexo :%c\n",sexo);
printf("Nombre :%s\n",nombre);

/*las mascaras son:
%d se usa para decir que son decimales
%f se usa para decir que son numeros con coma
%c se usa para decir que son una letra o un valor
%s se usa para decir que son para un conjunto de letras
*/

return 0;
}
