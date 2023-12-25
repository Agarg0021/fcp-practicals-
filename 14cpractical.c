#include <stdio.h>
#include <string.h>
// string concatination
void concatenateStrings(char str1[], char str2[]) {
    int i, j;

    i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main() {
    char string1[100], string2[50];

    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);

    concatenateStrings(string1, string2);

    printf("Concatenated string: %s\n", string1);

    return 0;
}

    