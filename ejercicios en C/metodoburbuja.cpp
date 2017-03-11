#include <stdio.h>
#include <string.h>

int main ()

{
    int i, j, k;
    int numero [7];
    
    for (i=0; i<7; i++)
    {
    printf ("Introduzca un numero: ");
    scanf ("%d", &numero[i]);
    }
    
    for (i=0; i<7-1; i++)
    {
        for (j=i+1; j<7; j++)
        {
            if (numero[i]>numero[j])
            {
               k=numero[i];
               numero[i]=numero[j];
               numero[j]=k;
            }
        }
    }
    
    printf ("Los numeros de menor a mayor son:\n");
    for (i=0; i<7; i++)
    printf ("%d\n", numero[i]);    
    
    
    
getchar ();

getchar ();

return 0; 
}  
    
    
