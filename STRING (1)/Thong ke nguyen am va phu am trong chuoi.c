#include <stdio.h>
#include <ctype.h>

int countVowels(const char *str) {
    int count = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    return count;
}

int countConsonants(const char *str) {
    int count = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    char input[1000];

    printf("Nhap chuoi: ");
    fgets(input, sizeof(input), stdin);

    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0'; 
    }

    int vowelCount = countVowels(input);
    int consonantCount = countConsonants(input);

    printf("So luong nguyen am: %d\n", vowelCount);
    printf("So luong phu am: %d\n", consonantCount);

    return 0;
}

