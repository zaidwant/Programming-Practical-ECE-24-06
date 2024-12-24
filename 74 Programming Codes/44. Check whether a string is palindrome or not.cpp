#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, isPalindrome = 1;

    // Input a string from user
    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Check if the string is a palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}

