#include <stdio.h>

void printReverseCharacters(const char *str) {
    printf("Cac ky tu rieng le cua chuoi theo thu tu nguoc lai la:\n");
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int i;
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
}

int main() {
    char str[100];
    
    printf("Nhap chuoi: ");
    scanf("%[^\n]", str); 
    
    printReverseCharacters(str);
    
    return 0;
}

