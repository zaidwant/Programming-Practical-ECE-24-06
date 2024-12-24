#include <stdio.h>

int main() {
    // Display even numbers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

