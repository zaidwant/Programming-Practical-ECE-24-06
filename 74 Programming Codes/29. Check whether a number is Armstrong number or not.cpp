#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0;

    // Input the number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Check if the number is an Armstrong number
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    // Display the result
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

