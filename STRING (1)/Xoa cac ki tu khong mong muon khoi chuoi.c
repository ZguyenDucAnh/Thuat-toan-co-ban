#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isAlphabet(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void removeSpecialCharacters(char *str) {
    char *readPtr = str;
    char *writePtr = str;

    while (*readPtr != '\0') {
        if (isAlphabet(*readPtr)) {
            *writePtr = *readPtr;
            writePtr++;
        }
        readPtr++;
    }

    *writePtr = '\0'; 
}

int main() {
    char str[1000];

    printf("Nhap chuoi: ");
    scanf("%[^\n]", str); 

    removeSpecialCharacters(str);

    printf("Chuoi sau khi xoa cac ky tu dac biet: %s\n", str);

    return 0;
}

