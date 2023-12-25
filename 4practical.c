#include <stdio.h>
//Check Even or Odd Number: Write a program that takes n as user input and determines if it is even or odd. 

int main() {
    int n;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is an even number.\n", n);
    } else {
        printf("%d is an odd number.\n", n);
    }

    return 0;
}
