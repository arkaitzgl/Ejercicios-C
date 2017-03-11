#include <stdio.h>
#include <string.h>

 
int invierte (char palabra[])
{
   int i, x;
   char palabra2;
   x=strlen(palabra);
   x=x-1;
   for (i=0; i<=strlen(palabra); i++)
   { 
   printf ("%c",palabra[x]);
   x--;
   } 
  // strcpy (palabra2,palabra);
} 


 int main()
 {
      char palabra[20];  
      int x,i;
     
      printf("Escriba una palabra: ");
      scanf("%s", palabra);
      getchar();
      printf("La forma invertida es:");
      invierte(palabra);

 
getchar();
getchar();
      return 0;          
}
