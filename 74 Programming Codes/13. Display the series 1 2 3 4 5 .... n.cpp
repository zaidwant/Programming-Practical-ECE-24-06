#include <stdio.h>

int main() {
    int n;

    // Input value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display the series 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

