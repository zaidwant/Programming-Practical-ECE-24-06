#include <stdio.h>

int main() {
    int n;

    // Input the number of times the series should be displayed
    printf("Enter the number of times to display the series: ");
    scanf("%d", &n);

    // Display the series with nesting of loops
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d ", j);
        }
    }
    printf("\n");

    return 0;
}

