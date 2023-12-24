#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000], outputString[1000];
    int i, j = 0;
    
    printf("Nhap chuoi goc: ");
    gets(inputString);

    for(i = 0; i < strlen(inputString); i++) {
        if(inputString[i] != ' ') {
            outputString[j++] = inputString[i];
        }
    }
    
    outputString[j] = '\0'; 
    
    printf("Chuoi sau khi loai bo khoang trang: %s\n", outputString);
    
    return 0;
}

