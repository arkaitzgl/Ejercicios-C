#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct
{char nombre[40];
 char edad[3];
 char residencia [40];
}persona;

int main ()

{   char linea[80];
       
    FILE*fichero;
    fichero=fopen("gente.dat", "wt");
    
    printf ("Introduzca nombre: ");
    gets (persona.nombre);
    fprintf (fichero, "Nombre: %s\n", persona.nombre);
    printf ("Introduzca edad: ");
    gets (persona.edad);
    fprintf (fichero,"Edad: %s\n", persona.edad);
    printf ("Introduzca residencia: ");
    gets (persona.residencia);
    fprintf (fichero, "Residencia: %s\n", persona.residencia);
    
    fclose (fichero);
    
    fichero=fopen("gente.dat", "rt");
    if (fichero==NULL)
    {
    printf ("No existe el fichero");
    exit (1);
    }
    while (!feof(fichero))
    {
    fgets (linea, 80, fichero);
    if (!feof(fichero))
    puts (linea);
    }
    
    fclose (fichero);
    
    
    getchar();
    return (0);
}
    
