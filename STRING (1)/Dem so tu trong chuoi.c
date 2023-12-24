#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isDelimiter(char ch) {
    return (ch == ' ' || ch == '\t' || ch == '\n');
}

int countWords(char chuoi[]) {
    int soTu = 0;
    bool isWord = false;
    int i;

   
    for (i = 0; chuoi[i] != '\0'; i++) {
       
        if (!isDelimiter(chuoi[i]) && !isWord) {
            isWord = true;
            soTu++;
        }
       
        else if (isDelimiter(chuoi[i])) {
            isWord = false;
        }
    }

    return soTu;
}

int main() {
    char chuoi[1000];

    
    printf("Nhap chuoi: ");
    gets(chuoi); 

    
    int soTu = countWords(chuoi);
    printf("So tu trong chuoi: %d\n", soTu);

    return 0;
}

