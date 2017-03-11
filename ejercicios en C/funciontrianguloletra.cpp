#include <stdio.h>

int trianguloletra (char letra, int n)

{
    int i;
    while (n>0)
    {
    for (i=0; i<n;i++)
    printf ("%c", letra);
    printf ("\n");
    n--;
    }
}

int main ()
{
    int n;
    char letra;
    printf ("Introduzca una letra: ");
    scanf ("%c", &letra);
    printf ("Introduzca un numero: ");
    scanf ("%d", &n); 
    trianguloletra (letra, n);

getchar ();
getchar();
return 0;
}
    
