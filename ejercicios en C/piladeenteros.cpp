#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int d[10];
    int opcion, i=0,x;
    
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
   if (i<10)
   { 
   printf ("introduce dato: ");
   scanf ("%d", &d[i]);
   i++;
   }
   else 
   printf ("\nMaximo de datos");
   break;
   
   case 2:  
   printf ("Los datos son:\n");         
   for (x=0; x<i; x++)
   printf ("%d\n", d[x]);
   break;    
   
   case 3:
   for (x=0; x<i; x++)
   x=i;
   //d[x]=NULL;
   i--;
   }
 }
while (opcion!=0);



getchar ();
getchar();
return 0;
}
    
