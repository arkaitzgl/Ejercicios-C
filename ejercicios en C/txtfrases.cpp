#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()

{
    FILE*fichero;
     
    char frase[80];
    char nombre [80]= "d:\\xprc\\frase.txt"; //si no quiero utilizar esta variable cambiaria lo siguiente*
    char linea [81]; 
    
    
fichero = fopen("frase.txt", "wt");
do
{
printf("Escriba una FRASE (o pulse intro sin teclear nada para acabar): ");
gets(frase);
if (strcmp(frase, "") != 0)
fprintf(fichero, "%s\n", frase);
}
while (strcmp(frase, "") != 0);
fclose(fichero);
    
   
    fichero= fopen (nombre, "rt");  //*en lugar de nombre pondria "frases.txr" y asi no usaria la variable
    
    if (fichero == NULL)
    {
    printf ("No existe el fichero");
    getchar();
    exit(1);
    }
    while (! feof(fichero))
    {
    fgets (linea, 80, fichero);
    if (! feof(fichero))
    puts (linea);   //si no quiero espacios entre lineas usaria: printf ("%s",linea);
    }
    fclose(fichero);
    
    getchar ();
    getchar ();
    
    return (0);
}
