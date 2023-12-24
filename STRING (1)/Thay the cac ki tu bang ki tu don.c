#include <stdio.h>
#include <string.h>

void replaceDuplicates(const char *input, char *output) {
    int index = 0;
int i;
    for (i = 0; i < strlen(input); i++) {
        if (i == 0 || input[i] != input[i - 1]) {
            output[index++] = input[i];
        }
    }
    output[index] = '\0';
}

int main() {
    char input[100];
    char result[100] = "";

    printf("Nhap chuoi: ");
    scanf(" %[^\n]", input);

    replaceDuplicates(input, result);

    printf("Chuoi sau khi thay the cac ky tu lap lai: %s\n", result);

    return 0;
}

