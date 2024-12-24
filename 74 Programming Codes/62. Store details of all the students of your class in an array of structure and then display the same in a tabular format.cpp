#include <stdio.h>

// Define a structure to store student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Input number of students from user
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details in tabular format
    printf("\nStudent Details:\n");
    printf("Roll Number\tName\t\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%.2f\n", students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}

