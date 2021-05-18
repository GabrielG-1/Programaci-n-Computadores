#include <stdio.h>
int num;
int main() {
  printf("Ingrese un número:");
  scanf("%d", &num);
  if (num %2 == 0){
    printf("El número es par");
  }
  else {
    printf("El número es impar");
  }
    return 0;
}
