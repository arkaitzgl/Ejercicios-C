#include <stdio.h> 
int main() 
{ 
    int  numero,x,resultado; 
    
   printf("Introduzca numero: "); 
           scanf("%d", &x); 
        
        for (numero=1; numero<=x; numero++)
         {                        
         if (x%numero==0)
          printf("%d\n",numero); 
         }
  
    getchar ();
    getchar ();
    return 0; 
    }
