#include <stdio.h>
#include <stdlib.h>

int main ()

{
int* datos;
int i, n=0, opcion;

do 
{
  printf ("\nPulse 0 para salir\n");
  printf ("Pulse 1 para introducir dato(max 10)\n");
  printf ("Pulse 2 para mostrar datos dato\n");
  printf ("Pulse 3 para eliminar dato\n");
  scanf ("%d", &opcion);   
  printf ("\n");
  
  switch (opcion)
  {
   case 1:
   printf ("Cuantos datos desea añadir: ");
   scanf ("%d", &n);
   datos= (int*) malloc (n*sizeof(int));
   if (datos==NULL)
   printf ("No entran tantos datos en memoria");
   for (i=0; i<n; i++)
   {
       printf ("Introduzca datos%d: ", i+1);
       scanf ("%d", datos+i);
   }
   break;
   
   case 2:
   printf ("Los datos son:\n");         
   for (i=0; i<n; i++)
   printf ("%d\n", *(datos+i));
   break;
   
  } 
} 
while (opcion!=0);
free (datos);
getchar ();
getchar ();        
  
return 0;
}

