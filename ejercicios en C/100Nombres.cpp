#include <stdio.h>
#include <string.h>

int main() 
{ 
   char nombres[100][80];
   char nombreBuscar[80];
   int i, x=0;

   printf("Escribe los nombres:\n");  
   for(i=0;i<100;i++)
     {               gets(nombres[i]);
                     x++;
                     if(strcmp(nombres[i], "")==0)
                     break;
     }
     for(i=0;i<x;i++)
     {
     puts(nombres[i]);
     }
    


getchar ();

getchar ();

return 0; 
}
