#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int isPalindrome = 1;
    
    printf("Nhap vao mot chuoi: ");
    scanf("%s", str);
    
    int length = strlen(str);
    int i;
    
    for ( i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("Chuoi la palindrome.\n");
    } else {
        printf("Chuoi khong phai la palindrome.\n");
    }
    
    return 0;
}

