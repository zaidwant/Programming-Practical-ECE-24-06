#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of series 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("The sum of the series is %d\n", sum);

    return 0;
}

