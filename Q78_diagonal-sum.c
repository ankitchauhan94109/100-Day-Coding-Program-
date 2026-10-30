// Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int sum = 0;

    printf("Enter elements: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum of main diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("Diagonal sum= %d", sum);

return 0;
}