#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  FILE *resultados;
  int numero1=0, numero2=0, suma=0;
   
  resultados = fopen("sumas.txt", "a+");
  if (resultados == NULL)
     printf("No se pudo abrir el archivo.\n");
  else
  {
     do
     {
        fscanf(resultados, "%d + %d = %d", &numero1, &numero2, &suma);
        if (feof(resultados))
           break;
        printf("%d + %d = %d\n", numero1, numero2, suma);
     }
     while (!feof(resultados));
     
     printf("Escriba dos numeros.\n\"000\" para salir.\n");
     do
     {
        printf("Primer numero: ");
        scanf("%d", &numero1);
        if (numero1 == 0)
           exit(1);  
        printf("Segundo numero: ");
        scanf("%d", &numero2);    
        suma = numero1 + numero2;  
        printf("%d + %d = %d\n", numero1, numero2, suma);
        fprintf(resultados, "%d + %d = %d\n", numero1, numero2, suma);
     }
     while (numero1 != 0);
     fclose(resultados);
  }
  return 0;
}
