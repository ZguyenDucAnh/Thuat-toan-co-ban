#include <stdio.h>
#include <string.h>

void replaceLongWordsWithHash(const char *input, char *output) {
    char temp[100];
    strcpy(temp, input);
    char *token = strtok(temp, " ");
    int index = 0;

    while (token != NULL) {
        if (strlen(token) >= 4) {
        	int i;
            for ( i = 0; i < strlen(token); i++) {
                token[i] = '#';
            }
        }
        strcat(output, token);
        token = strtok(NULL, " ");
        if (token != NULL) {
            strcat(output, " ");
        }
    }
}

int main() {
    char input[100];
    char output[1000] = "";  // Kh?i t?o chu?i k?t qu? r?ng
    
    printf("Nhap chuoi: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Lo?i b? ký t? xu?ng dòng

    replaceLongWordsWithHash(input, output);

    printf("Chuoi sau khi thay the: %s\n", output);

    return 0;
}

