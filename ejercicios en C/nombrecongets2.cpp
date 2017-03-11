#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char texto[40];
    int i,cantidad;
    printf ("introduce un numero: ");
    scanf ("%d", &cantidad); 
    getchar ();
    printf("Introduce una palabra: "); 
    gets(texto);
    
    for(i=0; i < cantidad; i++)
    printf("%s\n",texto);
    

getchar ();
getchar ();


return 0; }
