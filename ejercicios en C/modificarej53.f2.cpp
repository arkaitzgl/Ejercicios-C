//Este solucion contiene un pequeño fallo que desconozco como resolverlo

#include <stdio.h> 
#include <string.h> 

struct{char nombreFich[41]; /* Nombre del fichero */ 
       unsigned long tamanyo; /* El tamaño en bytes */ 
       } fichas[1000];
       
int numeroFichas=0; /* Número de fichas que ya tenemos */
 int i; /* Para bucles */ 
 int opcion; /* La opcion del menu que elija el usuario */ 
 char textoTemporal[40]; /* Para cuando preguntemos al usuario */ 
 unsigned long numeroTemporal; 
 
int main() 
{ 
    
FILE*fichero;

if ((fichero=fopen("Ejemplo53.txt", "rt"))!=NULL)
{
 while(!feof(fichero))
    {        
    fread (&fichas[i], 1, sizeof(fichas[i]), fichero);
    if (feof(fichero)) break;
    printf("Nombre: %s", fichas[i].nombreFich);
    strcpy(fichas[numeroFichas].nombreFich, fichas[i].nombreFich);
    if (feof(fichero)) break;
    printf("Tamaño: %ld Kb\n", fichas[i].tamanyo);
    fichas[numeroFichas].tamanyo=fichas[i].tamanyo;
    numeroFichas++;
    }
fclose(fichero);
}
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
                   if (numeroFichas < 1000) /* Si queda hueco */ 
                   { printf("Introduce el nombre del fichero: "); 
                   gets(fichas[numeroFichas].nombreFich); 
                   if(strcmp(fichas[numeroFichas].nombreFich, "")==0) 
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
                   sscanf(textoTemporal,"%ld",&fichas[numeroFichas].tamanyo);                   
                   numeroFichas++; /* Y ya tenemos una ficha más */ 
                   } else /* Si no hay hueco para más fichas, avisamos */ 
                   printf("Máximo de fichas alcanzado (1000)!\n"); 
                   break; 
                   
                   case 2: /* Mostrar todos */
                   for (i=0; i<numeroFichas; i++) 
                   printf("Nombre: %s; Tamaño: %ld Kb\n", fichas[i].nombreFich, fichas[i].tamanyo);
                   break; 
                   
                   case 3: /* Mostrar según el tamaño */ 
                   printf("¿A partir de que tamaño quieres que te muestre?"); 
                   gets(textoTemporal); 
                   sscanf(textoTemporal, "%ld", &numeroTemporal); 
                   for (i=0; i<numeroFichas; i++) 
                   if (fichas[i].tamanyo >= numeroTemporal) 
                   printf("Nombre: %s; Tamaño: %ld Kb\n", fichas[i].nombreFich, fichas[i].tamanyo); 
                   break;

                   case 4: /* Ver todos los datos (pocos) de un fichero */ 
                   printf("¿De qué fichero quieres ver todos los datos?"); 
                   gets(textoTemporal); 
                   for (i=0; i<numeroFichas; i++) 
                   if (strcmp(fichas[i].nombreFich, textoTemporal) == 0) 
                   printf("Nombre: %s; Tamaño: %ld Kb\n", fichas[i].nombreFich, fichas[i].tamanyo); 
                   break; 
                   
                   case 5: /* Salir: avisamos de que salimos */ 
                   printf("Fin del programa\n"); 
                   break; 
                   
                   default: /* Otra opcion: no válida */ 
                   printf("Opción desconocida!\n"); 
                   break; 
                   } 
} while (opcion != 5); /* Si la opcion es 5, terminamos */

fichero=fopen("Ejemplo53.txt", "wt"); 
for (i=0; i<=numeroFichas-1; i++)
fwrite (&fichas[i], 1, sizeof(fichas[i]), fichero);
    
fclose(fichero);

return 0; 
}
