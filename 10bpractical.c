#include <stdio.h>
//Write a program that uses two functions to swap two numbers 
//Without using a third variable
void swapNumbers(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    swapNumbers(&num1, &num2);

    printf("Swapped values: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
