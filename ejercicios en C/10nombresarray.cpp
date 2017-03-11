#include <stdio.h>
#include <string.h>

int main() 
{ 
   int i;
   char nombres[10][80];
   char nombreBuscar[80];
   int encontrado;
   
   printf("\n Escriba 10 nombres: \n");
   
   for (i=0; i<10; i++)
       gets(nombres[i]);
   do
   {
       printf("Escriba nombre a buscar, o \"fin\" para terminar: ");
       gets(nombreBuscar);
       encontrado = 0;
       
       if (strcmp(nombreBuscar, "fin") != 0)
       {
          for (i=0; i<10; i++)
          {
              if (strcmp(nombreBuscar, nombres[i]) == 0)
                  encontrado = 1;
          }
          if (encontrado == 1)
              printf("Este nombre se encuentra en la lista\n");
          if (encontrado !=1)
              printf("Este nombre no se encuentra en la lista\n");
       }
}
while (strcmp(nombreBuscar, "fin") != 0);

getchar ();

getchar ();

return 0; 
}
