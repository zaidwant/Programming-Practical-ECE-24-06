#include <stdio.h>

int main() {
    int number, remainder;

    // Input the number from user
    printf("Enter a natural number: ");
    scanf("%d", &number);

    // Display the digits in reverse order
    printf("Digits in reverse order: ");
    while (number != 0) {
        remainder = number % 10;
        printf("%d ", remainder);
        number /= 10;
    }
    printf("\n");

    return 0;
}

