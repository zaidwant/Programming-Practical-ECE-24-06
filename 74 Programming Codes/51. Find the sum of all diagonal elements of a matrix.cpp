#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    // Input number of rows and columns from user
    printf("Enter number of rows and columns (must be the same): ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Number of rows and columns must be the same for a square matrix.\n");
        return -1;
    }

    int matrix[rows][cols];

    // Input elements of the matrix from user
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    // Display the sum
    printf("Sum of the diagonal elements: %d\n", sum);

    return 0;
}

