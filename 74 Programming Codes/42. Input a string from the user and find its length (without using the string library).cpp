#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input a string from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Display the length
    printf("The length of the string is: %d\n", length);

    return 0;
}

