// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < rows + cols - 1; d++) {

        if (d % 2 == 0) {
            // Move from bottom-left to top-right
            for (int i = d; i >= 0; i--) {
                int j = d - i;

                if (i < rows && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
        else {
            // Move from top-right to bottom-left
            for (int j = d; j >= 0; j--) {
                int i = d - j;

                if (i < rows && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }

return 0;
}