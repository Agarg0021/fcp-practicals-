#include <stdio.h>
// Integer to be added to the pointer

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers; 

    printf("Original array elements: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(ptr + i)); 
    }

    int offset = 2; 

    ptr = ptr + offset;

    printf("\nArray elements after adding %d to the pointer: ", offset);
    for (int i = 0; i < 3; ++i) {
        printf("%d ", *(ptr + i)); 
    }

    return 0;
}
