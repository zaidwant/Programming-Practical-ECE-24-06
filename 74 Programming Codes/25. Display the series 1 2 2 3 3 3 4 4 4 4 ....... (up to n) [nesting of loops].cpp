#include <stdio.h>

int main() {
    int n;

    // Input the value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display the series with nesting of loops
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

