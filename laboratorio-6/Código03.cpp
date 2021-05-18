#include <stdio.h>
int clave = 12345678;

int main (){
printf("Ingrese su clave de acceso (Rut sin código verificador)\n");
  scanf("%d", &clave);
  if (clave==12345678){
    printf("Bienvedi@");
  }else {
    printf("Clave incorrecta, quedan 2 intentos\n");
    printf("Ingrese nuevamente su clave\n");
    scanf("%d", &clave);
    if (clave==12345678){
    printf("Bienvedi@");
  }else {
    printf("Clave incorrecta, queda 1 intento\n");
    printf("Ingrese nuevamente su clave\n");
    scanf("%d", &clave);
     if (clave==12345678){
    printf("Bienvedi@");
  }else {
    printf("Usted ha sido bloqueado");
  }
  }
  }
  
}
