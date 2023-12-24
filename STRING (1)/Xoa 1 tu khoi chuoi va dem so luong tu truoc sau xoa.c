#include <stdio.h>
#include <string.h>

// Function to remove a particular word from a line of text
void removeWord(char *line, const char *word) {
    char *pos = strstr(line, word);

    while (pos != NULL) {
        // Remove the word from the line
        strcpy(pos, pos + strlen(word));

        // Find the next occurrence of the word
        pos = strstr(line, word);
    }
}

// Function to count the number of words in a line using strtok
int countWords(const char *line) {
    int count = 0;
    char copy[100]; // Copy of the line because strtok modifies the original string
    strcpy(copy, line);

    // Tokenize the line using strtok
    char *token = strtok(copy, " ");

    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    return count;
}

int main() {
    char inputLine[100];
    char wordToRemove[20];

    // Input a line of text
    printf("Enter a line of text: ");
    fgets(inputLine, sizeof(inputLine), stdin);

    // Remove the newline character at the end, if present
    if (strlen(inputLine) > 0 && inputLine[strlen(inputLine) - 1] == '\n') {
        inputLine[strlen(inputLine) - 1] = '\0';
    }

    // Input the word to be removed
    printf("Enter the word to remove: ");
    scanf("%s", wordToRemove);

    // Count the number of words before removing the word
    int wordsBefore = countWords(inputLine);

    // Remove the word from the line
    removeWord(inputLine, wordToRemove);

    // Count the number of words after removing the word
    int wordsAfter = countWords(inputLine);

    // Display the results
    printf("\nLine of text after removing the word: %s\n", inputLine);
    printf("Number of words before removing the word: %d\n", wordsBefore);
    printf("Number of words after removing the word: %d\n", wordsAfter);

    return 0;
}

