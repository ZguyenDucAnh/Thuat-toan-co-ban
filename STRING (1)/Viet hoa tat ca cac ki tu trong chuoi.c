#include <stdio.h>
#include <ctype.h>

int main() {
    char inputString[1000];

    // Nhap chuoi tu ban phim
    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Chuyen tat ca cac ki tu thanh chu viet hoa
    int i;
    for (i = 0; inputString[i] != '\0'; i++) {
        inputString[i] = toupper(inputString[i]);
    }

    // Hien thi chuoi sau khi chuyen
    printf("Chuoi sau khi chuyen thanh chu hoa: %s", inputString);

    return 0;
}

