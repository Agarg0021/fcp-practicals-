#include <stdio.h>
//Array Operations: Write a program to traverse an array and print the odd-indexed elements
void printOddIndexedElements(int arr[], int size) {
    printf("Odd-indexed elements: ");
    for (int i = 1; i < size; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

    printOddIndexedElements(arr, size);

    return 0;
}
