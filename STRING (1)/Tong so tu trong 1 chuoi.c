#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0;
    bool inWord = false;
    
    while (*str != '\0') {
        if (isspace(*str)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
        
        str++;
    }
    
    return count;
}

int main() {
    char str[1000];
    
    printf("Nhap chuoi: ");
    scanf("%[^\n]", str); 
    
    int wordCount = countWords(str);
    printf("Tong so tu trong chuoi la: %d\n", wordCount);
    
    return 0;
}

