#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h> console input output //que es una biblioteca donde se guardan entrada y salida de la consola
int main()
{
     char x;
     printf("Ingrese un caracter: ");
     x=getchar();
     printf("x vale %c\n\n",x);

     /*
     getchar()significa tomar  un caracter
     solo reemplaza al scanf("%c",&x); despues para float,int va con scanf
     getchar esta pensado para un solo caracter
     por ejemplo si pongo juan me va a tomar J solamente
     cuando un tipo de dato no va a recibir nada es void
     cuando nosotros le agrergamos valores en realidad estamos agreando parametros
     */
     /*
     tambien esta getch();
     que directamnete toma la letra y muestra asi de una ingresas la letra y ya aparece
     cuando uso una y cuando uso otra es dependiendo de nosotros
     de acuerdo a lo que queremos hacer yo lo usaria para datos seguros
     como desea contiuar s o n y esas cosas
     depende del contexto
     no muestra el dato
     Tambien se utiliza mucho para pausar el programa porque deja titilando el cursor
     */
     /*
     tambien esta getche();
     que toma de una y imprime el dato que se tomo
     la e de getche viene de la palabra eco
     */
     /*
     EN el anterior programa donde puse system(pause); podria haber usado getch();
     Que detiene el programa y deja titilando el cursor esperando a que el usario aprete cualquier tecla
     para explicarle al usuario que hacer se puede poner
     pintf("Presione cualquier tecla para continuar...");
     getch();
     al hacer eso se apreta cualquier tecla y continua la funcion
     */

     return 0;
}
