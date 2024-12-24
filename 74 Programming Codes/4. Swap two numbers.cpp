#include <stdio.h>

int main() {
    int a, b, temp;

    // Input values from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Display values before swap
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap the values
    temp = a;
    a = b;
    b = temp;

    // Display values after swap
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

