#include <stdio.h>
//Multi-level Menu using Switch Case: Write a program to create a multi-level menu usingswitch cases that perform various basic mathematical operations (Add, Subtract, Divide,Multiply, Exponent).

int main() {
    int choice;
    int num1, num2, result;

    do {

        printf("\n--- Multi-level Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exponent\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 + num2;
                printf("Result: %d\n", result);
                break;

            case 2:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 - num2;
                printf("Result: %d\n", result);
                break;

            case 3:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 * num2;
                printf("Result: %d\n", result);
                break;

            case 4:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);

            
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %d\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;

            case 5:
                printf("Enter base and exponent (both integers): ");
                scanf("%d %d", &num1, &num2);

            
                result = 1;
                for (int i = 0; i < num2; i++) {
                    result *= num1;
                }
                printf("Result: %d\n", result);
                break;

            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }

    } while (choice != 6);

    return 0;
}
