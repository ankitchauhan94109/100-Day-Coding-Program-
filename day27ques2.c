#include <stdio.h>

int main() {
    int i, j, space;

    // Increasing part
    for (i = 1; i <= 9; i += 2) {
        for (space = 1; space <= (9 - i) / 2; space++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Decreasing part
    for (i = 7; i >= 1; i -= 2) {
        for (space = 1; space <= (9 - i) / 2; space++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}