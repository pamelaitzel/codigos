#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int main() {
    int (*operacion)(int, int);
    operacion = suma;
    printf("Suma: %d\n", operacion(5, 3));
    operacion = resta;
    printf("Resta: %d\n", operacion(5, 3));
    return 0;
}
