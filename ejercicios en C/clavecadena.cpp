#include <stdio.h>
#include <string.h>
int main()
{
char intento[10];
char palabraClave[]="clave";
do
{
printf("Escriba su clave: ");
gets(intento);
}
while (strcmp(intento, palabraClave) != 0);
printf("Acceso concedido... Sea Ud. bienvenido!");

getchar ();
getchar ();              

return 0;
}
