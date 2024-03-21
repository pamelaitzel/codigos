#include <stdio.h>

int main() {
    float cantidad;
    char esCliente;

    printf("Ingrese la cantidad en pesos: ");
    scanf("%f", &cantidad);

    printf("¿Es usted cliente? (S/N): ");
    scanf(" %c", &esCliente);

    float descuento = (esCliente == 'S' || esCliente == 's') ? 0.20 : 0.05;
    float cantidadConDescuento = cantidad - (cantidad * descuento);

    printf("El total a pagar es: %.2f pesos\n", cantidadConDescuento);

    return 0;
}
