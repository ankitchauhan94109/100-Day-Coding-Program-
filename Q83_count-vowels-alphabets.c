//Q83: Count vowel$ and consonants in a string.

#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a word: ");
    scanf(" %s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
    }
    printf("vowels=%d consonants=%d\n", vowels, consonants);
    
return 0;
}