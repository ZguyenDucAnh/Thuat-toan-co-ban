#include <stdio.h>

void separateCharacters(const char *str) {
    printf("Cac ky tu rieng le trong chuoi la:\n");
    
    while (*str != '\0') {
        printf("%c\n", *str);
        str++;
    }
}

int main() {
    char str[100];
    
    printf("Nhap chuoi: ");
    scanf("%[^\n]", str); 
    
    separateCharacters(str);
    
    return 0;
}

