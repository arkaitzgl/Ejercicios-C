#include <stdio.h>
#include <math.h>

float radianes (float g)

{
    float r;
        
    r=(g*M_PI)/180;

return r;
}

int main ()
{
    float grados, seno;
    
    printf ("Introduzca grados: ");
    scanf ("%f", &grados);
    printf ("%f",radianes (grados));
    seno=sinh(radianes (grados));
    printf ("El seno de %.4f grados es %f", grados, seno);
    
getchar ();
getchar ();
return 0;
}
