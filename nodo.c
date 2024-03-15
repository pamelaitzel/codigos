#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

int main() {
    struct Nodo *inicio = NULL;
    struct Nodo *nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = 10;
    nuevoNodo->siguiente = NULL;
    inicio = nuevoNodo;
    // Puedes continuar agregando nodos y manipulando la lista enlazada
    free(nuevoNodo);  // No olvides liberar la memoria al final
    return 0;
}
