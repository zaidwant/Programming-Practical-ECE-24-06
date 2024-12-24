#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

   
    result = pow(base, exponent);
    printf("%.2lf raised to the power of %.2lf is %.2lf\n", base, exponent, result);

    double number, sqrt_result;

   
    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);

    
    sqrt_result = sqrt(number);
    printf("The square root of %.2lf is %.2lf\n", number, sqrt_result);

    return 0;
}

