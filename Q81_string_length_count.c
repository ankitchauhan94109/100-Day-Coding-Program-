//Q81: Count character$ in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[1000];

    int count = 0;

    printf("Enter a word: ");
    scanf("%s", str);

    while (str[count] != '\0') 
    {
        count++;
    }

    printf("%d\n", count);

return 0;
}