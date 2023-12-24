#include <stdio.h>
#include <string.h>

int main() {
    char names[7][50]; // M?ng 2 chi?u d? luu tr? 7 t�n ngu?i, m?i t�n t?i da 50 k� t?
    int i, j;
    char temp[50]; // Bi?n t?m d? th?c hi?n qu� tr�nh s?p x?p

    // Nh?p v�o 7 t�n ngu?i t? ngu?i d�ng
    printf("Nh?p v�o 7 t�n ngu?i:\n");
    for (i = 0; i < 7; ++i) {
        scanf("%s", names[i]);
    }

    // S?p x?p c�c t�n theo th? t? alphabet
    for (i = 0; i < 7; ++i) {
        for (j = i + 1; j < 7; ++j) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // In ra c�c t�n d� s?p x?p
    printf("\nC�c t�n ngu?i theo th? t? alphabet:\n");
    for (i = 0; i < 7; ++i) {
        printf("%s ", names[i]);
    }

    return 0;
}

