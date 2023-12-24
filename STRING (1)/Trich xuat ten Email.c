#include <stdio.h>
#include <string.h>

void extractStringBeforeAt(const char *email) {
    const char *at = strchr(email, '@');
    if (at != NULL) {
        int length = at - email;
        char extractedString[length + 1];

        strncpy(extractedString, email, length);
        extractedString[length] = '\0';

        printf("Ten email la: %s\n", extractedString);
    } else {
        printf("Khong tim thay ten email.\n");
    }
}

int main() {
    char email[100];

    printf("Nhap dia chi email: ");
    scanf("%s", email);

    extractStringBeforeAt(email);

    return 0;
}

