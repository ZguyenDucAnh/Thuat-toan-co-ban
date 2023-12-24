#include <stdio.h>
#include <string.h>

// Function to count and print words starting with 'h' and ending with 'g'
int countAndPrintWords(char str[]) {
    int count = 0;
    int len = strlen(str);
	int i;
    for ( i = 0; i < len; ++i) {
        // Check for the start of a word
        if ((i == 0 || str[i - 1] == ' ') && str[i] == 'h') {
            int j = i + 1;

            // Check if the word ends with 'g'
            while (j < len && str[j] != ' ' && str[j] != '\0') {
                ++j;
            }

            if (j > i + 1 && (j == len || (j < len && str[j - 1] == 'g'))) {
                // Print the word
                printf("%.*s\n", j - i, &str[i]);
                ++count;
            }
        }
    }

    return count;
}

int main() {
    char inputString[100];

    // Get input string from the user
    printf("Enter a string (max length 100): ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input string
    int len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }

    // Count and print words starting with 'h' and ending with 'g'
    int result = countAndPrintWords(inputString);
    printf("Number of words starting with 'h' and ending with 'g': %d\n", result);

    return 0;
}

