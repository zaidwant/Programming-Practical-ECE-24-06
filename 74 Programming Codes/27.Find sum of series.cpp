#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    // Input the value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    // Display the result
    printf("The sum of the series is %.2f\n", sum);

    return 0;
}

