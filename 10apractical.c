#include <stdio.h>
//Write a program that uses two functions to swap two numbers
//Using a third variable 

void swapWithVariable(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void displaySwappedNumbers(int a, int b) {
    printf("Swapped numbers: a = %d, b = %d\n", a, b);
}

int main() {
    int num1, num2;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    printf("Original numbers: a = %d, b = %d\n", num1, num2);

    swapWithVariable(&num1, &num2);

    displaySwappedNumbers(num1, num2);

    return 0;
}
