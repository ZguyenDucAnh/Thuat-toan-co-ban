#include <stdio.h>
#include <string.h>

void replaceWord(char *str, const char *wordToReplace, const char *replacement) {
    int length = strlen(str);
    int wordLength = strlen(wordToReplace);
    int replacementLength = strlen(replacement);
    int i;

    for ( i = 0; i <= length - wordLength; i++) {
        if (strncmp(str + i, wordToReplace, wordLength) == 0) {
            memmove(str + i + replacementLength, str + i + wordLength, length - i - wordLength + 1);
            memcpy(str + i, replacement, replacementLength);
            length = length - wordLength + replacementLength;
        }
    }
}

int main() {
    char sentence[1000];
    char wordToReplace[100];
    char replacement[100];

    printf("Nhap cau: ");
    fgets(sentence, sizeof(sentence), stdin);

    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0'; 
    }

    printf("Nhap tu can thay the: ");
    scanf("%s", wordToReplace);

    printf("Nhap tu thay the: ");
    scanf("%s", replacement);

    replaceWord(sentence, wordToReplace, replacement);

    printf("Cau sau khi thay the tu \"%s\" bang \"%s\": %s\n", wordToReplace, replacement, sentence);

    return 0;
}

