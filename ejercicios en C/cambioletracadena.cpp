#include <stdio.h> 
int main() 
{ char texto[40]; /* Para guardar hasta 39 letras */
 printf("Introduce tu nombre: "); 
 scanf("%s", texto); 
 texto [0]='A';
 printf(" %s.",texto); 
 
 
 getchar ();
 getchar ();
 return 0; 
 }
