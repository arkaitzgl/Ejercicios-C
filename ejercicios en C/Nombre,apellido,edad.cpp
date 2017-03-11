#include <stdio.h>


struct{ 
   char nombre[40];
   char apellido[40];
   int edad;
   }persona;

int main() 

{  
  printf("Introduce nombre: ");
  gets (persona.nombre);
  printf("Introduce apellido: ");
  gets (persona.apellido);
  printf("Introduce edad: ");
  scanf ("%d",&persona.edad);
  getchar ();
                      
  printf ("%s,%s,%d", persona.nombre,persona.apellido,persona.edad);

getchar ();

getchar ();

return 0; 
}
