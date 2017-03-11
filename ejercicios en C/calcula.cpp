#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int n1, n2;
 
//	printf("El numero de datos introducidos es %d.\n", argc);
 
	if(argc<4)
	printf("No se han introducido suficientes datos.");
	else
	{
	sscanf(argv[1], "%d", &n1);
	sscanf(argv[3], "%d", &n2);
 
	switch(argv[2][0])
			{
	case '+':printf("la suma es %d", n1+n2);
			  break;
 
	case '-':printf("La resta es %d", n1-n2);
			  break;
 
	case '*': printf("La multiplicación es: %d",n1*n2);
			  break;//el asterisco no lo reconoce solo habria que poner *\ 
 
	case '/': printf("La división es %f", (float)n1/(float)n2);
			  break;
 
	default: printf("Operacion no reconocida");
			}
	}
	getchar ();
	getchar();
	return 0;
}
