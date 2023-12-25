#include <stdio.h>
//⁠String Reverse without Library Function: Write a program to reverse a string (array ofchar) without using string library functions.

void reverseString(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    gets(inputString);

    reverseString(inputString);

    printf("Reversed String: %s\n", inputString);

    return 0;
}
