//Q57: Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, avg, sum = 0;
        printf("Enter number of elements: ");
        scanf("%d", &n);

    int arr[n];
        printf("Enter %d elements: ", n);
            for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
                sum += arr[i];
            }

        printf("Sum of array elements: %d\n", sum);

        avg = sum / 2;
        printf("Average= %d",avg);
    
return 0;
}