#include <stdio.h>

int esPrimo (int n)
{
    int i, resto;
    for (i=2; i<n-1; i++)
    {
    resto=n%i;
    if ((resto==0)&&(n!=2))
    return 0; //no es primo
    }
    return 1; // si es primo
}

int main()
{
    int n;
    printf ("Introduce un numero: ");
    scanf ("%d", &n);
    printf ("Si es primo aparecera 1 sino 0 y el resultado es %d",esPrimo(n));

getchar ();
getchar();
return 0;
}
