<<<<<<< HEAD
#include <stdio.h>
int n1, n2, n3;

int main() {
 printf("Ingrese un número", n1);
 scanf(%d, &n1);
 printf("Ingrese otro segundo número", n2);
 scanf(%d, &n2);
 printf("Ingrese un tercer número", n3);
 scanf(%d, &n3);
 if (n1>=n2 && n1>n3){
     printf("EL número mayor es:" "%d", n1);
 } else if (n2>n1 && n2>3)
 {
     printf("el número mayor es: %d ", n2);
 } else if (n3>n2 && n3>n2);
 printf("el número mayor es: %d", n3);
 
}
=======
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
