#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000];
    char words[100][100]; 
    int i, j = 0, k = 0, numWords;

   
    printf("Nhap chuoi: ");
    gets(inputString); 

    for (i = 0; i <= strlen(inputString); i++) {
        if (inputString[i] == ' ' || inputString[i] == '\0') {
            words[j][k] = '\0'; 
            j++; 
            k = 0; 
        } else {
            words[j][k++] = inputString[i]; 
        }
    }

    numWords = j;

    
    printf("Cac tu tach  ra:\n");
    for (i = 0; i < numWords; i++) {
        printf("%s\n", words[i]);
    }

    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    
    printf("Chuoi moi tu %d tu dau tien: ", n);
    for (i = 0; i < n && i < numWords; i++) {
        printf("%s ", words[i]);
    }

    return 0;
}

