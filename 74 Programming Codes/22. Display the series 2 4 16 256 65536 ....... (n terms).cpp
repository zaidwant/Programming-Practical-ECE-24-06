#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Input the number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the series
    for (int i = 1; i <= n; i++) {
        printf("%lld ", (long long) pow(2, pow(2, i-1)));
    }
    printf("\n");

    return 0;
}

