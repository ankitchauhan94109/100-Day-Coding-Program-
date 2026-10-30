//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    // Shift elements greater than num one position to the right
    for (i = n - 1; i >= 0 && arr[i] > num; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert at the correct position
    arr[i + 1] = num;

    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

return 0;
}