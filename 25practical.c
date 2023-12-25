#include <stdio.h>

// Function to calculate the sum of diagonal elements in a square matrix
int sumDiagonal(int matrix[10][10], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];  
    }

    return sum;
}

int main() {
    int matrix[10][10];
    int size;

    printf("Enter the size of the square matrix (maximum %d): ", 10);
    scanf("%d", &size);

    printf("Enter elements of the %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int diagonalSum = sumDiagonal(matrix, size);
    printf("\nSum of diagonal elements: %d\n", diagonalSum);

    return 0;
}
