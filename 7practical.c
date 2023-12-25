#include <stdio.h>
//Find Largest Element in an Array: Write a program that uses for loops to find the largest element in a 1-D array and returns it.

int findLargestElement(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
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

    int largest = findLargestElement(arr, size);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
