#include <stdio.h>
#include <string.h>
// length calculation of string
int main() {
    // Declare a string
    char str[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Calculate the length of the string using strlen function
    int length = strlen(str);

    // Display the result
    printf("Length of the string: %d\n", length);

    return 0;
}
