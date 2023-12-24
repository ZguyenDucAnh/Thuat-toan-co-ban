#include <stdio.h>
#include <string.h>

int timViTriKyTu(char chuoi[], char kyTu) {
	int i;
    for ( i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    char chuoi[1000];
    char kyTu;

    printf("Nhap chuoi: ");
    gets(chuoi);

   
    printf("Nhap ky tu can tim: ");
    scanf(" %c", &kyTu); 


    int viTri = timViTriKyTu(chuoi, kyTu);
    if (viTri != -1) {
        printf("Vi tri cua ki tu'%c' sau tien trong chuoi: %d\n", kyTu, viTri);
    } else {
        printf("Ky tu '%c' khong xuat hien trong chuoi.\n", kyTu);
    }

    return 0;
}

