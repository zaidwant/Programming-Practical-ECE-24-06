#include <stdio.h>

int main() {
    int n;

    // Input the number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    int a = 0, b = 1, next;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}

