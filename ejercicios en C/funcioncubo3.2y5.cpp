#include <stdio.h>

float cubo (float n)
{
    return n*n*n;
}

int main ()
{
    float numero, resultado;
    
    numero=5;
    resultado=cubo(numero);
    printf ("el cubo del numero 5 es %f",resultado);
    printf (" y el de 3.2 es %f",cubo(3.2));
 
 
 getchar ();   
    return 0;
}

