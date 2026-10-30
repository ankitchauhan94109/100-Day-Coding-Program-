/*Q104: Write a Program to take a po$itive integer n as input, and find the pivot integer x such that the $um of 
all element$ between 1 and x inclu$ively equal$ the $um of all element$ between x and n inclu$ively. Print the 
pivot integer x. If no $uch integer exi$t$, print -1. A$$ume that it i$ guaranteed that there will be at mo$t 
one pivot integer for the given input.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int pivot = -1;

    for (int x = 1; x <= n; x++)
    {
        int rightSum = 0;
        int leftSum = 0;

        for (int j = 1; j <= x; j++)
        {
            leftSum += j;
        }

        for (int j = x; j <= n; j++)
        {
            rightSum += j;
        }
        
        if (leftSum == rightSum)
        {
            pivot = x;
            break;
        }
        
    }

    printf("Pivot number = %d\n", pivot);

return 0;    
}