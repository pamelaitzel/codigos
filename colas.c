#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct Cola {
    int elementos[MAX];
    int frente;
    int final;
};

void inicializarCola(struct Cola *q) {
    q->frente = -1;
    q->final = -1;
}

int colaVacia(struct Cola *q) {
    return (q->final == -1);
}

int colaLlena(struct Cola *q) {
    return ((q->final + 1) % MAX == q->frente);
}

void encolar(struct Cola *q, int dato) {
    if (colaLlena(q)) {
        printf("La cola está llena.\n");
        return;
    }
    if (colaVacia(q)) {
        q->frente = 0;
    }
    q->final = (q->final + 1) % MAX;
    q->elementos[q->final] = dato;
}

int desencolar(struct Cola *q) {
    int dato;
    if (colaVacia(q)) {
        printf("La cola está vacía.\n");
        return -1;
    }
    dato = q->elementos[q->frente];
    if (q->frente == q->final) {
        inicializarCola(q);
    } else {
        q->frente = (q->frente + 1) % MAX;
    }
    return dato;
}

int main() {
    struct Cola cola;
    inicializarCola(&cola);
    encolar(&cola, 1);
    encolar(&cola, 2);
    encolar(&cola, 3);
    printf("Elemento desencolado: %d\n", desencolar(&cola));
    printf("Elemento desencolado: %d\n", desencolar(&cola));
    printf("Elemento desencolado: %d\n", desencolar(&cola));
    printf("Elemento desencolado: %d\n", desencolar(&cola)); // Esta línea imprimirá un mensaje de que la cola está vacía.
    return 0;
}
