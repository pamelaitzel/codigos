#include <stdio.h>

// Función que suma dos enteros
int sum(int a, int b) {
    return a + b;
}

// Función que resta dos enteros
int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Declaración de un puntero a función
    int (*operation)(int, int);

    // Asignación del puntero a función
    operation = sum;
    printf("Suma: %d\n", operation(5, 3));

    // Reasignación del puntero a función
    operation = subtract;
    printf("Resta: %d\n", operation(5, 3));

    return 0;
}
