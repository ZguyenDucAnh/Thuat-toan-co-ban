#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalizeWord(char *str, const char *wordToCapitalize) {
    int length = strlen(str);
    int wordLength = strlen(wordToCapitalize);
    int i, j;

    for (i = 0; i <= length - wordLength; i++) {
        if (strncasecmp(str + i, wordToCapitalize, wordLength) == 0) {
            for (j = 0; j < wordLength; j++) {
                str[i + j] = toupper(str[i + j]);
            }
        }
    }
}

int main() {
    char sentence[1000];
    char wordToCapitalize[100];

    printf("Nhap cau: ");
    fgets(sentence, sizeof(sentence), stdin);

    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0'; 
    }

    printf("Nhap tu can in hoa: ");
    scanf("%s", wordToCapitalize);

    capitalizeWord(sentence, wordToCapitalize);

    printf("Cau sau khi in hoa tu \"%s\": %s\n", wordToCapitalize, sentence);

    return 0;
}

