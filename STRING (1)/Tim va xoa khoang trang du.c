#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void removeExtraSpaces(char *str) {
    int length = strlen(str);
    int newIndex = 0;
    bool spaceSeen = false;
    int i;

    for ( i = 0; i < length; i++) {
        if (str[i] != ' ' || !spaceSeen) {
            str[newIndex++] = str[i];
            spaceSeen = (str[i] == ' ');
        }
    }

    str[newIndex] = '\0';
}

int main() {
    char input[1000];

    printf("Nhap chuoi: ");
    fgets(input, sizeof(input), stdin);

    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0'; // X�a d?u newline n?u c�
    }

    removeExtraSpaces(input);

    printf("Chuoi sau khi xoa khoang trang du: %s\n", input);

    return 0;
}

