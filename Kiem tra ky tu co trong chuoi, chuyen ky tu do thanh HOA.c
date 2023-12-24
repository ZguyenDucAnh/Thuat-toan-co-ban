#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char chuoi[100];
    char ki_tu;
    int i, tim_thay = 0;

    gets(chuoi);

    scanf(" %c", &ki_tu);

    // Kiem tra ki tu co xuat hien trong chuoi khong
    for (i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == ki_tu) {
            tim_thay = 1;
            chuoi[i] = toupper(chuoi[i]); 
        }
    }

    // In ket qua
    if (tim_thay) {
        printf("%s\n", chuoi);
    } else {
        printf("Character '%c' not found .\n", ki_tu);
    }

    return 0;
}