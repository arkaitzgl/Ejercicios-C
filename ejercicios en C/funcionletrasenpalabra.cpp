#include <stdio.h>
#include <string.h>

int letrasenpalabra (char palabra[80], char letra)
{
     int i, contador=0;
     for (i=0; i<strlen(palabra);i++)
     {
     if (palabra[i]==letra)
     contador ++;
     }
     return contador;
}

int main ()

{
    char palabra[80], letra;
    
    printf ("Introduce una palabra: ");
    scanf ("%s", palabra);
    getchar();
    printf ("Introduce una letra: ");
    scanf ("%c", &letra);
    getchar();
    letrasenpalabra (palabra, letra);
    printf ("En la palbra %s, aparece la letra %c %d veces",palabra, letra, letrasenpalabra (palabra, letra));
    
getchar();
getchar();
return 0;
}

