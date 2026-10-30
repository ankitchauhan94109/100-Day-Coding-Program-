//Q63: Merge two arrays.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter  number of element of array1: ");
    scanf("%d",&a);

    int array1[a];

    printf("Enter elements of array1: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Enter  number of element of array2: ");
    scanf("%d",&b);
    
    int array2[b];

    printf("Enter elements of array2: ");
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&array2[i]);
    }
    
    int merged[a + b];
    int k = 0;

    for (int i = 0; i < a; i++)
    {
        merged[k] = array1[i];
        k++;
    }

    for (int i = 0; i < b; i++) 
    {
        int found = 0;

        for (int j = 0; j < k; j++)
        {
            if (array2[i] == merged[j])
            {
                found = 1;
                break;
            }
            
        }

        if (found == 0)
        {
            merged[k] = array2[i];
            k++;
        }
        
    }

    printf("Merged Array: ");
    for (int i = 0; i < k; i++) 
    {
        printf("%d ", merged[i]);
    }

    return 0;
}