#include <stdio.h>
#include <string.h>

struct{ 
   char nombre[40];
   int dia;
   int mes;
   int ano;
   }persona[8];

int main() 


{ 
 int i,k, opcion;   
    
    
     
  for (i=0; i<8; i++)
  {  
  printf("Introduce nombre: ");
  scanf ("%s",persona[i].nombre);
  printf("Introduce dia: ");
  scanf ("%d",&persona[i].dia);
  printf("Introduce mes: ");
  scanf ("%d",&persona[i].mes);
  printf("Introduce ano: ");
  scanf ("%d",&persona[i].ano);
  printf("\n");
  } 
       do {
             do
             { printf ("\nIntroduce un numero de mes o 0 para salir:");              
             scanf ("%d", &opcion);
              }
               while ((opcion<0)||(opcion>12));
             k = 0;
             for (i=0; i<12; i++)   
                 {   
                      if (persona[i].mes == opcion)
        
                          {
                           printf ("\n%s:", persona[i].nombre);
                           printf ("%d/",persona[i].dia);
                           printf ("%d/",persona[i].mes);
                           printf ("%d",persona[i].ano);    
                           k++;
                           }
                  }
       }
       while (opcion != 0);
getchar ();

getchar ();

return 0; 
}
