#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20]; // M?ng 2 chi?u d? luu tr? 5 t�n, m?i t�n t?i da 20 k� t?
    char temp[20]; // bien tam de thuc hien qua trinh sap xep
    int i, j;

    // Nh?p v�o 5 t�n t? ngu?i d�ng
    printf("Nh?p v�o 5 t�n:\n");
    for (i = 0; i < 5; ++i) {
        scanf("%s", names[i]);
    }

    // S?p x?p c�c t�n theo th? t? alphabet
    for (i = 0; i < 4; ++i) {
        for (j = i + 1; j < 5; ++j) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // In ra c�c t�n d� s?p x?p, c�ch nhau b?i kho?ng tr?ng
    printf("\nC�c t�n theo th? t? alphabet v� c�ch nhau b?i kho?ng tr?ng:\n");
    for (i = 0; i < 5; ++i) {
        printf("%s ", names[i]);
    }

    return 0;
}

