#include <stdio.h>

int dibujarrectangulo ()
{
     int al=2,an=4,i,x=0;
     do{
    for (i=0; i<an; i++) printf("#");
    printf ("\n");
    x++;
    }
    while (x<al);
}

int main()
{
    dibujarrectangulo ();
getchar();
getchar();
return 0;
}
    
