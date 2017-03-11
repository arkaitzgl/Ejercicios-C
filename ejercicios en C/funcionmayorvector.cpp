#include <stdio.h>

int mayorvector (int v[], int n)

{
    int aux;
    if (n==0)
    return v[0];
    else 
    aux= mayorvector (v, n-1);
    if (v[n]> aux)
    return v[n];
    else
    return aux;
}

int main()
{
    int n, i;
    int v[20];
    
    printf ("Introduce elementos del vector: ");
    scanf ("%d", &n);
    getchar();
    printf ("Introduzca los %d elementos:\n",n);
    for (i=0; i<n; i++)
    {
    printf ("\tv[%d]: ",i);
    scanf("%d", &v[i]);
    }
    printf ("El mayot de los elementos del vector es: %d", mayorvector(v, n));
getchar ();
getchar ();
return 0;
}

    
