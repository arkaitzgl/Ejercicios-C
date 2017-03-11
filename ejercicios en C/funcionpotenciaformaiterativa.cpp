#include <stdio.h>
 
int potencia(int n, int e) 
{  
    int i, resultado=1;
if (e==0)
return 1;
do 
{
    for (i=0; i<e; i++)
    resultado=n*resultado;
    e--;
}
while (e<=1);
return resultado; 
} 
int main()
{ 
    int num, exp; 
    printf("Introduzca un número entero: "); 
    scanf("%d", &num);
    printf ("Introduzca exponente: ");
    scanf("%d", &exp);
    printf("%d elevado a %d es: %d\n", num, exp, potencia(num, exp));
getchar();
getchar();
return 0;
}
