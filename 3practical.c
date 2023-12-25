#include <stdio.h>
//Sum of Natural Numbers: Given a positive integer n, write a program to calculate and return the sum of natural numbers up to n using loops
int calculateSum(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    int sum = calculateSum(n);
    printf("Sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
