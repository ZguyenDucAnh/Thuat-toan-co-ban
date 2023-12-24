#include <stdio.h>
#include <string.h>

int main() {
    char mainString[100];
    char subString[50];

    // Input the main string
    printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);

    // Remove the newline character from the main string
    if (strlen(mainString) > 0 && mainString[strlen(mainString) - 1] == '\n') {
        mainString[strlen(mainString) - 1] = '\0';
    }

    // Input the substring to check
    printf("Enter the substring to check: ");
    fgets(subString, sizeof(subString), stdin);

    // Remove the newline character from the substring
    if (strlen(subString) > 0 && subString[strlen(subString) - 1] == '\n') {
        subString[strlen(subString) - 1] = '\0';
    }

    // Use strstr to check if the substring exists in the main string
    char *result = strstr(mainString, subString);

    if (result != NULL) {
        printf("\n'%s' is a substring of '%s'\n", subString, mainString);
    } else {
        printf("\n'%s' is NOT a substring of '%s'\n", subString, mainString);
    }

    return 0;
}

