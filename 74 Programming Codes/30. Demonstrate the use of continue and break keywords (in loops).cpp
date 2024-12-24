#include <stdio.h>

int main() {
    // Demonstrate the use of continue keyword
    printf("Using continue keyword:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // Demonstrate the use of break keyword
    printf("Using break keyword:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

