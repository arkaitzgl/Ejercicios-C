#include <stdio.h>
#include <math.h>
 
int potencia(int base, int exp)
{
int res;
if (exp == 0)
res=1;
else if (exp > 0)
{
//Llamada a la función con parámetros adecuados
res=base * potencia(base,exp - 1);
}
else if (exp < 0)
{
//Llamada a la función con parámetros adecuados
res= 1 / base *potencia(base,exp + 1);
}
return res;
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
