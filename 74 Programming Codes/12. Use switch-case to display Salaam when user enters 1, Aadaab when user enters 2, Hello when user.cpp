#include <stdio.h>

int main() {
    int choice;

    // Input choice from user
    printf("Enter a number (1, 2, or 3): ");
    scanf("%d", &choice);

    // Use switch-case to display message based on choice
    switch (choice) {
        case 1:
            printf("Salaam\n");
            break;
        case 2:
            printf("Aadaab\n");
            break;
        case 3:
            printf("Hello\n");
            break;
        default:
            printf("Incorrect Option\n");
            break;
    }

    return 0;
}

