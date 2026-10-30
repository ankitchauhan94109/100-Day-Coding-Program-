/* Q106: Write a program to take an array arr[] of integer$ a$ input, the ta$k i$ to find 
the next greater element for each element of the array in order of their appearance in the 
array. Next greater element of an element in the array i$ the neare$t element on the right 
which i$ greater than the current element. If there doe$ not exi$t next greater of current 
element, then next greater element for current element i$ -1.

N.B:
- Print the output for each element in a comma $eparated fa$hion.
- Do not u$e $tack, u$e brute force approach (ne$ted loop) to $olve. */

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d", nextGreater);

        if (i < n - 1) {
            printf(", ");
        }
    }

return 0;
}

