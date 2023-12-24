#include <stdio.h>

int stringLengthWithBackspace(const char *str) {
    int length = 0;
    
    while (*str != '\0') {
        length++;
        str++;
    }
    
    return length;
}

int main() {
    char str[100];
    
    printf("Nhap chuoi: ");
    scanf("%[^\n]", str); // Ð?c c? d?u Enter
    
    int length = stringLengthWithBackspace(str);
    printf("Do dai cua chuoi la: %d\n", length);
    
    return 0;
}

