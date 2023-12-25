#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int nCr(int n, int r) {
    if (n < r) {
        return 0; 
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    printf("%dC%d = %d\n", n, r, nCr(n, r));

    return 0;
}
