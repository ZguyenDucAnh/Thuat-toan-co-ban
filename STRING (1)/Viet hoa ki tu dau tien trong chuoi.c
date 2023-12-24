#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void capitalizeFirstCharacter(char *str) {
    bool isBeginningOfSentence = true;
    int i;

    for ( i = 0; str[i] != '\0'; i++) {
        if (isBeginningOfSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            isBeginningOfSentence = false;
        } else if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            isBeginningOfSentence = true;
        }
    }
}

int main() {
    char sentence[1000];

    printf("Nhap cau: ");
    fgets(sentence, sizeof(sentence), stdin);

    capitalizeFirstCharacter(sentence);

    printf("Cau sau khi viet hoa ky tu dau tien: %s\n", sentence);

    return 0;
}

