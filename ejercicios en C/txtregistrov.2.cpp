
#include <stdio.h>
#include <string.h>

int main()
{
  FILE *fichero;
  char frase[61];
  int i;
   
  fichero = fopen("registro.txt", "a+");
  if (fichero == NULL)
     printf("No se pudo abrir el archivo.\n");
  else
  {
     do
     {
        fgets(frase, 60, fichero);
        puts(frase);
     }
     while (!feof(fichero));
     
     puts("Escriba algunas frases.\n  \"Enter\" para salir.\n");
     do
     {
        puts("Frase: \n");
       
        gets(frase);
        fprintf(fichero, "%s\n", frase);
     }
     while (strcmp(frase, "") != 0);
     fclose(fichero);
  }
  return 0;
}
