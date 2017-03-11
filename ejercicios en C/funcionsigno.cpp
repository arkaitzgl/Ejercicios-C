#include <stdio.h>
int signo (float num)
{
if (num > 0)
return 1;
if (num == 0)
return 0;
return -1;
}
int main()
{
float numero;
printf("Escriba un numero real: ");
scanf("%f", &numero);
printf("Su signo es: %d", signo(numero));

getchar();
getchar();
return 0;
}
