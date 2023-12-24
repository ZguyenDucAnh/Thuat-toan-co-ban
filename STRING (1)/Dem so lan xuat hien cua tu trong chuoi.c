#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000];
    char searchWord[100];
    int count = 0;

   
    printf("Nhap chuoi: ");
    gets(inputString); 

  
    printf("Nhap tu can tim: ");
    gets(searchWord);

    int i;
    for (i = 0; i <= strlen(inputString) - strlen(searchWord); i++) {
        int j;
        
        for (j = 0; j < strlen(searchWord); j++) {
            
            if (inputString[i + j] != searchWord[j]) {
                break;
            }
        }
       
        if (j == strlen(searchWord)) {
            count++;
        }
    }

    
    printf("So lan xuat hien cua tu '%s' trong chuoi: %d\n", searchWord, count);

    return 0;
}

