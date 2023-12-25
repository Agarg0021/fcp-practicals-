#include <stdio.h>
//Array operations: Write a program to find average, max and min elements from an array of n long integers. 

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size should be greater than 0.\n");
        return 1; 
    }

    long arr[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%ld", &arr[i]);
    }

    long sum = 0;
    long max = arr[0];
    long min = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    double average = (double)sum / n;

    printf("Average: %.2f\n", average);
    printf("Maximum element: %ld\n", max);  
      printf("Minimum element: %ld\n", min);

    return 0;
}
