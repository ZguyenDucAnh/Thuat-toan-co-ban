#include <stdio.h>
#include <string.h>

int main() {
    char names[7][50]; // M?ng 2 chi?u d? luu tr? 7 tên ngu?i, m?i tên t?i da 50 kí t?
    int i, j;
    char temp[50]; // Bi?n t?m d? th?c hi?n quá trình s?p x?p

    // Nh?p vào 7 tên ngu?i t? ngu?i dùng
    printf("Nh?p vào 7 tên ngu?i:\n");
    for (i = 0; i < 7; ++i) {
        scanf("%s", names[i]);
    }

    // S?p x?p các tên theo th? t? alphabet
    for (i = 0; i < 7; ++i) {
        for (j = i + 1; j < 7; ++j) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // In ra các tên dã s?p x?p
    printf("\nCác tên ngu?i theo th? t? alphabet:\n");
    for (i = 0; i < 7; ++i) {
        printf("%s ", names[i]);
    }

    return 0;
}

