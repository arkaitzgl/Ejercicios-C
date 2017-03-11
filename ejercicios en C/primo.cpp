#include <stdio.h>
int main()
{
int n,i,resto;
printf("\Escribe un número: "); scanf("%d",&n);
for(i=2;i<n-1;i++)
  {
  resto=n % i;
  if ((resto==0) && (n != 2))
   {
   printf("\n %d no es primo",n);
   }
getchar ();
getchar ();
return 0;  
}
printf("\n %d es un número primo",n);

getchar ();
getchar ();

}
/*int resto,i;
for(i=2;i<num-1;i++)
{
resto=num % i;
if ((resto==0) && (num != 2)) return 0;*/
