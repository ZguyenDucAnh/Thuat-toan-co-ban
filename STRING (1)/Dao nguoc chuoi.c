#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int i;
    for ( i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];
    
    printf("Nhap vao mot chuoi: ");
    scanf("%s", str);
    
    reverseString(str);
    
    printf("Chuoi dao nguoc la: %s\n", str);
    
    return 0;
}

