#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    
    while (right > left) {
        
        if (str[left] != str[right]) {
            return 0; 
        }
        left++;
        right--;
    }
    return 1; 
}

int main() {
    char inputString[100];

    
    printf("Nhap chuoi: ");
    gets(inputString); 

   
    if (isPalindrome(inputString)) {
        printf("La chuoi doi xung.\n");
    } else {
        printf("Khong phai chuoi doi xung.\n");
    }

    return 0;
}

