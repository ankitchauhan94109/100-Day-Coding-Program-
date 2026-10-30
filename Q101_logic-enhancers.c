/*Q101: Write a Program to take a $orted array(say nums[]) and an integer (say target) as input$.
 The elements in the $orted array might be repeated. You need to print the first and last occurrence
  of the target and print the index of first and last occurrence. Print -1, -1 if the target is not pre$ent.*/

#include <stdio.h>

int main() {
    int n, target;
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    printf("%d,%d", first, last);

return 0;
}