#include <stdio.h>

// Define a structure to store student details
struct Student {
    int rollNo;
    float marks;
};

int main() {
    int n, topperIndex = 0;

    // Input number of students from user
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find the topper of the class
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Display the details of the topper
    printf("\nTopper of the class:\n");
    printf("Roll Number: %d\n", students[topperIndex].rollNo);
    printf("Marks: %.2f\n", students[topperIndex].marks);

    return 0;
}

