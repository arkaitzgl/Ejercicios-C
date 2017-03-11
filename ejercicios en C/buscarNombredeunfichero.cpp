#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    FILE*fichero;
    char nombre [80];
    char linea [101];
    int i;
    
    printf ("Escriba nombre de fichero: ");
    gets (nombre);
        
    fichero=fopen(nombre, "rt");
    if (fichero == NULL)
    {
    printf ("No existe ese fichero");
    exit (1);
    }
    
    while (!feof(fichero))
    {
    for (i=0; i<25; i++)
        {
        fgets (linea, 100, fichero);
        if(!feof(fichero))
        printf ("%s", linea);
        }
    getchar ();
    }
    
    fclose (fichero);
    
    getchar ();
    return (0);
}
    
    
