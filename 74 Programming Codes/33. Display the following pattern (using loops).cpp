#include <stdio.h>

int main() {
    int n = 5; // Number of lines in the pattern

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

