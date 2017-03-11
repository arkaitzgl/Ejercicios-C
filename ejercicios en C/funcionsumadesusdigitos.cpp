#include <stdio.h>

int sumadesusdigitos (int n)
{
   int suma=0;
   
   if (n < 10)
      return n;
   else
   {
      while (n >= 10)
      {
         suma += n % 10;//suma=suma+(n%10)
         n /= 10; //n=n/10
      }
      suma += n; //suma=suma+n
      return suma;
   }  
}  

int main()
{
   int n;
   
   printf("Escriba un numero entero positivo: ");
   scanf("%d", &n);
   printf("La suma de las cifras del numero %d es: %d",
      n, sumadesusdigitos(n));
   
getchar();
getchar();   
   return 0;
}  
