#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct
{char nombre[21];
 char edad[4];
 char residencia [21];
}persona;

int main ()

{   FILE*fichero;
    fichero=fopen("gente.dat", "wb");
    
    printf ("Introduzca nombre: ");
    gets (persona.nombre);
    printf ("Introduzca edad: ");
    gets (persona.edad);
    printf ("Introduzca residencia: ");
    gets (persona.residencia);
    fwrite (&persona, 1, sizeof(persona),fichero);
    
    fclose (fichero);
    
    if ((fichero=fopen("gente.dat", "rb"))==NULL)
    {
    printf ("No existe el fichero");
    exit (1);
    }
    while (!feof(fichero))
    {
    fread (&persona, 1, sizeof(persona),fichero);
    if (!feof(fichero))
    printf ("%s\n%s\n%s\n", persona.nombre, persona.edad, persona.residencia);
    }
    
    fclose (fichero);
    
    return (0);
}
