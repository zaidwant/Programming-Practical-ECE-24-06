#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers from user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the numbers using nested if-else statements
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("%d is the largest number.\n", num1);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("%d is the largest number.\n", num2);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    }

    return 0;
}

