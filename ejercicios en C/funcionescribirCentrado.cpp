#include <stdio.h>
#include <string.h>

char escribirCentrado (char* palabra)
{
     int i,c,r;
     c=strlen(palabra);
     r=c/2;
     for (i=0; i<(40-r); i++)
     printf(" "); 
     printf ("%s", palabra);
}                            

int main()
{
char p [40];
printf ("Introduce la palabra: ");
gets (p);
escribirCentrado (p);

getchar ();
getchar ();
  return 0;
}
