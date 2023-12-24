#include <stdio.h>
#include <string.h>
#include <ctype.h>

void addDashesAroundConsonants(const char *input, char *output) {
    int index = 0;
int i;
    for (i = 0; i < strlen(input); i++) {
        if (isalpha(input[i]) && !strchr("aeiouAEIOU", input[i])) {
            output[index++] = '-';
            output[index++] = input[i];
            output[index++] = '-';
        } else {
            output[index++] = input[i];
        }
    }
    output[index] = '\0';
}

int main() {
    char input[100];
    char result[200] = "";

    printf("Nhap chuoi: ");
    scanf(" %[^\n]", input);

    addDashesAroundConsonants(input, result);

    printf("Chuoi sau khi them dau '-' o ca hai phia cua cac phan tu khong phai la nguyen am: %s\n", result);

    return 0;
}

