//dudas de esta solución
#include <stdio.h>

void pedirEntero (char texto1[50], int valMin, int valMax)
{
   int ent=2012;
   valMin=1800;
   valMax=2100;
   char texto[40]=("Escriba un numero: ");
   do
   {
   printf("%s", texto);
   scanf("%d", &ent);
   if (ent<1800)
   printf ("Estas muy lejos\n");
   if (ent>2100)
   printf ("Te has pasado\n");
   if ((ent>=1800)&&(ent<=2100)&&(ent != 2012))
   printf ("Te estas acercando\n");
   }
   while (ent != 2012);
   printf ("%s El numero correcto era %d", texto1, ent);
   
   return;
}
 
int main()
{   
   int valMin, valMax;
   char texto1[50]=("Has acertado.");
   pedirEntero(texto1, valMin, valMax);
   
   getchar ();
   getchar ();
   return 0;  
}
