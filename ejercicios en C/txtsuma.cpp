#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    FILE*resultados;
    int num=0,num1=0,suma;
    resultados=fopen("sumas.txt","at");
    
    if (resultados == NULL)
    printf ("No existe ese fichero");
    
    printf ("Introduce numero: ");
    scanf ("%d",&num);
    printf ("Introduce numero: ");
    scanf ("%d",&num1);
    suma= num+num1;
    printf ("%d + %d = %d",num , num1, suma);
    fprintf (resultados,"\n%d + %d = %d",num , num1, suma);
    
    fclose(resultados);

    return 0;
}
    
