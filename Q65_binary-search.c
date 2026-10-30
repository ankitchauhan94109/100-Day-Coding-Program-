//Q65: Search in a sorted array using binary search.

// Search in a sorted array using Binary Search

#include <stdio.h>

int main() {
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    int low = 0;
    int high = n - 1;
    int found = 0;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (target > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("-1");
    }

return 0;
}