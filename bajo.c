#include <stdio.h>

int main() {
    unsigned int eax, ebx, ecx, edx;
    eax = 0x01; // Identificador de función para obtener información del CPU
    __asm__ __volatile__(
        "cpuid;"
        : "=a"(eax), "=b"(ebx), "=c"(ecx), "=d"(edx)
        : "a"(eax)
    );
    printf("Información del CPU:\n");
    printf("EAX: %x\n", eax);
    printf("EBX: %x\n", ebx);
    printf("ECX: %x\n", ecx);
    printf("EDX: %x\n", edx);
    return 0;
}
