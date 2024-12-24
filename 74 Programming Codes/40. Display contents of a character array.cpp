#include <stdio.h>

int main() {
    char arr[] = "Hello, World!";
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Contents of the character array: ");
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}

