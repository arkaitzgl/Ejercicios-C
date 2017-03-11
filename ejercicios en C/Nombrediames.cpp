#include <stdio.h>
#include <string.h>
int main()
{
char texto1[40], texto2[40], texto3[40]; 
printf("Introduce tu nombre: "); 
gets(texto1);
printf("Introduce día de nacimiento: "); 
gets(texto2); 
printf("Introduce mes de nacimiento: "); 
gets(texto3); 
strcat(texto1, ", "); 
strcat(texto1, texto2); 
strcat(texto1, "/");
strcat(texto1, texto3); 
printf("%s", texto1);

getchar ();
getchar ();              

return 0;
}
