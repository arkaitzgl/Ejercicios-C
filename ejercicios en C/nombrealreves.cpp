#include <stdio.h> 
#include <string.h> 

int main() 
{ 
    char texto[40], i; 
    printf("Introduce tu nombre: "); 
    scanf("%s", texto); 
    for (i=strlen(texto); i>=0 ;i--)
    printf("%c", texto[i]); 
    
 getchar();
 getchar();   
    
    
    return 0; 
    }
