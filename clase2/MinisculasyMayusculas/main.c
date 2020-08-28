#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   char letra = 'A';
   letra = tolower(letra);

   char letra = 'a';
   letra = toupper(letra);

   printf("Letra vale: %c", letra);
    return 0;
}
