#include <stdio.h>
#include <string.h>

void thayTheKyTu(char chuoi[], char kyTuCu, char kyTuMoi) {
	int i;
    for (i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTuCu) {
            chuoi[i] = kyTuMoi; 
        }
    }
}

int main() {
    char chuoi[1000];
    char kyTuCu, kyTuMoi;

   
    printf("Nhap chuoi: ");
    gets(chuoi); 

 
    printf("Nhap ki tu can thay: ");
    scanf(" %c", &kyTuCu);
    printf("Nhap ki tu moi: ");
    scanf(" %c", &kyTuMoi);

    
    thayTheKyTu(chuoi, kyTuCu, kyTuMoi);
    printf("Chuoi sau khi thay: %s\n", chuoi);

    return 0;
}

