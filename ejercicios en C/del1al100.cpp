#include <stdio.h>

int main ()

{ 
    int n=50, numero, i;
 
    printf ("intenta adivinar un numero entre el 1 y el 100 en seis intentos\n");
    for (i=1; i<=6; i++)
    
    { 
        printf("Introduzca numero: "); 
           scanf("%d", &numero); 
        if (numero==n)  goto salida;
        if (numero<n) printf ("te has quedado corto\n");
        else printf ("te has pasado\n");
        
        } 
          salida:
               if (numero==n) printf("Has acertado\n");
                  else printf ("se han acabado los seis intentos");
   
getchar ();    
getchar ();
return 0;    
}
