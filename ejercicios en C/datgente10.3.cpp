#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct
{char nombre[40];
 char edad[3];
 char residencia [40];
}persona[10];

int main ()

{   char linea[80];
    int i, opcion=0;
       
    FILE*fichero;
    fichero=fopen("gente.dat", "wt");
    
    for (i=0; i<10; i++)
    {
    printf ("Introduzca nombre: ");
    gets (persona[i].nombre);
    printf ("Introduzca edad: ");
    gets (persona[i].edad);
    printf ("Introduzca residencia: ");
    gets (persona[i].residencia);
    fwrite (&persona[i], 1, sizeof(persona[i]),fichero);
    }
    fclose (fichero);
    
    if ((fichero=fopen("gente.dat", "rt"))==NULL)
    {
    printf ("No existe el fichero");
    exit (1);
    }
    
    while (!feof(fichero))    
    {
    fread (&persona[i], 1, sizeof(persona[i]),fichero);
    if (!feof(fichero))    
    printf ("%s\n%s\n%s\n", persona[i].nombre, persona[i].edad, persona[i].residencia);
    }
        
    fclose (fichero);
getchar();
    return (0);
}
    
