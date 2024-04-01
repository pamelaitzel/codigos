#include <stdio.h>
#include <stdlib.h>

// Definición de un nodo en un árbol binario de búsqueda
struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Función para crear un nuevo nodo del árbol
struct TreeNode *createNode(int value) {
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Función para insertar un nuevo nodo en el árbol
struct TreeNode *insertNode(struct TreeNode *root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }
    return root;
}

// Función para imprimir los elementos del árbol en orden
void inorderTraversal(struct TreeNode *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct TreeNode *root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    printf("Árbol binario de búsqueda en orden: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
