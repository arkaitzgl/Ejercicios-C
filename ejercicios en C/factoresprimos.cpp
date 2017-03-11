#include <stdio.h>
 
int main() 
{
     int numero, divisor = 2;
 
     puts("Dime un numero: ");
     scanf("%d", &numero);
     printf("%d = ",numero);
 
     while ( numero >= divisor )
     {            
          while ( numero % divisor == 0 ) 
          {
              printf("%d x ",divisor);   
              numero = numero / divisor;    
          }
          divisor ++;
     }
     printf("%d",numero);
getchar();
getchar();
return 0;
}

