#include <stdio.h>
int main(int argc, char* argv[])
{
	int n1, n2;
 
 
 
	if(argc!=3)
	printf("No hay suficientes datos.");
	else
	{
	sscanf(argv[1],"%d", &n1);
	sscanf(argv[2], "%d", &n2); 	
	printf("%d", n1 + n2);
	}
	getchar ();
	getchar();
	return 0;
}
