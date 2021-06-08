#include <stdio.h>

int suma;
int numero;
int main(){ 
printf("Ingrese un número, por favor:");
scanf("%d",&numero);
do{
  suma=suma+numero;
printf("Total= %d\n", suma);
scanf("%d",&numero);
}
while(numero>=0);
printf("Fin\n");
return 0;
}
