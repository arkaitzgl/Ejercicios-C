#include <stdio.h>
void borrarPantalla() {
int i;
for (i=0; i<25; i++) printf("\n");
}
int main(){
borrarPantalla();
printf("Acabo de borrar la pantalla...");
getchar();
getchar();

return 0;

}
