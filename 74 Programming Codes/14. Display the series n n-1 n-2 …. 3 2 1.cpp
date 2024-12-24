#include <stdio.h>

int main() {
    int n;

    // Input value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display the series n to 1
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

