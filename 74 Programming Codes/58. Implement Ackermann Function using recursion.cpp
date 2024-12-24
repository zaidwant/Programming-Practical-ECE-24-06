#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    return -1; // This should never be reached
}

int main() {
    int m, n;

    // Input values for m and n
    printf("Enter values for m and n: ");
    scanf("%d %d", &m, &n);

    // Calculate and display the result
    printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));

    return 0;
}

