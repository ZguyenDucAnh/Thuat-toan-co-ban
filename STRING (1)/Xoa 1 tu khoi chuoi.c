#include <stdio.h>
#include <string.h>

void removeWord(char *str, const char *word) {
    // Tim vi tri cua tu trong chuoi
    char *pos = strstr(str, word);

    // Neu tu ton tai trong chuoi
    if (pos != NULL) {
        // T?ao ban sau sau khi xoa tu
        char temp[100];
        strcpy(temp, pos + strlen(word));

        // Xoa tu bang cach sao chep tu can xoa vao temp
        strcpy(pos, temp);
    }
}

int main() {
    char inputString[100];
    char wordToRemove[20];

    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Loai bo ki tu newline neu co
    if (strlen(inputString) > 0 && inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }

    printf("Nhap tu can xoa: ");
    scanf("%s", wordToRemove);

    // Goi ham
    removeWord(inputString, wordToRemove);

    printf("Chuoi sau khi xoa tu: %s\n", inputString);

    return 0;
}

