#include <stdio.h>
//Subtract an integer from a pointer
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; 

    int indexToSubtract;

    
    printf("Enter the index to subtract from the pointer: ");
    scanf("%d", &indexToSubtract);
 
    ptr = ptr - indexToSubtract;

    printf("Result of subtracting %d from the pointer: %d\n", indexToSubtract, *ptr);

    return 0;
}
