#include <stdio.h>
#include <math.h>
 
void cuadratica(float a, float b, float c, float *x1, float *x2, int *control) {
	float discriminante;
	discriminante=((b * b)-(4 * a * c));
	/*Si el discriminante es mayor que cero, la ecuación tiene dos soluciones, con números reales distintos*/
	if (discriminante>0) { 
			*x1=((-1) * b + sqrt(discriminante))/(2 * a);
			*x2=((-1) * b - sqrt(discriminante))/(2 * a);
			*control=1;
			}			
	/*Si el discriminante es igual a cero, la ecuación tiene una solución doble*/
	if (discriminante==0) {
			*x1=(((-1) * b)/(2 * a));
			*x2=(((-1) * b)/(2 * a));
			*control=2;
			}
 
	/*Si el discriminante es menor que cero, la ecuación no tiene soluciones reales*/		
	if (discriminante<0) {
			*control=3;
			}	
 
		}
 
main() {
	float x, y, z, x1, x2;
	int control=0; /* La usaremos para saber que tipo de ecuacion es*/ 
 
	printf("Introduce el valor de a: ");
	scanf("%f", &x);
	getchar();
	printf("Introduce el valor de b: ");
	scanf("%f", &y);
	getchar();
	printf("Introduce el valor de c: ");
	scanf("%f", &z);
	getchar();
 
	cuadratica(x, y, z, &x1, &x2, &control);
 
	if (control==1) 	printf("La ecuacion tiene dos soluciones reales: %0.4f y %0.4f", x1, x2);
	if (control==2) 	printf("La ecuacion tiene una solucion doble: %0.4f y %0.4f", x1, x2);
	if (control==3) 	printf("La ecuacion no tiene soluciones reales");
	
    getchar();
    getchar();    
    return 0;
}
