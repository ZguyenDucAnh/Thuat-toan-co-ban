#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20]; // M?ng 2 chi?u d? luu tr? 5 tên, m?i tên t?i da 20 kí t?
    char temp[20]; // bien tam de thuc hien qua trinh sap xep
    int i, j;

    // Nh?p vào 5 tên t? ngu?i dùng
    printf("Nh?p vào 5 tên:\n");
    for (i = 0; i < 5; ++i) {
        scanf("%s", names[i]);
    }

    // S?p x?p các tên theo th? t? alphabet
    for (i = 0; i < 4; ++i) {
        for (j = i + 1; j < 5; ++j) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // In ra các tên dã s?p x?p, cách nhau b?i kho?ng tr?ng
    printf("\nCác tên theo th? t? alphabet và cách nhau b?i kho?ng tr?ng:\n");
    for (i = 0; i < 5; ++i) {
        printf("%s ", names[i]);
    }

    return 0;
}

