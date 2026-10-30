//Q95: Check if one $tring is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Lengths must be equal
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check whether str2 exists in temp
    if (strstr(temp, str2) != NULL) {
        printf("Rotation");
    }
    else {
        printf("Not rotation");
    }

    return 0;
}