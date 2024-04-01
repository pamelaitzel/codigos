#include <stdio.h>

int main() {
    char nombre[50];

    // Solicitar al usuario que ingrese su nombre
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    // Mostrar un saludo con el nombre ingresado
    printf("¡Hola, %s! Bienvenido al programa.\n", nombre);

    return 0;
}
