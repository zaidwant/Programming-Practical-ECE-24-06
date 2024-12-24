#include <stdio.h>

int main() {
    int number;
    const char* result;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Use ternary operator to determine the sign of the number
    result = (number > 0) ? "positive" : (number < 0) ? "negative" : "zero";

    // Display the result
    printf("The number %d is %s.\n", number, result);

    return 0;
}

