#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, x, x1;
    
    printf ("Introduce el valor de a: ");
    scanf ("%f", &a);
    printf ("Introduce el valor de b: ");
    scanf ("%f", &b);
    printf ("Introduce el valor de c: ");
    scanf ("%f", &c);
    
    x=(-b+(sqrt((b*b)-(4*a*c))))/(2*a);
    x1=(-b-(sqrt((b*b)-(4*a*c))))/(2*a);
    printf ("Los valores son:\nx=%f\nx=%f", x, x1);

getchar();
getchar();
return 0;
}
