#include <stdio.h>
 // Increment the pointer
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers; 

    printf("Original value at the pointer: %d\n", *ptr);

   
    ptr++;

    printf("After incrementing the pointer: %d\n", *ptr);

    return 0;
}
