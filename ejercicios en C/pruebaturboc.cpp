#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int main (void)
{
char cadena[100];
int contador = 0;
register int i;
printf ("\nTeclee una cadena de caracteres: ");
gets (cadena);
for (i = 0; i <= strlen (cadena); i++) {
    if (isupper (cadena[i])) cadena[i] = tolower (cadena[i]);
else if (islower (cadena[i])) cadena[i] = toupper (cadena[i]);
else if (isdigit (cadena[i])) contador++;
}
printf ("\nLa cadena tiene %d dígitos numéricos\n", contador);
puts (cadena);
getchar();
getchar();
}
