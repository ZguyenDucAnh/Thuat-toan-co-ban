#include <stdio.h>
#include <ctype.h>  

void capitalizeFirstLetter(char *str) {
    int firstChar = 1; 
int i;
    for ( i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (firstChar) {
                str[i] = toupper(str[i]);  
                firstChar = 0;  
            } else {
                str[i] = tolower(str[i]);  
            }
        }
        else {
            firstChar = 1;
        }
    }
}

int main() {
    char input[100];
    
    printf("Nhap chuoi: ");
    scanf("%[^\n]s", input);

    capitalizeFirstLetter(input);

    printf("Chuoi sau khi thuc hien: %s\n", input);

    return 0;
}

