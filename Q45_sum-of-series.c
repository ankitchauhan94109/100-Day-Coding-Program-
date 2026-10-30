//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, numerator = 2, denominator = 3;
    float sum = 0.0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
            sum += (float)numerator/denominator;    
            numerator += 2;
            denominator += 4;
            
    }
        printf("Approximate sum: %.1f",sum);

return 0;
    
}