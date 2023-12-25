#include <stdio.h>
//Sum of Array Elements: Write a program to calculate and return the sum of elements of a 1-D array. 

int calculateArraySum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size should be greater than 0.\n");
        return 1; 
    }

    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = calculateArraySum(arr, size);
    printf("Sum of array elements is: %d\n", sum);

    return 0;
}
