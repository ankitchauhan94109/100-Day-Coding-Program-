//Q86: Check if a $tring is a palindrome.

#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, flag = 1;

    printf("Enter a word: ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

return 0;
}