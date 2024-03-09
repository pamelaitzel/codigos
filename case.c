#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Error: División por cero no permitida.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Operador no válido.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
