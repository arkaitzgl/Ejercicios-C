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
    fprintf (fichero, "Nombre: %s\n", persona[i].nombre);
    printf ("Introduzca edad: ");
    gets (persona[i].edad);
    fprintf (fichero,"Edad: %s\n", persona[i].edad);
    printf ("Introduzca residencia: ");
    gets (persona[i].residencia);
    fprintf (fichero, "Residencia: %s\n", persona[i].residencia);
    }
    fclose (fichero);
    
    fichero=fopen("gente.dat", "rt");
    if (fichero==NULL)
    {
    printf ("No existe el fichero");
    exit (1);
    }
    
    printf ("Teclee un numero del 1 al 10 para ver el dato que desea buscar: ");
    scanf ("%d", &opcion); 
    getchar ();  
    
    
    for (i=0; i<opcion; i++)
    {
    if (i==(opcion-1))    
    printf ("%s\n %s\n %s\n ", persona[i].nombre, persona[i].edad, persona[i].residencia);
    }
        
    fclose (fichero);
    
    getchar();
    getchar();
    return (0);
}
