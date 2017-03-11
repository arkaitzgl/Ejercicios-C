#include <stdio.h>
#include <string.h>

struct duracioncancion
       {
       int minutos;
       int segundos;
       };

struct{ 
   char artista[40];
   char titulo[40];
   struct duracioncancion duracion;
   float tamano;
   }cancion[100];

int main() 

{
    int i,opcion;
    int numerodecaciones=0;
    char cancionabuscar[40];
    int encontrado;
    
do
{ 
    printf ("\n0-Para salir");
    printf ("\n1-Para anadir nueva cancion");
    printf ("\n2-Para mostrar todas las canciones");
    printf ("\n3-Para buscar cancion");
    printf ("\nSeleccione una opcion: ");
    
    scanf ("%d", &opcion);
    getchar ();    
    
    switch (opcion)
    {
           case 1: 
                if (numerodecaciones<100)
           {
             printf("Introduce nombre artista: ");
             gets (cancion[numerodecaciones].artista);
             printf("Introduce titulo cancion: ");
             gets (cancion[numerodecaciones].titulo);
             printf("Introduce minutos de la cancion: ");
             scanf ("%d",&cancion[numerodecaciones].duracion.minutos);
             getchar ();
             printf("Introduce segundos de la cancion: ");
             scanf ("%d",&cancion[numerodecaciones].duracion.segundos);
             getchar ();
             printf("Introduce tamano en kb de la cancion: ");
             scanf ("%f",&cancion[numerodecaciones].tamano);
             getchar ();
             numerodecaciones++;
             getchar ();
             getchar ();
             }
             else printf ("Ya tienes 100 canciones almacenadas no queda mas espacio");
             break;
           case 2:
               for (i=0; i<numerodecaciones; i++)
               printf ("\nNumero: %d titulo: %s\n.",i, cancion[i].titulo);
               break; 
           case 3: printf("¿Que cancion o artista desea buscar?: ");
                   gets (cancionabuscar);
                   encontrado=0;
                   for (i=0; i<numerodecaciones; i++)
                   if ((strcmp(cancion[i].artista, cancionabuscar)==0)||(strcmp(cancion[i].titulo, cancionabuscar)==0))
                   {printf ("Artista: %s\n", cancion[i].artista);
                    printf ("Titulo: %s\n", cancion[i].titulo);
                    printf ("Duracion: %d:%d\n",cancion[i].duracion.minutos,cancion[i].duracion.segundos);
                    printf ("Tamano(kb): %.2f\n", cancion[i].tamano);
                    encontrado=1;
                    }
                    if (encontrado!=1)
                     printf ("No se ha encontrado");
                    break;
    }
}
while (opcion!=0);

getchar ();

getchar ();

return 0; 
}
