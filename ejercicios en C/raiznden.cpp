#include <stdio.h>
#include <math.h>

int main ()

{
    float n, n1, r;
    
    printf ("Introduce el numero del que desea calcular la raiz: ");
    scanf ("%f", &n);
    printf ("Introduce el numero de la raiz: ");
    scanf ("%f", &n1);
    r=pow(n,(1/n1));
    printf ("La raiz %.2f de %.2f es %.2f", n1, n, r);
    
getchar ();
getchar ();
}
    
