#include <stdio.h>
#include <string.h>

struct{ 
   char nombre[40];
   int ancho;
   int alto;
   float tamano;
   }imagen[700];

int main() 

{
    int i,opcion;
    int numeroimagenes=0;
    char imagenesbuscar[40];
    int encontrado;
    
do
{ 
    printf ("\n0-Para salir");
    printf ("\n1-Para anadir nueva imagen");
    printf ("\n2-Para mostrar todas las imagenes");
    printf ("\n3-Para buscar imagen");
    printf ("\nSeleccione una opcion: ");
    
    scanf ("%d", &opcion);
    getchar ();    
    
    switch (opcion)
    {
           case 1: 
                if (numeroimagenes<100)
           {
             printf("\nIntroduce nombre imagen: ");
             gets (imagen[numeroimagenes].nombre);
             printf("Introduce anchura de la imagen: ");
             scanf ("%d",&imagen[numeroimagenes].ancho);
             getchar ();
             printf("Introduce altura de la imagen: ");
             scanf ("%d",&imagen[numeroimagenes].alto);
             getchar ();
             printf("Introduce tamano en kb de la imagen: ");
             scanf ("%f",&imagen[numeroimagenes].tamano);
             getchar ();
             numeroimagenes++;
             getchar ();
             }
             else printf ("Ya tienes 100 canciones almacenadas no queda mas espacio");
             break;
           case 2:
               for (i=0; i<numeroimagenes; i++)
               printf ("\nNumero: %d nombre: %s\n",i, imagen[i].nombre);
               break; 
           case 3: printf("\nNombre de la imagen a buscar?: ");
                   gets (imagenesbuscar);
                   encontrado=0;
                   for (i=0; i<numeroimagenes; i++)
                   if (strcmp(imagen[i].nombre, imagenesbuscar)==0)
                   {printf ("\nNombre: %s\n", imagen[i].nombre);
                    printf ("Ancho: %d\n", imagen[i].ancho);
                    printf ("Alto: %d\n",imagen[i].alto);
                    printf ("Tamano(kb): %.2f\n", imagen[i].tamano);
                    encontrado=1;
                    }
                    if (encontrado!=1)
                     printf ("\nNo se ha encontrado\n");
                    break;
    }
}
while (opcion!=0);

getchar ();

getchar ();

return 0; 
}
