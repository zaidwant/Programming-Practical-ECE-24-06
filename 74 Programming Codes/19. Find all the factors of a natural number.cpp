#include <stdio.h>

int main() {
    int n;

    // Input a number from user
    printf("Enter a natural number: ");
    scanf("%d", &n);

    // Find and display the factors
    printf("Factors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

