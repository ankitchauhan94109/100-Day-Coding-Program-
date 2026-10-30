//Q98: Print initials of a name with the surname displayed in full.

// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    int lastSpace = -1;

    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("%c.", name[0]);

    for (int i = 1; i < lastSpace; i++) {
        if (name[i] == ' ') {
            printf("%c.", name[i + 1]);
        }
    }

    printf(" %s", name + lastSpace + 1);

return 0;
}