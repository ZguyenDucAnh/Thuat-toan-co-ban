#include <stdio.h>
#include <ctype.h>

int main() {
    char line[100];

    // Input a line of text
    printf("Enter a line of text (up to 99 characters):\n");
    fgets(line, sizeof(line), stdin);

    // Initialize counters
    int vowelCount = 0;
    int consonantCount = 0;
    int digitCount = 0;
    int spaceCount = 0;

    // Loop through each character in the line
    int i;
    for (i = 0; line[i] != '\0'; ++i) {
        char currentChar = line[i];

        // Check if the character is a vowel
        if (tolower(currentChar) == 'a' || tolower(currentChar) == 'e' ||
            tolower(currentChar) == 'i' || tolower(currentChar) == 'o' ||
            tolower(currentChar) == 'u') {
            vowelCount++;
        }
        // Check if the character is a consonant
        else if (isalpha(currentChar)) {
            consonantCount++;
        }
        // Check if the character is a digit
        else if (isdigit(currentChar)) {
            digitCount++;
        }
        // Check if the character is a white space
        else if (isspace(currentChar)) {
            spaceCount++;
        }
    }

    // Display the results
    printf("\nResults:\n");
    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);
    printf("Digits: %d\n", digitCount);
    printf("White Spaces: %d\n", spaceCount);

    return 0;
}

