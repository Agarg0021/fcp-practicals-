#include <stdio.h>
//program to append data to a file.
int main() {
    FILE *filePointer;
    char data[100];

    filePointer = fopen("example.txt", "a");

    if (filePointer == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter data to append to the file:\n");
    fgets(data, sizeof(data), stdin);

    fprintf(filePointer, "%s", data);

    fclose(filePointer);

    printf("Data appended to the file successfully.\n");

    return 0;
}
