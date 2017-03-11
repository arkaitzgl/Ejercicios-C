#include <stdio.h>
int main ()
{
    int texto[40];
    int x,i; 
    printf("Introduce tu nombre: "); 
    scanf("%s", texto);
    printf("introduce un numero: ");
    scanf ("%d", &x);
    for (i=0; i<=x-1; i++)
    {printf("%s\n", texto);}
     
getchar ();
getchar ();
return 0;
}    
     
     
     
