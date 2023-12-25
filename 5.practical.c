#include <stdio.h>
//Calculate Factorial using Loops: Write a program to calculate the factorial of a number using a for loop and return its value
unsigned long long calculateFactorial(int number) {
    unsigned long long factorial = 1;

    if (number < 0) {
        printf("Factorial is undefined for negative numbers.\n");
        return 0;
    }

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    unsigned long long factorial = calculateFactorial(number);
    printf("Factorial of %d is: %llu\n", number, factorial);

    return 0;
}
