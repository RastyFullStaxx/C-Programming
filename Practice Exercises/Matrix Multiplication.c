#include <stdio.h>
#include <stdlib.h>

int main() {
    int rowsA, colsA, rowsB, colsB;
    printf("Enter the dimensions of matrix A (rows columns): ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter the dimensions of matrix B (rows columns): ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int** A = (int**)malloc(rowsA * sizeof(int*));
    for (int i = 0; i < rowsA; i++) {
        A[i] = (int*)malloc(colsA * sizeof(int));
    }

    int** B = (int**)malloc(rowsB * sizeof(int*));
    for (int i = 0; i < rowsB; i++) {
        B[i] = (int*)malloc(colsB * sizeof(int));
    }

    // Initialize matrices A and B...

    int** result = (int**)malloc(rowsA * sizeof(int*));
    for (int i = 0; i < rowsA; i++) {
        result[i] = (int*)malloc(colsB * sizeof(int));
    }

    // Perform matrix multiplication...

    // Print the result...

    // Free memory...
    return 0;
}
