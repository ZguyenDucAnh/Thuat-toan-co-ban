#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[1000];
    char kyTu;
    int i;
    int viTri[100]; 
    int soLuong = 0; 

    
    printf("Nhap chuoi: ");
    gets(chuoi);
    
    printf("Nhap ki tu can tim: ");
    scanf("%c", &kyTu);

    
    for (i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            viTri[soLuong++] = i + 1;
        }
    }

    
    if (soLuong > 0) {
        printf("Ki tu '%c' xuat hien tai vi ti: ", kyTu);
        for (i = 0; i < soLuong; i++) {
            printf("%d ", viTri[i]);
        }
        printf("\n");
    } else {
        printf("Ki tu '%c'khong xuat hien trong chuoi.\n", kyTu);
    }

    return 0;
}

