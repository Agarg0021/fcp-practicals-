#include <stdio.h>
//Temperature Conversion: Write a program that uses two functions to convert temperature from Celsius to Fahrenheit and vice versa, respectively and return the converted values.
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float temperature;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temperature);
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));

    return 0;
}
