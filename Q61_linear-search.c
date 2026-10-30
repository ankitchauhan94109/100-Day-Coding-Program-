//Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, key, found = 1;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter a element to found: ");
    scanf("%d",&key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            printf("Element found at index %d",i);
            break;
        }
        
    }

    if (found == 0)
    {
        printf("No such element found");
    }
    
return 0; 
}