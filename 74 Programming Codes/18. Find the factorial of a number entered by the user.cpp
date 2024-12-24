#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display the result
    printf("Factorial of %d is %lld\n", n, factorial);

    return 0;
}

