#include <stdio.h>
int main ()
{
    int numero [10];
    int suma, media, i,x; 
     printf("introduce un numero: ");
     scanf ("%d", &numero [0]);
     printf("introduce un numero: ");
     scanf ("%d", &numero [1]);
     printf("introduce un numero: ");
     scanf ("%d", &numero [2]);
     printf("introduce un numero: ");
     scanf ("%d", &numero [3]);
     printf("introduce un numero: ");
     scanf ("%d", &numero [4]);
     printf("introduce un numero: ");
     scanf ("%d", &numero [5]);
     printf("introduce un numero: ");
     scanf ("%d", &numero [6]);
     printf("introduce un numero: ");
     scanf ("%d", &numero [7]);
     printf("introduce un numero: ");
     scanf ("%d", &numero [8]);
     printf("introduce un numero: ");
     scanf ("%d", &numero [9]);
  
     suma=0;
     for (i=0; i<=9; i++) 
     suma += numero[i]; 
     printf("Su suma es %d\n", suma);
     media=suma/10;
     printf("Su media es %d", media);
     printf("\nlos valores que estan por encima de la media son: ");
     for (x=0; x<=9; x++) 
     if (numero [x] > media)
     printf ("\n%d", numero [x]);
     
     
getchar ();
getchar ();
return 0;
}    
     
     
     
