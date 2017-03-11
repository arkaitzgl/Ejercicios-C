#include <stdio.h>
#include <string.h>
int main()
{
char intento[10], intento1[10];
char palabraClave[]="peter";
char usuario[]="pedro";
do
{
printf("Escriba nombre usuario: ");
gets(intento1);

printf("Escriba su clave: ");
gets(intento);
}
while ((strcmp(intento, palabraClave) != 0) || (strcmp(intento1, usuario) != 0));
printf("Acceso concedido... Sea Ud. bienvenido!");

getchar ();
getchar ();              

return 0;
}
