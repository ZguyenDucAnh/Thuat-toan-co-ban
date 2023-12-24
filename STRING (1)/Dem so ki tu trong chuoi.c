#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[1000];

    
    printf("Nhap chuoi: ");
    gets(chuoi); 

    
    int soKyTu = strlen(chuoi);
    printf("So ki tu trong chuoi: %d\n", soKyTu);

    return 0;
}

