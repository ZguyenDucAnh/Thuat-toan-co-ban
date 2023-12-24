#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countCharactersAndWords(char str[]) {
    int charCount = 0;
    int wordCount = 0;
    int sameWordCount = 0;

    char *words[100]; // Assuming a maximum of 100 words
    int wordIndex = 0;

    char *token = strtok(str, " ");  // Tokenize the string using space as a delimiter

    // Check each word
    while (token != NULL) {
        words[wordIndex++] = token;
        wordCount++;

        // Check the number of characters in the word
        int i;
        for ( i = 0; i < strlen(token); i++) {
            if (isalpha(token[i])) {
                charCount++;
            }
        }

        token = strtok(NULL, " ");
    }

    // Check the number of same words
    int i, j;
    for (i = 0; i < wordIndex; i++) {
        for (j = i + 1; j < wordIndex; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                sameWordCount++;
                break;
            }
        }
    }

    printf("So ky tu: %d\n", charCount);
    printf("So tu: %d\n", wordCount);
    printf("So tu giong nhau: %d\n", sameWordCount);
}

int main() {
    char inputString[1000];

    // Input the string from the user
    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input string
    inputString[strcspn(inputString, "\n")] = '\0';

    // Count the number of characters, words, and same words in the string
    countCharactersAndWords(inputString);

    return 0;
}

