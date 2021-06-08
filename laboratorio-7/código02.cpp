#include <stdio.h>

int numero;
int i;
int resto;

int main() {
  printf("Introduzca un número entero por favor para mostrar sus divisores\n");
  scanf("%d", &numero);
  printf("Los divisores son\n");
   for (i=1; i<=numero; i++){
  resto= numero%i;
  if (resto==0){
  printf("%d, ",i);
  }
   }
    return 0;
}