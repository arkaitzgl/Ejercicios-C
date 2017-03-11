#include <stdio.h>
#include <string.h>

int main() 
{ int i;
char nombremes[12][20] = 
{ "Enero", "febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"}; 
printf("Escriba un numero, del 1 al 12 : ");
scanf("%d", &i);
printf("El numero %d corresponde al mes de %s",i, nombremes[i-1]);
 getchar ();
 getchar ();
  return 0; 
  }
