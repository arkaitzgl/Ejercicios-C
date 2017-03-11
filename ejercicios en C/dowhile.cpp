#include <stdio.h> 
int main() 
{ 
    int numero, resultado=0; 
    
   
    do { 
         printf("Introduzca numero: "); 
    scanf("%d", &numero); 
    if (numero > 0) 
    printf("el reultado de sumar el numero introducido + el anterior es:%d\n",resultado, resultado=numero+resultado); 
    printf("\n");
    } 
    while (numero > 0); 
    getchar ();
    return 0; 
}
    
   
