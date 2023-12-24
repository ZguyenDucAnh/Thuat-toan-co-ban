#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];

    printf("Nhap chuoi thu nhat: ");
    fgets(string1, sizeof(string1), stdin);

    // Loai bo ki tu newline o cuoi neu co
    if (strlen(string1) > 0 && string1[strlen(string1) - 1] == '\n') {
        string1[strlen(string1) - 1] = '\0';
    }

    printf("Nhap chuoi thu 2: ");
    fgets(string2, sizeof(string2), stdin);
    // Loai bo ki tu newline o cuoi neu co
    if (strlen(string2) > 0 && string2[strlen(string2) - 1] == '\n') {
        string2[strlen(string2) - 1] = '\0';
    }

    // So sanh hai chu?i
    if (strcmp(string1, string2) == 0) {
        printf("Hai chuoi giong nhau.\n");
    } else {
        printf("Hai chuoi khong giong nhau.\n");
    }

    return 0;
}

