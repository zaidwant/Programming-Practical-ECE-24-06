#include <stdio.h>

int main() {
    int n, key, found = 0;

    // Input number of elements from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements from user
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element %d found at index %d\n", key, i);
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

