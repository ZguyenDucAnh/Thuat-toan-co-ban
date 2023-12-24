#include <stdio.h>
#include <string.h>
#include <ctype.h>

void tachTen(char chuoi[]) {
    int i, j = 0;
    char ten[100]; 

  
    for (i = strlen(chuoi) - 1; i >= 0; i--) {
        if (!isspace(chuoi[i])) {
            ten[j++] = chuoi[i]; 
        } else if (j > 0) {
            break; 
        }
    }

    ten[j] = '\0'; 

    
    strrev(ten);

    printf("Ten la: %s\n", ten);
}

int main() {
    char chuoi[1000];

    
    printf("Nhap chuoi: ");
    gets(chuoi); 

    
    tachTen(chuoi);

    return 0;
}

