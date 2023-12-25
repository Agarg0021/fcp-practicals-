#include <stdio.h>
//program to write data into a file.
int main() {
    FILE *filePointer;
    char data[100];

    filePointer = fopen("example.txt", "w");

    if (filePointer == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter data to write into the file:\n");
    fgets(data, sizeof(data), stdin);

    fprintf(filePointer, "%s", data);

    fclose(filePointer);

    printf("Data written to the file successfully.\n");

    return 0;
}
