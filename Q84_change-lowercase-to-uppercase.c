//Q84: Convert a lowercase $tring to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a word: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (char)(str[i] - 32);
    }

    printf("%s\n", str);
    
return 0;
}