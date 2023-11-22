#include <stdio.h>

// Función para inicializar la matriz con ceros
void inicializarMatriz(int matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 0;
        }
    }
}

// Función para asignar unos en la diagonal de la matriz
void asignarUnosDiagonal(int matriz[][100], int filas, int columnas) {
    int minSize = (filas < columnas) ? filas : columnas; // Determinar el tamaño mínimo para evitar desbordamientos
    for (int i = 0; i < minSize; i++) {
        matriz[i][i] = 1;
    }
}

// Función para imprimir la matriz
void imprimirMatriz(int matriz[][100], int filas, int columnas) {
    printf("Matriz Resultante:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
