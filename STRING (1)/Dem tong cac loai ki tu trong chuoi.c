#include <stdio.h>
#include <ctype.h>

void countCharacters(const char *str, int *alphabets, int *digits, int *specialChars) {
    *alphabets = *digits = *specialChars = 0;
    
    while (*str != '\0') {
        if (isalpha(*str)) {
            (*alphabets)++;
        } else if (isdigit(*str)) {
            (*digits)++;
        } else {
            (*specialChars)++;
        }
        
        str++;
    }
}

int main() {
    char str[1000];
    
    printf("Nhap chuoi: ");
    scanf("%[^\n]", str); 
    
    int alphabets, digits, specialChars;
    
    countCharacters(str, &alphabets, &digits, &specialChars);
    
    printf("So luong chu cai: %d\n", alphabets);
    printf("So luong chu so: %d\n", digits);
    printf("So luong ky tu dac biet: %d\n", specialChars);
    
    return 0;
}

