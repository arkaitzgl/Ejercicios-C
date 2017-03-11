#include <stdio.h>
int main()
{
    int i=0, j=0, aux;
    int numeros[7];
         
    printf("\n Escriba 7 numeros: \n");
    for (i=0; i<7; i++)
       scanf("%d", &numeros[i]);
       
    for (i=7; i>=1; i--)          // Lazos descendentes.
    {
       for (j=1; j<=i; j++)
       {
          if (numeros[j-1] > numeros[j])
          {
             aux = numeros[j-1];        // Intercambia valores.
             numeros[j-1] = numeros[j];
             numeros[j] = aux;
          }
       }
    }
    printf("\n Los numeros quedan ordenados asi: ");  
    for (i=0; i<=6; i++)
       printf("%d,  ", numeros[i]);  // Salida ordenada.
    getchar();
    getchar();
    return 0;    
 }
