#include <stdio.h>
#include <string.h>

void convertToLowerCase(char str[]) {
    int length = strlen(str);
    int i;

    for ( i = 0; i < length; i++) {
        // Chuyen moi ky tu thanh chu thuong
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char inputString[100];

    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Loai bo ki tu newline tu chuoi nhap
    inputString[strcspn(inputString, "\n")] = '\0';

    // Goi ham
    convertToLowerCase(inputString);

    // In ra chuoi sau khi chuyen doi
    printf("Chuoi sau khi chuyen doi thanh chu thuong: %s\n", inputString);

    return 0;
}

