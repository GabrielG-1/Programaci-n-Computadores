
#include <stdio.h>
int numero1;
int numero2;
int numero3;

int main() {
 printf("Ingrese un número:");
 scanf( "%d" , &numero1);
 printf("Ingrese otro segundo número:");
 scanf("%d" , &numero2);
 printf("Ingrese un tercer número:");
 scanf("%d" , &numero3);
 if (numero1>numero2 && numero1>numero3){
     printf("el numero mayor es: %d", numero1);
   
 } if (numero2>numero1 && numero2>numero3) {
     printf("el número mayor es: %d ", numero2);
   
 } if (numero3>numero2 && numero3>numero2){
 printf("el número mayor es: %d", numero3);
}  if (numero1==numero2 && numero1==numero3){
  printf("Los 3 números ingresados son iguales");
}
  
}  
>>>>>>> 8cdfa5f59353e277e85863f7c3fe4b3cd265d487
