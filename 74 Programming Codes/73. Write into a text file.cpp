#include <stdio.h>

int main() {
    FILE *file;
    char str[100];

    // Open the file in write mode
    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Input a string from the user
    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);

    // Write the string to the file
    fputs(str, file);

    // Close the file
    fclose(file);

    printf("String written to the file successfully.\n");

    return 0;
}

