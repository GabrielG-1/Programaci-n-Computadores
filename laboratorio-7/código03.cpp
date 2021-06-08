#include <stdio.h>

int numero1;
int numero2;
int resto;

int main() {
    printf("Ingrese dos números de la forma X,Y:\n");
    scanf("%d, %d", &numero1, &numero2);
    for (int i = 0; i<numero1; i++){
      resto+=numero2;
    }
    printf("%d * %d = %d\n", numero1, numero2, resto);
    return 0;
}
