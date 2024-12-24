#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    // Display the value of the variable
    printf("Value of a: %d\n", a);

    // Display the address of the variable
    printf("Address of a: %p\n", (void *)&a);

    // Display the value stored in the pointer
    printf("Value stored in ptr (address of a): %p\n", (void *)ptr);

    // Display the value pointed to by the pointer
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}

