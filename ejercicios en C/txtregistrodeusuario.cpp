#include <stdio.h>
#include <string.h>
int main()
{
FILE* fichero;
char frase[80];
fichero = fopen("registroDeUsuario.txt", "wt");
do
{
printf("Escriba una FRASE (o fin): ");
gets(frase);
if (strcmp(frase, "fin") != 0)
fprintf(fichero, "%s\n", frase);
}
while (strcmp(frase, "fin") != 0);
fclose(fichero);

return 0; 
}
