#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int n, i;
    char p[5]="Hola";
    srand (time(0));
    n = rand () %6+5;
    printf ("%d\n", n);
    for (i=0; i<n; i++)
    printf ("%s\n", p);
    
    getchar ();
    getchar ();
    return 0;
}
    
    
