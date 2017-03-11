#include <stdio.h>
#include <string.h>

int main ()
{
    char texto[40], texto1[40], texto2[40], texto3[40];
    printf("Introduce una palabra: ");
    gets (texto);
    printf("Introduce otra palabra: ");
    gets (texto1);
    strcat(texto, " ");
    strcat(texto, texto1);
    printf ("%s\n", texto);
    printf("Introduce otra palabra: ");
    gets (texto3);
    strcat(texto, texto3);
    strcat(texto2, texto3);
    printf ("%s\n", texto);
    printf ("%s\n", texto2);
    
    
    
getchar ();
getchar ();
return 0;
}
    
