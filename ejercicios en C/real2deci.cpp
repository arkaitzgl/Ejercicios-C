#include <stdio.h>

int main ()

{
    float n, m, resultado;
    
  
        printf ("introduce un numero: ");
        scanf ("%f", &n);
       printf ("introduce un numero: ");
        scanf ("%f", &m);
        resultado=n/m;
        if (m==0)
        printf("no se puede dividir entre 0");
        else
        printf ("el resultado de %f/%f=%5.2f", n, m, resultado);
      
        
      
    
getchar ();
getchar ();
return 0;
}
        
