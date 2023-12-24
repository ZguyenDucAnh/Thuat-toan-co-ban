#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];

    // Input the first string
    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);

    // Remove the newline character at the end, if present
    if (strlen(string1) > 0 && string1[strlen(string1) - 1] == '\n') {
        string1[strlen(string1) - 1] = '\0';
    }

    // Input the second string
    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);

    // Remove the newline character at the end, if present
    if (strlen(string2) > 0 && string2[strlen(string2) - 1] == '\n') {
        string2[strlen(string2) - 1] = '\0';
    }

    // Compare the two strings using strcmp
    int result = strcmp(string1, string2);

    // Display the result
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}

