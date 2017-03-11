#include <stdio.h> 
#include <string.h> 

struct{char nombreFich[41]; /* Nombre del fichero */ 
       unsigned long tamanyo; /* El tama�o en bytes */ 
       } fichas[1000];
       
int numeroFichas=0; /* N�mero de fichas que ya tenemos */
int numeroFicha=0;  /*N�mero de cada ficha */
 int i, j, k; /* Para bucles */ 
 char aux[40][20];
 char nombres[40][20],nombre[40][20];
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
    printf("5.- Busqueda de un fichero introduciendo parte del nombre\n"); 
    printf("6.- Eliminar dato\n");   
    printf("7.- Para modificar un determinado fichero\n");
    printf("8.- Mostrar todos los ficheros ordenados por nombre\n"); 
    printf("9.- Salir\n"); /* Para evitar problemas con datos mal introducidos, leemos con "gets" y luego lo filtramos con "sscanf" */ 
    
    gets (textoTemporal); 
    sscanf(textoTemporal, "%d", &opcion); /* Hacemos una cosa u otra seg�n la opci�n escogida */ 
    switch(opcion) 
    { 
                   case 1: /* A�adir un dato nuevo */ 
                   if (numeroFichas < 1000) /* Si queda hueco */ 
                   { printf("Introduce el nombre del fichero: "); 
                     gets(fichas[numeroFichas].nombreFich); 
                     while (strcmp(fichas[numeroFichas].nombreFich, "") == 0)
                       {
                       printf("Introduce el NOMBRE del fichero: ");
                       gets(fichas[numeroFichas].nombreFich);
                       }
                     printf("Introduce el tamanio en KB: ");
                     gets(textoTemporal);                    
                     while (strchr(textoTemporal, '-') != 0)
                     {
                     printf("Introduce el TAMANIO (numero positivo) en KB: ");
                     gets(textoTemporal);
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
                   
                   case 5:
                   printf ("Introduce nombre a buscar: ");
                   gets(textoTemporal); 
                   for (i=0; i<numeroFichas; i++) 
                   if (strstr(fichas[i].nombreFich, textoTemporal) != NULL)
                   printf("Nombre: %s; Tama�o: %ld Kb\n", fichas[i].nombreFich, fichas[i].tamanyo); 
                   break;
                   
                   case 6:
                   printf ("Introduce el texto a eliminar: ");
                   gets(textoTemporal);
                   for (i=0,numeroFicha=0; i<numeroFichas; i++,numeroFicha++)
                    {
                    if (strcmp(fichas[i].nombreFich, textoTemporal) == 0)
                       {              
                       for (i=numeroFicha; i<numeroFichas; i++)
                           {
                           strcpy(fichas[i].nombreFich, fichas[i+1].nombreFich);
                           fichas[i].tamanyo = fichas[i+1].tamanyo;
                           }
                        numeroFichas--;
                        }
                    }
                   break;
                   
                   case 7:
                   printf ("Introduce numero de fichero a modificar: ");
                   gets(textoTemporal);
                   sscanf(textoTemporal, "%ld", &numeroTemporal);
                   printf("Escriba el nuevo nombre del fichero: ");
                   gets(textoTemporal);
                   if (strcmp(textoTemporal, "") != 0)
                   sscanf(textoTemporal, "%s", fichas[numeroTemporal].nombreFich);
                   printf("Escriba el nuevo tamanio del fichero: ");
                   gets(textoTemporal);
                   if (strcmp(textoTemporal, "") != 0)
                   sscanf(textoTemporal, "%ld", &fichas[numeroTemporal].tamanyo);
                   break;  
                                         
                    case 8: /* Mostrar todos ordenados alfabeticamente*/
                   for (i=0; i<numeroFichas; i++)
                       {
                        for (i=0; i<numeroFichas; i++)
                        sscanf(fichas[i].nombreFich, "%s", nombres[i]);
                                       
                        for (i=0; i<(numeroFichas-1); i++)
                            {
                             for (j=(i+1); j<numeroFichas; j++)
                                 {
                                 if (strcmp(nombres[i], nombres[j])>0)
                                    {
                                    strcpy(aux[k], nombres[i]);
                                    strcpy(nombres[i], nombres[j]);
                                    strcpy(nombres[j], aux[k]);
                                    }
                                 }
                             }
                        }
                   printf("\n Los nombres ordenados son:\n");  
                   for (i=0; i<numeroFichas; i++)
                   printf("%d. %s\n", i+1, nombres[i]);
                   break;
                        
                   case 9: /* Salir: avisamos de que salimos */ 
                   printf("Fin del programa\n"); 
                   
                   break; 
                   
                   default: /* Otra opcion: no v�lida */ 
                   printf("Opci�n desconocida!\n"); 
                   break; 
                   } 
} while (opcion != 9); /* Si la opcion es 7, terminamos */


getchar ();

getchar ();

return 0; 
}
