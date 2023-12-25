#include <stdio.h>
//decrement of pointer
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers + 4; 

    printf("Original value at the pointer: %d\n", *ptr);

    ptr--;

    printf("After decrementing the pointer: %d\n", *ptr);

    return 0;
}
