#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char texto[40], i;
    printf("Introduce una palabra: "); 
    gets(texto); 
    
    for(i=0; i < strlen(texto); i++)
    if (texto[i] != ' ')
    printf("%c",texto[i]);
    

getchar ();
getchar ();


return 0; }
