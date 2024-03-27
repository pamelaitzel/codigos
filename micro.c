#include <stdio.h>

// Definición de registros GPIO de un microcontrolador ficticio
#define GPIO_BASE_ADDRESS 0x40000000
#define GPIO_DIRECTION_REG *((volatile unsigned int*)(GPIO_BASE_ADDRESS + 0x00))
#define GPIO_DATA_REG *((volatile unsigned int*)(GPIO_BASE_ADDRESS + 0x04))

// Definición de bits de los registros GPIO
#define GPIO_PIN_0 (1 << 0)
#define GPIO_PIN_1 (1 << 1)
#define GPIO_PIN_2 (1 << 2)
// y así sucesivamente...

int main() {
    // Configurar pines como salida
    GPIO_DIRECTION_REG |= GPIO_PIN_0 | GPIO_PIN_1; // Pines 0 y 1 como salida

    // Encender y apagar pines
    GPIO_DATA_REG |= GPIO_PIN_0; // Encender el pin 0
    GPIO_DATA_REG &= ~GPIO_PIN_1; // Apagar el pin 1

    return 0;
}
