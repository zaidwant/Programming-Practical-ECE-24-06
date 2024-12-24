#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input a string from user
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    char *ptr = str + length - 1;

    // Display the string in reverse order using pointers
    printf("The string in reverse order is: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", *(ptr - i));
    }
    printf("\n");

    return 0;
}

