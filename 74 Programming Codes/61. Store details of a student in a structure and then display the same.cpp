#include <stdio.h>

// Define a structure to store student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student student;

    // Input student details
    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}

