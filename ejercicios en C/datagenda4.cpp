//Este programa tiene un fallo que no he encontrado.

#include <stdio.h>
#include <string>

struct {
       char nombre [81];
       char direccion [81];
       char tlfmovil [11];
       char email [51];
       unsigned short int dia, mes, ano;
       }fichas [100];
       
int main()
{
char linea[200];
int i, opcion, numerofichas=-1;

FILE*fichero;

if ((fichero=fopen("agenda.dat","rt"))!=NULL)
 {
 while(!feof(fichero))
 {         
 fread (&fichas[i], 1, sizeof(fichas[i]), fichero);
 if (feof(fichero)) break;
 //printf("\n%s\n", fichas[i].nombre);
 strcpy(fichas[numerofichas+1].nombre, fichas[i].nombre);
 if (feof(fichero)) break;
 //printf("%s\n", fichas[i].direccion);
 strcpy(fichas[numerofichas+1].direccion, fichas[i].direccion);
 if (feof(fichero)) break;
// printf("%s\n", fichas[i].tlfmovil);
 strcpy(fichas[numerofichas+1].tlfmovil, fichas[i].tlfmovil);
 if (feof(fichero)) break;
// printf("%s\n", fichas[i].email);
 strcpy(fichas[numerofichas+1].email, fichas[i].email);
 if (feof(fichero)) break;
// printf ("%hd/%hd/%hd\n", fichas[i].dia, fichas[i].mes, fichas[i].ano);
 fichas[numerofichas+1].dia=fichas[i].dia;
 fichas[numerofichas+1].mes=fichas[i].mes;
 fichas[numerofichas+1].ano=fichas[i].ano;
 numerofichas++;
 }
  printf ("\nIntroduce numero de fichero que desea buscar: ");
  scanf ("%d", &opcion);
  getchar();
  i=opcion-1;
  fseek (fichero, sizeof(fichas)*(opcion-1), SEEK_SET);
  fread (&fichas[i], 1, sizeof(fichas[i]), fichero);
  printf("\n%s\n%s\n%s\n%s\n%hd/%hd/%hd\n", fichas[i].nombre, fichas[i].direccion, fichas[i].tlfmovil, fichas[i].email,fichas[i].dia, fichas[i].mes, fichas[i].ano);
fclose(fichero);
}

printf ("\nLeidos %d datos", numerofichas+1);
 
do 
{
    puts ("\n0.-Salir");
    puts ("1.-Introduce nuevo dato");
    puts ("2.-Ver datos existentes");
    puts ("3.-Buscar persona");
    puts ("4.-Buscar por posicion"); 
    printf ("Seleccione una opcion: "); 
    scanf ("%d", &opcion);
    getchar ();
    
    switch (opcion)
    {
           case 1:
           if (numerofichas<100)
              {
               printf ("\nIntroduce nombre: ");
               gets (fichas[numerofichas+1].nombre);
               printf ("Introduce direccion: ");
               gets (fichas[numerofichas+1].direccion);
               printf ("Introduce tlf. movil: ");
               gets (fichas[numerofichas+1].tlfmovil);
               printf ("Introduce email: ");
               gets (fichas[numerofichas+1].email);
               printf ("Introduce dia de nacimiento: ");
               scanf ("%hd", &fichas[numerofichas+1].dia);
               getchar ();
               printf ("Introduce mes de nacimiento: ");
               scanf ("%hd", &fichas[numerofichas+1].mes);
               getchar ();
               printf ("Introduce ano de nacimiento: ");
               scanf ("%hd", &fichas[numerofichas+1].ano);
               getchar ();
               numerofichas++;    
               //fwrite (&fichas[numerofichas+1], 1, sizeof(fichas[numerofichas+1]), fichero);          
               }
           else printf ("Ya has llegado al limite de 100 fichas");
           break;
           
           case 2:
           puts ("\nEstos son los nombres introducidos:");
           for (i=0; i<=numerofichas; i++)
           puts (fichas[i].nombre);
           break;
           
           case 3:
           printf ("\nDe que nombre desea buscar los datos?: ");
           gets (linea);
           for (i=0; i<=numerofichas; i++)
           if (strcmp(linea, fichas[i].nombre)==0)
           {
           puts (fichas[i].nombre);
           puts (fichas[i].direccion);
           puts (fichas[i].tlfmovil);
           puts (fichas[i].email);
           printf ("%hd/%hd/%hd\n\n", fichas[i].dia, fichas[i].mes, fichas[i].ano);
           }
           break;
           
           case 4:
           printf ("\nIntroduce numero de fichero que desea buscar: ");
           scanf ("%d", &opcion);
           getchar();
           
           i=opcion-1;
           fseek (fichero, sizeof(fichas)*(opcion-1), SEEK_SET);
           fread (&fichas[i], 1, sizeof(fichas[i]), fichero);
           printf("\n%s\n%s\n%s\n%s\n%hd/%hd/%hd\n", fichas[i].nombre, fichas[i].direccion, fichas[i].tlfmovil, fichas[i].email,fichas[i].dia, fichas[i].mes, fichas[i].ano);
           break;   
    }
    
}while (opcion!=0);

fichero=fopen ("agenda.dat", "wt");

for (i=0; i<=numerofichas; i++)
fwrite (&fichas[i], 1, sizeof(fichas[i]), fichero);
    
fclose(fichero);

return 0;
}

