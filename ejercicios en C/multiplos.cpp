#include <stdio.h> 
int main() 
{ 
    int  numero=0,x,resultado; 
    
   printf("Introduzca numero: "); 
           scanf("%d", &x); 
           
      do { 
        numero++;
    if (x%numero==0)
    printf("%d\n",numero); 
     } 
    while (numero <= x); 
    
     
    getchar ();
    getchar ();
    return 0; 
    }
