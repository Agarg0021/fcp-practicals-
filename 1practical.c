#include <stdio.h>
//Simple Interest Calculation: Write a program that uses a function to calculate and return simple interest with given principal, rate, and time. 

float calculateSimpleInterest(float principal, float rate, float time) {
    float simpleInterest = (principal * rate * time) / 100;
    return simpleInterest;
}

int main() {
    float principal, rate, time;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    float interest = calculateSimpleInterest(principal, rate, time);

    printf("Simple Interest: %.2f\n", interest);

    return 0;

}
