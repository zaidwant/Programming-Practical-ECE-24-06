#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, sentences = 0;
    int vowels = 0, consonants = 0, punctuation = 0;
    int inWord = 0;

    // Open the file in read mode
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Read the contents of the file and count
    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (isspace(ch) || ispunct(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }

        if (ch == '.' || ch == '!' || ch == '?') {
            sentences++;
        }

        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        if (ispunct(ch)) {
            punctuation++;
        }
    }

    // Ensure the last word is counted if the file doesn't end with whitespace or punctuation
    if (inWord) {
        words++;
    }

    // Close the file
    fclose(file);

    // Display the counts
    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of sentences: %d\n", sentences);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of punctuation marks: %d\n", punctuation);

    return 0;
}

