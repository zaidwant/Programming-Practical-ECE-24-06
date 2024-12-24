#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    // Input value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the product of series 1 to n
    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    // Display the result
    printf("The product of the series is %lld\n", product);

    return 0;
}

