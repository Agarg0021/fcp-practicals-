#include <stdio.h>
//file read 
int main() {
    FILE *filePointer;
    char data[100];

    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Data read from the file:\n");
    while (fgets(data, sizeof(data), filePointer) != NULL) {
        printf("%s", data);
    }

    fclose(filePointer);

    return 0;
}
