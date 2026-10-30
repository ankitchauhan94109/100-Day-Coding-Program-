/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than
or equal to x and print it. This element is called the ceil of x. If such an element 
does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return 
the index of the first occurrence.*/

#include <stdio.h>

int main() {
    int n, x;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d sorted elements: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter a target: ");
    scanf("%d",&x);

    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] <= x)
        {
            printf("%d",arr[i]);
            found = 1;
            break;
        }
        
    }

    if (found == 0)
    {
        printf("-1");
    }

return 0;
}