#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char inputLine[MAX_LENGTH];

    // Input a line of text
    printf("Enter a line of text (up to %d characters):\n", MAX_LENGTH - 1);
    fgets(inputLine, sizeof(inputLine), stdin);

    // Remove the newline character from the input
    if (strlen(inputLine) > 0 && inputLine[strlen(inputLine) - 1] == '\n') {
        inputLine[strlen(inputLine) - 1] = '\0';
    }

    // Tokenize the line using strtok
    char *token = strtok(inputLine, " ");

    // Store tokens in an array
    char *tokens[MAX_LENGTH];
    int count = 0;
    while (token != NULL && count < MAX_LENGTH) {
        tokens[count++] = token;
        token = strtok(NULL, " ");
    }

    // Output tokens in reverse order
    printf("\nTokens in Reverse Order:\n");
    int i;
    for ( i = count - 1; i >= 0; --i) {
        printf("%s ", tokens[i]);
    }

    return 0;
}

