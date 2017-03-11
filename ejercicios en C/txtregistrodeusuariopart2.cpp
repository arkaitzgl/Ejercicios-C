#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()

{
    FILE*fichero;
    char nombre [80]= "registroDeUsuario.txt";
    char linea [81];
    int i;
    
    fichero= fopen (nombre, "rt");
    
    if (fichero == NULL)
    {
    printf ("No existe el fichero");
    getchar();
    exit(1);
    }
    
    for (i=0; i<3; i++)
        {
        fgets (linea, 100, fichero);
        if(!feof(fichero))
        printf ("%s", linea);
        }
    
    getchar ();
    getchar ();
    
    return (0);
}
