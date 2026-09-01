#include <stdio.h>

int main() {
    int n;
    int num = 2, den = 3;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (float)num / den;
        num += 2;
        den += 4;
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}