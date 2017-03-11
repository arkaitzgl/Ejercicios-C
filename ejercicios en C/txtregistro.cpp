#include <stdio.h>
#include <string>

int main()
{
    FILE*fichero;
    char frase [80];
    fichero = fopen ("registroDeUsuario.txt", "at");
    
    do 
    {
    printf ("Escriba una frase: ");
    gets (frase);
    if (strcmp(frase,"")!=0);
    fprintf (fichero, "%s\n", frase);
    }
    while (strcmp(frase,"")!=0);
    
    fclose (fichero);
    return 0;
}
