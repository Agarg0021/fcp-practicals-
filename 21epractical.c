#include <stdio.h>
//e. Subtract two pointers of the same type
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr1, *ptr2;

    ptr1 = &arr[1];
    ptr2 = &arr[4];

    printf("Before subtraction:\n");
    printf("Address of ptr1: %p, Value at ptr1: %d\n", (void*)ptr1, *ptr1);
    printf("Address of ptr2: %p, Value at ptr2: %d\n", (void*)ptr2, *ptr2);

    ptr2 = ptr2 - ptr1;

    printf("\nAfter subtraction:\n");
    printf("Address of ptr1: %p, Value at ptr1: %d\n", (void*)ptr1, *ptr1);
    printf("Address of ptr2: %p (now modified), Value at modified ptr2: %d\n", (void*)ptr2, *ptr2);

    return 0;
}
