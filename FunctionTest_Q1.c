#include <string.h>
#include <stdio.h>

void Input(char *str, char *ch, int *n) {
    printf("Nhap chuoi: ");
    gets(str);

    printf("\nNhap 1 ky tu: ");
    scanf("%c", ch);

    printf("\nNhap mot so nguyen N: ");
    scanf("%d", n);

    // Check if N is valid
    while (*n < 0 || *n >= strlen(str)) {
        printf("Khong xac dinh N. Moi nhap lai: ");
        scanf("%d", n);
    }
}

int DemKyTuTrongChuoi(char *str, char ch) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}


void DaoNguocChuoi(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];
    char ch;
    int n;

    Input(str, &ch, &n);

    int count = DemKyTuTrongChuoi(str, ch);
    printf("So ky tu '%c' co trong chuoi la: %d\n", ch, count);

    DaoNguocChuoi(str);

    printf("Chuoi moi la: %s\n", str);

    return 0;
}
