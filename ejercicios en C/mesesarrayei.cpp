#include <stdio.h>
#include <string.h>

int main() 
{ int i;
char nombremes[2][12][80] = 
{ "Enero", "febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre",
"January", "February", "March", "April", "May","June", "July", "August", "September", "October", "November", "December"}; 
printf("Escriba un numero, del 1 al 12 : ");
scanf("%d", &i);
printf("El numero %d corresponde al mes de %s y en inglés se dice %s",i, nombremes[0][i-1], nombremes[1][i-1]);
 getchar ();
 getchar ();
  return 0; 
  }
