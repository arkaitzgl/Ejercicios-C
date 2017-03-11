#include <stdio.h>

float mostrarperimsuperf ()
{
   float n;   
   n=2;
printf("el area de %.2f es %.2f",n , n*n);
printf("\ny el perimetro de %.2f es %.2f",n , n+n+n+n);
}
int main()
{
 
mostrarperimsuperf () ;

getchar();
getchar();
return 0;
}
/*#include <stdio.h>

float perimetro (float numero)
{
   float perimetro;
   perimetro = 4 * numero;  
   return perimetro;
}

float area (float numero)
{  
   float area;
   area = numero * numero;
   return area;  
}
 
int main()
{
   int num;
   
   printf("Escriba un numero: ");
   scanf("%d", &num);
   printf("Perimetro:%f\n", perimetro(num));
   printf("Area:%f\n", area(num));
   
   return 0;
}*/
