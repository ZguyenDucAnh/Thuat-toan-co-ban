#include <stdio.h>
#include <string.h>

// Function to count the occurrences of a substring in a string
int countSubstringOccurrences(const char *mainString, const char *substring) {
    int count = 0;
    int mainLength = strlen(mainString);
    int subLength = strlen(substring);

    // Check if the substring is longer than the main string, in which case it cannot occur
    if (mainLength < subLength) {
        return 0;
    }

    // Iterate through each possible substring in the main string
    int i;
    for ( i = 0; i <= mainLength - subLength; ++i) {
        // Compare each substring with the target substring
        if (strncmp(mainString + i, substring, subLength) == 0) {
            // If there is a match, increment the count
            count++;
        }
    }

    return count;
}

int main() {
    char mainString[100];
    char substring[50];

    // Input the main string
    printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);

    // Remove the newline character at the end, if present
    if (strlen(mainString) > 0 && mainString[strlen(mainString) - 1] == '\n') {
        mainString[strlen(mainString) - 1] = '\0';
    }

    // Input the substring to be counted
    printf("Enter the substring to count: ");
    fgets(substring, sizeof(substring), stdin);

    // Remove the newline character at the end, if present
    if (strlen(substring) > 0 && substring[strlen(substring) - 1] == '\n') {
        substring[strlen(substring) - 1] = '\0';
    }

    // Call the function to count occurrences and display the result
    int occurrences = countSubstringOccurrences(mainString, substring);
    printf("Number of occurrences of the substring: %d\n", occurrences);

    return 0;
}

