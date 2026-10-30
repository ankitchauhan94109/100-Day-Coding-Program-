/*Q105: Write a program to take an integer array num$ of $ize n, and print the majority element. 
The majority element i$ the element that appear$ $trictly more than ⌊n / 2⌋ time$. Print -1 if no 
$uch element exi$t$. Note: Majority Element i$ not nece$$arily the element that i$ pre$ent mo$t number of time$.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);  
    }

    int majority = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            majority = arr[i];
            break;
        }

    }

    printf("Majority elements: %d",majority);
    
return 0;
}