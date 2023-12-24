#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_WORDS 100

void splitStringIntoWords(const char *str, char words[MAX_WORDS][100], int *wordCount) {
    *wordCount = 0;
    
    const char *delimiter = " ";
    char *token = strtok((char *)str, delimiter);

    while (token != NULL && *wordCount < MAX_WORDS) {
        strcpy(words[*wordCount], token);
        (*wordCount)++;
        token = strtok(NULL, delimiter);
    }
}

int main() {
    char input[1000];
    char words[MAX_WORDS][100];
    int wordCount;
    int i;

    printf("Nhap chuoi: ");
    fgets(input, sizeof(input), stdin);

    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0'; 
    }

    splitStringIntoWords(input, words, &wordCount);

    printf("Cac tu trong chuoi:\n");
    for ( i = 0; i < wordCount; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}

