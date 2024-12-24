#include <stdio.h>

int main() {
    float percentage;

    // Input percentage from user
    printf("Enter the percentage of the student: ");
    scanf("%f", &percentage);

    // Determine grade based on percentage
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade: B\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("Grade: C\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade: D\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

