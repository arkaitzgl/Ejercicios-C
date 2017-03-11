#include <stdio.h>
#include <string.h>

char ultimaLetra (char* cadena)
{  
   return cadena[strlen(cadena)-1];
}

int main()
{
   char palabra[10];
   int i;
   
   printf("Escriba una palabra\n");
   scanf("%s", &palabra);
   printf("La ultima letra es: %c", ultimaLetra(palabra));
   
   return 0;
}
