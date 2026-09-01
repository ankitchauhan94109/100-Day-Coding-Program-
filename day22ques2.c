#include <stdio.h>

int main() {
    int n;
    float sum = 1.0;
    int num = 3, den = 4;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Sum = %.2f", sum);
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        sum = sum + (float)num / den;
        num += 2;
        den += 2;
    }

    printf("Sum = %.2f", sum);

    return 0;
}