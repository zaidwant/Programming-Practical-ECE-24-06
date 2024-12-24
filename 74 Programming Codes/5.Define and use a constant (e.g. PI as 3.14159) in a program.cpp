#include <stdio.h>

// Define a constant for PI
#define PI 3.14159

int main() {
    float radius, area;

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}

