#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()

{
    int i, n, x;
    
    for (x=0; x<44;x++)
    {
        //srand (time(0));
        n= rand ()% 78+1;
        for (i=0; i<n; i++)
        printf (" ");
        printf ("*");
              
    }
getchar ();
getchar ();
return 0;
}    
