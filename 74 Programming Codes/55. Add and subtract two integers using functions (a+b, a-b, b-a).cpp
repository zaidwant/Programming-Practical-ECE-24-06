#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers (a - b)
int subtract_a_b(int a, int b) {
    return a - b;
}

// Function to subtract two integers (b - a)
int subtract_b_a(int a, int b) {
    return b - a;
}

int main() {
    int a, b;

    // Input values from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Display the results
    printf("Sum: %d + %d = %d\n", a, b, add(a, b));
    printf("Difference (a - b): %d - %d = %d\n", a, b, subtract_a_b(a, b));
    printf("Difference (b - a): %d - %d = %d\n", b, a, subtract_b_a(a, b));

    return 0;
}

