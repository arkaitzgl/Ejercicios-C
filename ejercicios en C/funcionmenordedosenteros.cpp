#include <stdio.h>
int menor(int n1, int n2)
{
return n1 < n2? n1: n2;
}
int main()
{
int numero1, numero2;
printf(" Escriba un numero: ");
scanf("%d",&numero1);
printf(" Escriba otro numero: ");
scanf("%d",&numero2);
printf("El menor es %d\n", menor(numero1, numero2) );

getchar();
getchar();
return 0;
}
