#include <stdio.h>
#include <string.h>

int main() 
{ 
    char texto[40], i; 
    printf("Introduce tu nombre: "); 
    scanf("%s", texto); 
    for (i=0;i<=strlen(texto);i++)
    printf("%c ", texto[i]); 
    
 getchar();
 getchar();   
    
    
    return 0; 
    }
