#include <stdio.h>

long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;

    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate and display the factorial
    printf("Factorial of %d is %lld\n", n, factorial(n));

    return 0;
}

