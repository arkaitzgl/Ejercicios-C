#include <stdio.h>
#include <string.h>

struct{ 
   char nombre[40];
   char direccion[40];
   int telefono;
   int edad;
   }persona[50];

int main() 


{ 
 int i,k=0, opcion, anos, encontrado;  
 char inicial[1];   
        
 for (i=0; i<50; i++)
  {  
  printf("Introduce nombre: ");
  gets (persona[k].nombre);
  if(strcmp(persona[k].nombre, "")==0)
  break;
  printf("Introduce direccion: ");
  scanf ("%s",persona[k].direccion);
  getchar();
  printf("Introduce telefono: ");
  scanf ("%d",&persona[k].telefono);
  getchar();
  printf("Introduce edad: ");
  scanf ("%d",&persona[k].edad);
  getchar();
  printf("\n");
  k++;
}

do 
{
    printf ("\nPulse uno de los siguientes numeros:");
    printf ("\n0-Para salir");
    printf ("\n1-Para mostrar lista de todos los nombres");
    printf ("\n2-Para mostrar las personas de una cierta edad.");
    printf ("\n3-Para las personas cuya inicial sea la que desee");
    printf ("\nSeleccione una opcion: ");
    
    scanf ("%d", &opcion);
    getchar ();  
    
    switch (opcion)
    {
           case 1: printf ("\nLa lista de los nombres introducidos es:\n");
                   for (i=0; i<k; i++)
                   printf("\nNumero: %d, nombre: %s\n",i, persona[i].nombre);
                   break;
           
           case 2: printf ("\nIntroduce la edad de la personas a buscar: ");
                   scanf ("%d", &anos);
                   getchar ();
                   encontrado=0;                  
                   for (i=0; i<k; i++)
                   if (persona[i].edad == anos)
                   {
                   printf ("\nNumero:%d, Nombre: %s, tiene %d anos\n",i ,persona[i].nombre, persona[i].edad); 
                   encontrado=1;
                   }
                   if (encontrado!=1) printf ("No hay nadie con esa edad\n");
                   break;
           
           case 3: printf ("\nIntroduce la inicial de la personas a buscar: ");
                   scanf ("%s", inicial);
                   encontrado=0; 
                   for (i=0; i<k; i++)
                   if (persona[i].nombre[0]== inicial[0])
                   {                                
                   printf ("\nNumero:%d, Nombre: %s\n",i ,persona[i].nombre);
                   encontrado=1;
                   }
                   if (encontrado!=1) printf ("\nNingun nombre empieza por esa inicial\n");
                   break;
    }
}while (opcion != 0);

getchar ();

getchar ();

return 0; 
}
