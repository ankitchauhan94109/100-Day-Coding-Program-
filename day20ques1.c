#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int found = 0;

    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;

        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }

        num /= 10;
    }

    if (found)
        printf("%d", product);
    else
        printf("No odd digits");

    return 0;
}