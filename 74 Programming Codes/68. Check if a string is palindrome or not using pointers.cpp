#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int length) {
    char *left = str;
    char *right = str + length - 1;

    while (left < right) {
        if (*left != *right) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}

int main() {
    char str[100];

    // Input a string from user
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    // Check if the string is a palindrome
    if (isPalindrome(str, length)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}

