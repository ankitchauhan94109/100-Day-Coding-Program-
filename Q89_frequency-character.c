//Q89: Count frequency of a given character in a $tring.

#include <stdio.h>

int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a word: ");
    scanf("%s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);

return 0;
}