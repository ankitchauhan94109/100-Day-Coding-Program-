//Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int n, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter index to delete: ");
    scanf("%d", &position);

    for (int i = position; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}