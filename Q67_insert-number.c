//Q67: Insert an element in an array at a given position.

// Insert an element in an array at a given position

#include <stdio.h>

int main() {
    int n, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n + 1];

    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter position to insert: ");
    scanf("%d", &position);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Shift elements one position to the right
    for (int i = n; i >= position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the new element
    array[position] = element;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}