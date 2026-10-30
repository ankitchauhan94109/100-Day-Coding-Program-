//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, positive = 0, negative = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] > 0)
        {
            positive++;        }
        else
        {
            negative++;
        }
    }
   printf("Positive= %d, Negative= %d, Zero= %d",positive,negative,zero);   
    
return 0;    
}