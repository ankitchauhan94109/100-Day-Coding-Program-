// Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    if (rows != cols) {
        printf("False");
        return 0;
    }

    printf("Enter elements: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int symmetric = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}