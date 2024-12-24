#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input number of elements from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements from user
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Display the sum
    printf("Sum of all elements: %d\n", sum);

    return 0;
}

