#include <stdio.h>

int escribirTablaMultiplicar (int n)
{
int r,i;

for (i=0; i<=10; i++)
{
r=n*i;
printf("\n%d*%d=%d", n, i, r);
}
}

int main()
{
    int n;
    printf("introduzca un numero: ");
    scanf ("%d", &n);
    escribirTablaMultiplicar (n);
    
getchar ();
getchar ();
return 0;
}
