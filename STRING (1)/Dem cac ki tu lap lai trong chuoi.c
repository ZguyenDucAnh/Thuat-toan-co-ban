#include <stdio.h>

void countDuplicateCharacters(const char *str) {
    int count[256] = {0}; 
int i;
    for ( i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }
    printf("Ky tu\tSo lan xuat hien\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("%c\t%d\n", i, count[i]);
        }
    }
}

int main() {
    char input[100];
    
    printf("Nhap chuoi: ");
    scanf("%[^\n]s", input);

    countDuplicateCharacters(input);

    return 0;
}

