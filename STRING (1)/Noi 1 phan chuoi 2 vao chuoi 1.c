#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char firstString[MAX_LENGTH];
    char secondString[MAX_LENGTH];
    int appendLength;

    // Input the first string
    printf("Enter the first string: ");
    fgets(firstString, sizeof(firstString), stdin);

    // Remove the newline character from the input
    if (strlen(firstString) > 0 && firstString[strlen(firstString) - 1] == '\n') {
        firstString[strlen(firstString) - 1] = '\0';
    }

    // Input the second string
    printf("Enter the second string: ");
    fgets(secondString, sizeof(secondString), stdin);

    // Remove the newline character from the input
    if (strlen(secondString) > 0 && secondString[strlen(secondString) - 1] == '\n') {
        secondString[strlen(secondString) - 1] = '\0';
    }

    // Input the number of characters to append
    printf("Enter the number of characters to append: ");
    scanf("%d", &appendLength);

    // Use strncat to append part of the second string to the first string
    strncat(firstString, secondString, appendLength);

    // Display the modified string and its length
    printf("\nModified String: %s\n", firstString);
    printf("Length after append: %lu\n", strlen(firstString));

    return 0;
}

