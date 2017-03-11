#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct{char nombreFich[41]; /* Nombre del fichero */ 
       unsigned long tamanyo; /* El tamaño en bytes */ 
       } fichas;
       
int numeroFichas=0; /* Número de fichas que ya tenemos */
 int i, l; /* Para bucles */ 
 int opcion; /* La opcion del menu que elija el usuario */ 
 char textoTemporal[40]; /* Para cuando preguntemos al usuario */ 
 unsigned long numeroTemporal; 

int main() 

{ 
  FILE* fichero;
  if ((fichero =fopen("Ejemplo53.txt", "rt"))!=NULL)
  {
  while (!feof(fichero))
  {
  fread (&fichas, 1, sizeof(fichas), fichero);
  if (!feof(fichero))
  printf("Nombre: %s; Tamaño: %ld Kb\n", fichas.nombreFich, fichas.tamanyo); 
  }
  fclose (fichero);
  }
  
  fichero =fopen("Ejemplo53.txt", "a+t");  
    
    inicio:
    do { /* Menu principal */ 
    printf("Escoja una opción:\n"); 
    printf("1.- Anadir datos de un nuevo fichero\n"); 
    printf("2.- Mostrar los nombres de todos los ficheros\n"); 
    printf("3.- Mostrar ficheros que sean de mas de un cierto tamaño\n"); 
    printf("4.- Ver datos de un fichero\n"); 
    printf("5.- Salir\n"); /* Para evitar problemas con datos mal introducidos, leemos con "gets" y luego lo filtramos con "sscanf" */ 
    gets (textoTemporal); 
    sscanf(textoTemporal, "%d", &opcion); /* Hacemos una cosa u otra según la opción escogida */ 
    switch(opcion) 
    { 
                   case 1: /* Añadir un dato nuevo */ 
                   
                   
                   printf("Introduce el nombre del fichero: "); 
                   gets(fichas.nombreFich); 
                   if(strcmp(fichas.nombreFich, "")==0) 
                         {
                         printf ("\nError no se pueden introducir nombre de fichero vacio\n\n");
                         goto inicio;
                         }
                   printf("Introduce el tamaño en KB: "); 
                   gets(textoTemporal); 
                   if  (strchr(textoTemporal, '-')!=0)
                         {
                         printf ("\nError no se pueden introducir un numero negativo\n\n");
                         goto inicio;
                         }
                   sscanf(textoTemporal,"%ld",&fichas.tamanyo);
                   fseek(fichero, 0, SEEK_SET);
                   fwrite (&fichas, 1, sizeof(fichas), fichero);
                   numeroFichas++; /* Y ya tenemos una ficha más */ 
                   
                   break; 
                   
                   case 2: /* Mostrar todos */
                   while (!feof(fichero))
                   {
                   fread (&fichas, 1, sizeof(fichas), fichero);
                   if (!feof(fichero))
                   printf("Nombre: %s; Tamaño: %ld Kb\n", fichas.nombreFich, fichas.tamanyo); 
                   }
                   
                   break; 
                   
                   case 3: /* Mostrar según el tamaño */ 
                   printf("¿A partir de que tamaño quieres que te muestre?"); 
                   gets(textoTemporal); 
                   sscanf(textoTemporal, "%ld", &numeroTemporal);
                   //rewind (fichero); esta es otra opcion
                   fseek(fichero, 0, SEEK_SET);
                   while (!feof(fichero))
                   {
                   fread (&fichas, 1, sizeof(fichas), fichero);
                   if (fichas.tamanyo >= numeroTemporal) 
                      {
                      if (!feof(fichero))
                      printf("Nombre: %s; Tamaño: %ld Kb\n", fichas.nombreFich, fichas.tamanyo); 
                      }
                   }
                   break;

                   case 4: /* Ver todos los datos (pocos) de un fichero */ 
                   printf("¿De qué fichero quieres ver todos los datos?"); 
                   gets(textoTemporal); 
                   //rewind (fichero); esta es otra opcion
                   fseek(fichero, 0, SEEK_SET);
                   while (!feof(fichero))
                   {
                   fread (&fichas, 1, sizeof(fichas), fichero);
                   if (strcmp(fichas.nombreFich, textoTemporal) == 0) 
                      {
                      if (!feof(fichero))
                      printf("Nombre: %s; Tamaño: %ld Kb\n", fichas.nombreFich, fichas.tamanyo); 
                      }
                   }
                   break; 
                   
                   case 5: /* Salir: avisamos de que salimos */ 
                   printf("Fin del programa\n"); 
                   break; 
                   
                   default: /* Otra opcion: no válida */ 
                   printf("Opción desconocida!\n"); 
                   break; 
                   } 
} while (opcion != 5); /* Si la opcion es 5, terminamos */

fclose(fichero);
return 0; 
}
