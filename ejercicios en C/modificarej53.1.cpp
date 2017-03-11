#include <stdio.h> 
#include <string.h> 

struct{char nombreFich[41]; /* Nombre del fichero */ 
       unsigned long tamanyo; /* El tama�o en bytes */ 
       } fichas[1000];
       
int numeroFichas=0; /* N�mero de fichas que ya tenemos */
 int i; /* Para bucles */ 
 int opcion; /* La opcion del menu que elija el usuario */ 
 char textoTemporal[40]; /* Para cuando preguntemos al usuario */ 
 unsigned long numeroTemporal; 
 
int main() 
{ inicio:
    do { /* Menu principal */ 
    printf("Escoja una opci�n:\n"); 
    printf("1.- Anadir datos de un nuevo fichero\n"); 
    printf("2.- Mostrar los nombres de todos los ficheros\n"); 
    printf("3.- Mostrar ficheros que sean de mas de un cierto tama�o\n"); 
    printf("4.- Ver datos de un fichero\n"); 
    printf("5.- Salir\n"); /* Para evitar problemas con datos mal introducidos, leemos con "gets" y luego lo filtramos con "sscanf" */ 
    gets (textoTemporal); 
    sscanf(textoTemporal, "%d", &opcion); /* Hacemos una cosa u otra seg�n la opci�n escogida */ 
    switch(opcion) 
    { 
                   case 1: /* A�adir un dato nuevo */ 
                   if (numeroFichas < 1000) /* Si queda hueco */ 
                   { printf("Introduce el nombre del fichero: "); 
                   gets(fichas[numeroFichas].nombreFich); 
                   if(strcmp(fichas[numeroFichas].nombreFich, "")==0) 
                         {
                         printf ("\nError no se pueden introducir nombre de fichero vacio\n\n");
                         goto inicio;
                         }
                   printf("Introduce el tama�o en KB: "); 
                   gets(textoTemporal); 
                   if  (strchr(textoTemporal, '-')!=0)
                         {
                         printf ("\nError no se pueden introducir un numero negativo\n\n");
                         goto inicio;
                         }
                   sscanf(textoTemporal,"%ld",&fichas[numeroFichas].tamanyo);                   
                   numeroFichas++; /* Y ya tenemos una ficha m�s */ 
                   } else /* Si no hay hueco para m�s fichas, avisamos */ 
                   printf("M�ximo de fichas alcanzado (1000)!\n"); 
                   break; 
                   
                   case 2: /* Mostrar todos */
                   for (i=0; i<numeroFichas; i++) 
                   printf("Nombre: %s; Tama�o: %ld Kb\n", fichas[i].nombreFich, fichas[i].tamanyo);
                   break; 
                   
                   case 3: /* Mostrar seg�n el tama�o */ 
                   printf("�A partir de que tama�o quieres que te muestre?"); 
                   gets(textoTemporal); 
                   sscanf(textoTemporal, "%ld", &numeroTemporal); 
                   for (i=0; i<numeroFichas; i++) 
                   if (fichas[i].tamanyo >= numeroTemporal) 
                   printf("Nombre: %s; Tama�o: %ld Kb\n", fichas[i].nombreFich, fichas[i].tamanyo); 
                   break;

                   case 4: /* Ver todos los datos (pocos) de un fichero */ 
                   printf("�De qu� fichero quieres ver todos los datos?"); 
                   gets(textoTemporal); 
                   for (i=0; i<numeroFichas; i++) 
                   if (strcmp(fichas[i].nombreFich, textoTemporal) == 0) 
                   printf("Nombre: %s; Tama�o: %ld Kb\n", fichas[i].nombreFich, fichas[i].tamanyo); 
                   break; 
                   
                   case 5: /* Salir: avisamos de que salimos */ 
                   printf("Fin del programa\n"); 
                   break; 
                   
                   default: /* Otra opcion: no v�lida */ 
                   printf("Opci�n desconocida!\n"); 
                   break; 
                   } 
} while (opcion != 5); /* Si la opcion es 5, terminamos */


getchar ();

getchar ();

return 0; 
}
