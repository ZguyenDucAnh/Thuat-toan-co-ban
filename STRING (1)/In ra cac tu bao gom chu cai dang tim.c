#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000];
    char searchWord[100];

    printf("Nhap chuoi: ");
    gets(inputString); 

  
    printf("Nhap tu can tim: ");
    gets(searchWord);

    
    char *token = strtok(inputString, " ");
    while (token != NULL) {
        
        if (strstr(token, searchWord) != NULL) {
            printf("%s\n", token);
        }
        token = strtok(NULL, " ");
    }

    return 0;
}

