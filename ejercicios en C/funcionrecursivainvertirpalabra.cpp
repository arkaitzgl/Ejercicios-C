#include <stdio.h>
#include <string.h>

 
int invierte (char palabra[])
{
   int i, x;
   x=strlen(palabra);
   for (i=0; i<=strlen(palabra); i++)
   { 
   printf ("%c",palabra[x]);
   x--;
   } 
} 


 int main()
 {
      char palabra[20];  
      int x,i;
     
      printf("Escriba una palabra: ");
      scanf("%s", palabra);
      getchar();
      printf("La forma invertida es: ");
      invierte(palabra);

 
getchar();
getchar();
      return 0;          
}

