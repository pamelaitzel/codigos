#include <stdio.h>

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Imprimir la tabla de multiplicar ascendente
    printf("Tabla de multiplicar ascendente:\n");
    for (int i = 0; i <= 1000; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    // Imprimir la tabla de multiplicar descendente
    printf("\nTabla de multiplicar descendente:\n");
    for (int i = 1000; i >= 0; i--) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
