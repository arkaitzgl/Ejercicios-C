#include <stdio.h>

int fibonacci (int n)

{
    
   if ((n==0)||(n==1))
   return n;
     else 
     return fibonacci(n-2)+fibonacci(n-1);
}

int main ()
{
    int n;
    
    printf ("Introduce un numero: ");
    scanf ("%d", &n);
    if (n<0) 
    printf ("No existe numeros negativos para la sucesion fibonacci");
    else printf ("El equivalente en la sucecion fibonacci es: %d", fibonacci(n));
getchar ();
getchar();
}
        
