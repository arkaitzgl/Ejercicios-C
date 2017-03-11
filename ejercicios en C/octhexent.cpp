#include <stdio.h>

int main ()

{
   int n;
    
  do
    {
        printf ("introduce un numero: ");
        scanf ("%d", &n);
        printf ("el numero en hexadecimal es: %x\n",n);
        printf ("el numero en octal es: %o\n",n);
        
        }
        while (n!=0);
    
getchar ();
getchar ();
return 0;
}
        
        
          
