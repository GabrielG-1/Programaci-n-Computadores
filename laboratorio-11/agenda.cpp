#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int opcion;
    char nombreArchivo[30];
    FILE* archivo;
    char nombre[15];
    char apellido[20];
    char telefono[20];

    printf("--- AGENDA CONTACTOS ---\n");
    printf("1.- Listar agendas\n");
    printf("2.- Crear agenda\n");
    printf("3.- Añadir un registro en una agenda\n");
    printf("4.- Eliminar una agenda\n");
    printf("5.- Salir\n");
    printf("Seleccione una opción:\n");
    scanf("%d", &opcion);

    while((opcion > 0) && (opcion < 6)){
        switch(opcion){
            case 1: printf("Listar\n");
                    // system("dir"); // Windows
                    system("ls *.txt");
                    break;
            case 2: printf("Ingrese el nombre del archivo que quiere crear:\n");    
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    archivo = fopen(nombreArchivo, "w");
                    fclose(archivo);
                    break;
            case 3: printf("Los archivos disponibles son:\n");
                    system("ls *.txt");
                    printf("Ingrese el nombre del archivo donde quiere agregar un registro:\n");
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    archivo = fopen(nombreArchivo, "a+");
                    printf("Ingrese el nombre del contacto:\n");
                    scanf("%s", nombre);
                    printf("Ingrese el apellido del contacto:\n");
                    scanf("%s", apellido);
                    printf("Ingrese el telÃ©fono del contacto:\n");
                    scanf("%s", telefono);
                    fprintf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                    fclose(archivo);
                    break;
            case 4: printf("Los archivos disponibles son:\n");
                    system("ls *.txt");
                    printf("Ingrese el nombre del archivo que quiee eliminar:\n");
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    remove(nombreArchivo);
                    break;
 
            case 5: printf("Salir\n");
                    break;
        }
        break;
    }


    return 0;
}


void imprimirMeú(){
 
  printf("--------------------\n");
  printf("--------------------\n");
  printf("--AGENDA CONTACTOS--\n");
  printf("--------------------\n");
  printf("--------------------\n");
}

void imprimirOpciones(){

    printf("1.- Listar agendas\n");
    printf("2.- Crear agenda\n");
    printf("3.- Añadir un registro en una agenda\n");
    printf("4.- Eliminar una agenda\n");
    printf("5.- Salir\n");
    printf("Seleccione una opción:\n");
}

void agenda(){
switch(){}
case 1:
 
case 2:

case 3:

case 4:


}
}
