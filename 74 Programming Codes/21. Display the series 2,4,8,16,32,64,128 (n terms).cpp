#include <stdio.h>

int main() {
    int n;

    // Input the number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the series
    int value = 2;
    for (int i = 1; i <= n; i++) {
        printf("%d ", value);
        value *= 2;
    }
    printf("\n");

    return 0;
}

