
#include <stdio.h>

 int contador;
 int numero;
 int primo;
 int num;
int main(){
  
    printf( "Ingrese un número para mostrar los número primos correspondientes\n" );
    scanf("%d", &num);
    for ( numero = 2 ; numero <= num  ; numero++ ){
        primo = 1;
        contador = 2;
    while ( contador <= numero / 2 && primo ){
            if ( numero % contador == 0 )
                primo = 0;
                contador++; 
          }
            if ( primo )
            printf( "%d ", numero );
      }
      return 0;
}
