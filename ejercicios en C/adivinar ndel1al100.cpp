#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()

{
    int n, n2, i;
    
    srand (time(0));
    n= rand () % 100+1;
    printf ("%d", n);
    printf ("\nTienes 6 intentos para acertar un numero que se encuentra entre 1 y 100\n");
    i=1;
    
    do{
    printf ("Introduce numero: ");
    scanf ("%d", &n2);
    i++;
    }
    while ((i<=6)&&(n!=n2));
    if (n==n2)
    printf ("Has acertado");
    else printf ("Lo siento no quedan mas intentos");
    
    getchar ();
    getchar();
    return 0;
}
