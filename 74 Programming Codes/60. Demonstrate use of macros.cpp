#include <stdio.h>

// Define macros
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int a, b;
    float radius;

    // Input values for demonstration
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Use the macros
    printf("Area of the circle with radius %.2f: %.2f\n", radius, PI * SQUARE(radius));
    printf("Square of %d: %d\n", a, SQUARE(a));
    printf("Maximum of %d and %d: %d\n", a, b, MAX(a, b));

    return 0;
}

