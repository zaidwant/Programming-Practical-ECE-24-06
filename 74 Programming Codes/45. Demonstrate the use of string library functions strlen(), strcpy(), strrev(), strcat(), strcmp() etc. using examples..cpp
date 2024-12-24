#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input strings from user
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Demonstrate strlen()
    printf("Length of string 1: %lu\n", strlen(str1));
    printf("Length of string 2: %lu\n", strlen(str2));

    // Demonstrate strcpy()
    char copy[100];
    strcpy(copy, str1);
    printf("Copied string 1 into another string: %s\n", copy);

    // Demonstrate strcat()
    char concat[200];
    strcpy(concat, str1);
    strcat(concat, str2);
    printf("Concatenation of string 1 and string 2: %s\n", concat);

    // Demonstrate strcmp()

