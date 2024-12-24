#include <stdio.h>

int main() {
    int n, isPrime = 1;

    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is prime
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}

