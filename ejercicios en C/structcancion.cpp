#include <stdio.h>
#include <string.h>

struct{ 
   char artista[40];
   char titulo[40];
   float duracion;
   float tamano;
}cancion;

int main() 

{
 printf("Introduce nombre artista: ");
 gets (cancion.artista);
 printf("Introduce titulo cancion: ");
 gets (cancion.titulo);
 printf("Introduce duracion en seg. de la cancion: ");
 scanf ("%f",&cancion.duracion);
 printf("Introduce tamaño en kb de la cancion: ");
 scanf ("%f",&cancion.tamano);
 puts(cancion.artista);
 puts(cancion.titulo);
 printf ("%.2f\n",cancion.duracion);   
 printf ("%.2f\n",cancion.tamano);

getchar ();

getchar ();

return 0; 
}
