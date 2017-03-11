#include <stdio.h>

int sumavector (int v[], int n)

{
    if (n==0)
    return v[0];
    else 
    return v[n]+sumavector(v,n-1);
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
    printf ("La suma de los elementos del vector es: %d", sumavector(v, n));
getchar ();
getchar ();
return 0;
}

    
    




