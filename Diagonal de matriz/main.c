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

int main() {
    int filas, columnas;

    // Solicitar al usuario el tamaño de la matriz
    printf("Ingrese el numero de filas y columnas espaciado (x y):\n ");
    scanf("%d %d", &filas, &columnas);

    // Verificar que las dimensiones de la matriz sean válidas
    if (filas <= 0 || columnas <= 0 || filas > 100 || columnas > 100) {
        printf("Dimensiones de matriz no validas. Deben ser valores positivos.\n");
        return 1;  // Salir con código de error
    }
    
    int matriz[100][100];

    // Inicializar la matriz con ceros
    inicializarMatriz(matriz, filas, columnas);

    // Asignar unos en la diagonal de la matriz
    asignarUnosDiagonal(matriz, filas, columnas);

    // Imprimir la matriz resultante
    imprimirMatriz(matriz, filas, columnas);

    return 0; 
}